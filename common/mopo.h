
/*

+	Compiling-Render ,  part of SC mid-para

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

# ifndef __MOPO
# define __MOPO

enum {

	//	author : Jelo Wang
	//	since : 20100802
	//	(C)TOK

	MOPO_RGB565 ,
	MOPO_RGB888 ,	
	MOPO_RGB8888 ,	
	
} ;

typedef struct {

	//	author : Jelo Wang
	//	since : 20100802
	//	(C)TOK

	unsigned char* buffer ;
	int width ;
	int height ;
	int format ;

} MOPO ;

# endif

extern int MOPOCreatePanel ( int format , int width , int height ) ;
extern int MOPOOutputPanel ( char* path ) ;
extern void MOPODestroyPanel () ;

extern void MOPODrawPixel ( int x , int y , int red , int green , int blue ) ;
extern void MOPODrawLine ( int x1 , int y1 , int x2 , int y2 , int red , int green , int blue ) ;
extern void MOPODrawCircle ( int x , int y , int raduis , int red , int green , int blue ) ;
extern void MOPOFillCircle ( int x , int y , int raduis , int red , int green , int blue ) ;
extern void MOPODrawText ( int x , int y , const char* text , int red , int green , int blue ) ;
extern void MOPODrawRect ( int x , int y , int x_scale , int y_scale , int linewidth , int red , int green , int blue ) ;
extern void MOPOStretch ( int cx , int cy , float radius , int dx , int dy ) ;
extern void MOPODrawGrid ( int red , int green , int blue ) ;

extern void MOPOExpDFSRender ( void* exp , int x , int y ) ;
extern int MOPOLgaExpRender ( void* lgnosiaa , int anltype , int x , int y ) ;
extern void MOPOCFBFSRender ( void* lgnosiaa , int x , int y ) ;
extern int MOPOCFDFSRender ( void* lgnosiaa , int type , int x , int y , int fx , int fy , int deep ) ;
extern int MOPOExpBFSRender ( void* exp , int x , int y ) ;	
extern void MOPOIGBFSRender ( SCClGraph* graph  ) ;

