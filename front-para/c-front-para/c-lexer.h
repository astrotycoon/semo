
/*

+	LEXER , part of SC c-front-para

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

# ifndef __C_LEXER_
# define __C_LEXER_

# include "sccl.h"

# define LEXERC_HEADBIT_RESET() lexc->headbit = 0 ;
# define lexerc_clearv() lexc->v = 0 ;

enum {

	//	author : Jelo Wang
	//	(C)TOK

	//	normal mode without specical features
	LEXERC_DEFAULT_MODE = 0x1	 ,
	//	normal mode with specical features , like blank fliter
	LEXERC_FLITER_MODE = 0x2 ,
	//	define-head bitmap generation process
	LEXERC_HEADBIT_MODE = 0x4
 	
	

} LEXERC_MODE ;

enum {

	//	author : Jelo Wang
	//	notes : bracket type , smart , mid , strong
	//	since : 20100414
	//	(C)TOK

	LEXC_SMART_BRACKET ,
	LEXC_MID_BRACKET ,
	LEXC_STRONG_BRACKET 
	
} BRACKET_TYPE ;


typedef struct {
	
	//	author : Jelo Wang
	//	notes : key words of c language
	//	since : 2008
	//	(c)TOK

	char* name ;
	int   type ;

} C_KEYWORDS ;


typedef struct {
	
	//	author : Jelo Wang
	//	notes : CODE
	//	since : 20090811
	//	(c)TOK
	
	//	(1) : lexical value 
	//	(2) : previous lexical value

	char* token ;
	char* file ;
	char c ;
	char pc ;
	
	int v ;
	int pv ;
	int ppv ;
	int line ;
	int stop ;
	int mode ;
	int deep ;	// if recursive occured , deep + 1
	int headbit ;
	
	//	ignore odd symbols
	int ios ;
	int stack ; 
	
	SCClStack* scstack ;
	SCClString* code ;


} LEXERC ;


# endif


extern LEXERC* lexc ;

extern void lexerc_setmode ( int mode ) ;
extern void lexerc_ready () ;
extern int lexerc_overflowed () ;
extern int lexerc_next () ;
extern unsigned char lexerc_get_atom () ;
extern void lexerc_put_atom ( unsigned char atom ) ; 
extern void lexerc_rollback () ;
extern void lexerc_setback ( int step ) ;
extern void lexerc_skip_blank () ;
extern void lexerc_skip_space () ;
extern void lexerc_jump ( int step ) ;
extern int lexerc_look ( int step ) ;
extern void lexerc_genv () ;
extern LEXERC* lexerc_new ( unsigned char* data , int mmode ) ;
extern void lexerc_set ( LEXERC* lexer ) ;
extern void lexerc_clear_status () ;
extern void lexerc_set_file ( char* name ) ;
extern void lexerc_destroy () ;
extern LEXERC* lexerc_get () ;
extern void lexerc_clear_headbit () ;
extern int lexerc_head_genv ( int border ) ;
extern int lexerc_expect ( int atom ) ;
