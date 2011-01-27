
/*

+	Register Allocation , part of SC mid-para

+	Semo C()mpiler is a free software created by (c)Techniques of Knowledge since 20080202.
+	(C)TOK Jelo Wang

+	You can redistribute it and/or modify it under the terms of the gnu general public license	
+	as published by the free software foundation, either version 3 of the license or any later 	
+	version.this program is distributed in the hope that it will be useful,but without any 		
+	warranty.without even the implied warranty of merchantability or fitness for a particular 	
+	purpose.																					
																												
+	(c)	Techniques of Knowledge
+		an open source group since 2008
+		page : http://www.tok.cc
+		email : wqw85@sina.com

*/

# include "sccl.h"
# include "schal.h"
# include "regoc.h"
# include "lac-grammar.h"
# include "lac-lexer.h"

//	��ά��regoc ��¼�˼Ĵ����ķ����������һά��lac�������
//	�ڶ�ά����������
static int** regoc = 0 ;
static int regoclooper = 0 ;

//	����ʶ��������
//	register's livescope monitor , we need this information for the interference-graph generative process
static LIVESCOPE** lsmonitor = 0 ;
static int lslooper = 0 ;
static int lslength = 0 ;
//	default amouts of lsmonitor that means the totall livescopes apeared in one scope
# define LSDEFAULT_LENGTH 1024

//	lac node of the last found
static int laclast = 0 ;

void RegocRegisterReady ( int proctotall ) {

	//	author : Jelo Wang
	//	since : 20110124
	//	(C)TOK	

	regoc = (int** ) SCMalloc ( sizeof(int*)*proctotall ) ;

	ASSERT(regoc) ;
	
	
}

void RegocAllocDestory () {

	//	author : Jelo Wang
	//	since : 20110124

	//	notes : destroy register allocations

	int looper = 0 ;
	
	for ( looper = 0 ; looper < regoclooper ; looper ++ ) {
		SCFree ( regoc[looper] ) ;
	}

	SCFree ( regoc ) ;
	
}

void RegocRegisterAlloc ( int graphp , int lstotall ) {

	//	author : Jelo Wang
	//	since : 20110119
	//	(C)TOK

	//	graph : colored reference-graph

	SCClGraph* graph = (SCClGraph* )graphp ;
	SCClList* looper = 0 ;
	SCClList* next = 0 ;
	
	ASSERT( graph ) ;

	regoc[regoclooper] = (int* ) SCMalloc ( sizeof(int)*lstotall ) ;

	for ( looper = graph->nl.head ; looper ; ) {

		SCClGraphNode* node = (SCClGraphNode* ) looper->element ;
			
		if ( !node ) continue ;
		
		//	node->id is the number of live scope 
		regoc[regoclooper][node->id] = node->color ;

		next = looper->next ;
		SCFree ( node ) ;
		SCFree ( looper ) ;		
		looper = next ;
		
	}
	
	regoclooper ++ ;

	return 0 ;
		
	
}	

void RegocLiveScopeMoiCreate () {

	//	author : Jelo Wang
	//	since : 20110110
	//	(C)TOK
	
	//	create live scope monitor

	lsmonitor = (LIVESCOPE** ) SCMalloc ( sizeof (LIVESCOPE*)*LSDEFAULT_LENGTH ) ;
	ASSERT ( lsmonitor ) ;
	lslength = LSDEFAULT_LENGTH ;
	lslooper = 0 ;

}

void RegocLiveScopeMoiDestroy () {

	//	author : Jelo Wang
	//	since : 20110121
	//	(C)TOK	

	int looper = 0 ;

	for ( looper = 0 ; looper < lslooper ; looper ++ ) {
		SCFree ( lsmonitor[looper] ) ;
	}

	SCFree ( lsmonitor ) ;
	lsmonitor = 0 ;
	lslooper = 0 ;
	
}

static int RegocLiveScopeFind ( char* live , int scope ) {

	//	author : Jelo Wang
	//	since : 20110107
	//	(C)TOK

	int looper = -1 ;

	laclast = 0 ;
	
	//	search the live
	for ( looper = lslooper-1 ; looper > -1 ; looper -- ) {
		if ( scope >= lsmonitor[looper]->scope ) {			
			if ( !sc_strcmp (live , lsmonitor[looper]->live) ) {				
				laclast = lsmonitor[looper]->lac ;
				break ;
			}
		}
		
	}
	
	return looper ;
	
}


int RegocLiveScopeGetLAC () {
	
	//	author : Jelo Wang
	//	since : 20110121
	//	(C)TOK
	
	return laclast ;
	
}

int RegocCheckLiveScope ( char* live , int scope , int line ) {

	//	author : Jelo Wang
	//	since : 20110107
	//	(C)TOK

	LIVESCOPE* ls = 0 ;
	
	int offset = RegocLiveScopeFind ( live , scope ) ;

	if ( -1 == offset ) {
		//	return 0 as default its no problem
		return -1 ;
	}
 
	ls = lsmonitor[offset] ;

	ls->end_line = line ;

	return ls->number ;

}

static int RegocLiveScopeICheck ( LIVESCOPE* ls_1 , LIVESCOPE* ls_2 ) {

	//	if ls_2 is has interference relation with ls_1 return 1 else return 0

	if ( ls_1 == ls_2 ) return 0 ;
	
	if ( -1 == ls_1->end_line || -1 == ls_2->end_line ) 
		return 0 ;
	else if ( (ls_1->start_line == ls_2->start_line) && (ls_1->end_line == ls_2->end_line ) )
		return 1 ;
	else if ( (ls_1->start_line >= ls_2->start_line) && (ls_1->end_line >= ls_2->end_line ) )
		return 1 ;
	else if ( (ls_1->start_line >= ls_2->start_line) && (ls_1->end_line <= ls_2->end_line ) )
		return 1 ;	
	else if ( (ls_1->start_line <= ls_2->start_line) && (ls_1->end_line >= ls_2->end_line ) )
		return 1 ;
	else if ( (ls_1->start_line <= ls_2->start_line) && (ls_2->end_line <= ls_1->end_line ) )
		return 1 ;
	else if ( ls_1->start_line > ls_2->end_line ) 
		return 0 ;
	else if ( ls_1->start_line < ls_2->end_line ) 
		return 0 ;

	return 0 ;
	
}


int RegocLiveScopeAdd ( char* live , int scope , int line , int lac ) {

	//	author : Jelo Wang
	//	since : 20110107
	//	(C)TOK
	
	//	generate live scope , and return its number

	//	if there have not enough pool for saving the live , we needs realloc
	if ( lslooper == lslength ) {	
		lsmonitor = (LIVESCOPE** ) SCRemalloc ( lsmonitor , \
			(lslooper-1)*lslength*sizeof (LIVESCOPE*) , \
			((lslooper-1)*lslength*sizeof (LIVESCOPE*))+LSDEFAULT_LENGTH*sizeof (LIVESCOPE*) ) ;

		ASSERT ( lsmonitor ) ;
		//	new length
		lslength = ((lslooper-1)*lslength)+LSDEFAULT_LENGTH ;
	} 

	lsmonitor[lslooper] = (LIVESCOPE* ) SCMalloc ( sizeof (LIVESCOPE) ) ;
	
	ASSERT (lsmonitor[lslooper]) ;
	
	sc_strcpy ( lsmonitor[lslooper]->live , live ) ;

	lsmonitor[lslooper]->scope = scope ;
	lsmonitor[lslooper]->number = lslooper ;
	lsmonitor[lslooper]->start_line = line ;
	lsmonitor[lslooper]->end_line = -1 ;
	lsmonitor[lslooper]->lac = lac ;
	//	plus lslooper
	lslooper ++ ;

	return lslooper - 1 ;
		
} 


int RegocIGraphCreate () {

	//	author : Jelo Wang
	//	since : 20110107
	//	(C)TOK

	int looper = 0 ;
	int inlooper = 0 ;

	SCClGraph* iG = 0 ;
	//	create interference-graph
	iG = SCClGraphCreate () ;
	
	for ( looper = 0 ; looper < lslooper ; looper ++ ) {

		LIVESCOPE* ls_1 = lsmonitor[looper] ;

		//	add a node into ref graph
		SCClGraphAddNode ( iG , ls_1->number , ls_1->lac ) ;
		
		for ( inlooper = 0 ; inlooper < lslooper ; inlooper ++ ) {

			LIVESCOPE* ls_2 = lsmonitor[inlooper] ;
		
//printf("ls_1->live  %s , ls_2->live %s ,  [%d,%d][%d,%d]\n",ls_1->live , ls_2->live , ls_1->start_line , ls_1->end_line, ls_2->start_line, ls_2->end_line);		
			if ( RegocLiveScopeICheck ( ls_1 , ls_2 ) ) {
		
				SCClGraphAddNode ( iG , ls_2->number , ls_2->lac ) ;
				//	add ref edge bettwen ls_1 and ls_2
				SCClGraphAddEdge ( iG , ls_1->number , ls_2->number ) ;
//				printf("%d- %d\n",ls_1->number , ls_2->number );
			} 
			
		}
		
	}
	
	return (int)iG ;
	
}

void RegocLiveScopeClear () {

	//	author : Jelo Wang
	//	since : 20110107
	//	(C)TOK
	
	//	clear livescope monitor

	lslooper = 0 ;
	
}

//void RegocAllocatorReady () {}

int RegocGetRegister ( int pn , int lsn ) {

	//	author : Jelo Wang
	//	since : 20110119
	//	(C)TOK	

	//	pn : lac procedure number
	//	lsn : live scope number

	return regoc [pn][lsn] ;
	
	
}

 