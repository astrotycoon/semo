
/*

+	LAIR is an abstractive machine defined by semo , part of SC mid-para

+	'Semo Compiler' is a multi-objective compiler which is developing under the terms of the 
+	GNU general public license as published by the Free Software Foundation.
+	The project lunched by Jelo Wang since 2.Feb.2008 from 'Techniques of Knowledge' community. 

+	You can redistribute it and/or modify it under the terms of the gnu general public version 3 of 
+	the license as published by the free software foundation.this program is distributed in the hope 
+	that it will be useful,but without any warranty.without even the implied warranty of merchantability 
+	or fitness for a particular purpose.																					
																												
+	(C)	ͻ�ǿ�ԴTechniques of Knowledge
+		an open source community since 2008
+		Community : http://www.tok.cc
+		Contact Us : jelo.wang@gmail.com

+		-Thanks to Our Committers and Friends
+		-Best Wish to all who Contributed and Inspired
+		-Techniques of Knowledge 
+		-�»����������ףԸ
+		-ͻ�ǿ�Դ����

*/ 

# ifndef __LAIR_
# define __LAIR_

# include "sccl.h"

//	Jelo Edited 20120315
#if 0
typedef enum {

	//	author : Jelo Wang
	//	since : 20100722
	//	(C)TOK

	//	lair EXPR atoms
	
	LAIR_FLOW_LOGICAL ,
	LAIR_FLOW_LOOP ,

} LAIR_FLOW_ATOM ;

typedef enum {

	//	author : Jelo Wang
	//	since : 20100722
	//	(C)TOK

	//	lair EXPR atoms

	LAIR_REG_MEMPORT ,	
	LAIR_STATIC_MEMPORT ,
	LAIR_STACK_MEMPORT ,
	LAIR_HEAP_MEMPORT ,

} LAIR_MEMPORT ;


typedef struct {

	//	author : Jelo Wang
	//	since : 20100722
	//	(C)TOK

	//	LAIR Control-flow 
	
	LAIR_FLOW_ATOM type ;
	
	char* label ;
	char* expr ;
		
} LAIR_FLOW ;

typedef struct {

	//	author : Jelo Wang
	//	since : 20100722
	//	(C)TOK

	//	LAIR symbol 
	
	char* name ;
	char* label ;

	LAIR_MEMPORT memport ;
	int based ;
	int size ;	
	
} LAIR_SYMBOL ;

#endif
//	Jelo Edited Finished

typedef enum {


	//	author : Jelo Wang
	//	since : 20100722
	//	(C)TOK

	//	A procedure , function or method and some thing like that
	LAIR_PROC ,	
	//	An if logic node
	LAIR_IF ,
	//	A lvalue
	LAIR_L_DELT ,
	//	A rvalue but you know it already
	LAIR_R_DELT ,
	//	A rvalue of memory mode
	LAIR_L_MEM ,
	//	A lvalue of memory mode
	LAIR_R_MEM ,
	//	A function call
	LAIR_P_CALL ,	
	//	just change row
	LAIR_CR ,
	
} LAIR_ATOM ;

typedef struct {

	//	author : Jelo Wang
	//	since : 20100107
	//	(C)TOK

	//	LAIR-CALL-FRAME
	//	call-frame is a manager for the parameter transfering of function-calling 

	//	type of frame , value bettwen LAIR_REG_CFRAME , LAIR_STK_CFRAME
	int type ;

	//	a pointer to an azonal name
	void* handle ;
	
	char* frame ;

	struct {

		int top ;

	} stack ;
	
} LAIRMemoryFrame ;

typedef struct LAIRA {

	//	author : Jelo Wang
	//	since : 20100505
	//	(C)TOK

	//	a LAIR flow consits two part
	//	oprand1 op oprand2
	//	and a label if necessary

	//	lair type
	int type ;
	//	a handle to another datas
	int handle ;
	//	scope of lair atom
	int scope ;
	//	line position
	int line ;
	//	totall of lair-procedure
	int proctotall ;
	int havelabel ;
	//	number of the lair atom in the whole chain
	int number ;
	int length ;
	//	lair codes length in bytes
	int colen ;
	
	struct LAIRA* head ;
	struct LAIRA* next ;

	SCClString code ;

	//	reference chain
	SCClList refchain ;

} LAIR ;

typedef struct LMON {

	//	author : Jelo Wang
	//	since : 20100505
	//	(C)TOK
	
	LAIR* lair ;
	struct LMON* head ; 
	struct LMON* next ; 

} LABELMOI ;

# endif

extern int LairCreate () ;
extern void LairSetContext ( int context ) ;
extern LAIR* LairGetCodeEx ( int number ) ;
extern int LairAddCode ( char* string , LAIR_ATOM type , int scope ) ;
extern void LairAddCodeLabel ( int number , char* label ) ;
extern char* LairGetCode () ;
extern void LairAllocRegister ( int degreesmax ) ;
extern void LairClearCode () ;
extern void LairClearCodeEx ( LAIR* walker ) ;

extern int LairLabelMoiNew () ;
extern void LairLabelMoiSetContext ( int monitor ) ;
extern void LairLabelMoiAdd ( int lair ) ;
extern void LairLabelMoiSetLabel ( char* label ) ;
extern void LairLabelMoiClear () ;
extern void LAIRMemoryFrameInit ( int totall ) ;
extern void LAIRMemoryFrameAdd ( void* var , char* frame ) ;
extern char* LAIRMemoryFrameGet ( char* var ) ;
 
