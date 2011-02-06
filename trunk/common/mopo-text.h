
/*

+	Compiling-Render ,  part of SC mid-para

+	'Semo Compiler' is a multi-objective compiler which is developing under the terms of the 
+	GNU general public license as published by the Free Software Foundation.
+	The project lunched by Jelo Wang since 2.Feb.2008 from 'Techniques of Knowledge' community. 

+	You can redistribute it and/or modify it under the terms of the gnu general public version 3 of 
+	the license as published by the free software foundation.this program is distributed in the hope 
+	that it will be useful,but without any warranty.without even the implied warranty of merchantability 
+	or fitness for a particular purpose.																					
																												
+	(C)	突壳开源Techniques of Knowledge
+		an open source community since 2008
+		Community : http://www.tok.cc
+		Contact Us : jelo.wang@gmail.com

+		-Thanks to Our Committers and Friends
+		-Best Wish to all who Contributed and Inspired
+		-Techniques of Knowledge 
+		-致伙伴们最美好祝愿
+		-突壳开源社区

*/ 


# ifndef __MOPOTEXT
# define __MOPOTEXT

#define EX_FONT_CHAR(value) (value)
#define EX_FONT_UNICODE_VAL(value) (value),
#define EX_FONT_ANSI_VAL(value) ,

struct {

	unsigned short value; 
	unsigned char data[14];

} AnsiFont7x14[94] = 
{
	{
		EX_FONT_CHAR('!')
			EX_FONT_ANSI_VAL(0x0021)
		{0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x10, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('\"')
			EX_FONT_ANSI_VAL(0x0022)
		{0x00, 0x00, 0x00, 0x00, 0x28, 0x28, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('#')
			EX_FONT_ANSI_VAL(0x0023)
		{0x00, 0x00, 0x00, 0x00, 0x14, 0x28, 0x7c, 0x28, 0x28, 0x7c, 0x28, 0x50, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('$')
			EX_FONT_ANSI_VAL(0x0024)
		{0x00, 0x00, 0x00, 0x00, 0x10, 0x38, 0x40, 0x30, 0x08, 0x70, 0x20, 0x20, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('%')
			EX_FONT_ANSI_VAL(0x0025)
		{0x00, 0x00, 0x00, 0x00, 0x20, 0x50, 0x20, 0x78, 0x10, 0x28, 0x10, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('&')
			EX_FONT_ANSI_VAL(0x0026)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x20, 0x20, 0x58, 0x48, 0x3c, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('\'')
			EX_FONT_ANSI_VAL(0x0027)
		{0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('(')
			EX_FONT_ANSI_VAL(0x0028)
		{0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x10, 0x10, 0x10, 0x10, 0x08, 0x08, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR(')')
			EX_FONT_ANSI_VAL(0x0029)
		{0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x10, 0x10, 0x10, 0x10, 0x20, 0x20, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('*')
			EX_FONT_ANSI_VAL(0x002a)
		{0x00, 0x00, 0x00, 0x00, 0x10, 0x7c, 0x10, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('+')
			EX_FONT_ANSI_VAL(0x002b)
		{0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x7c, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR(',')
			EX_FONT_ANSI_VAL(0x002c)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x30, 0x20, 0x00}
	},
	{
		EX_FONT_CHAR('-')
			EX_FONT_ANSI_VAL(0x002d)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('.')
			EX_FONT_ANSI_VAL(0x002e)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('/')
			EX_FONT_ANSI_VAL(0x002f)
		{0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x40, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('0')
			EX_FONT_ANSI_VAL(0x0030)
		{0x00, 0x00, 0x00, 0x00, 0x38, 0x44, 0x44, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('1')
			EX_FONT_ANSI_VAL(0x0031)
		{0x00, 0x00, 0x00, 0x00, 0x30, 0x10, 0x10, 0x10, 0x10, 0x10, 0x7c, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('2')
			EX_FONT_ANSI_VAL(0x0032)
		{0x00, 0x00, 0x00, 0x00, 0x38, 0x44, 0x08, 0x10, 0x20, 0x40, 0x7c, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('3')
			EX_FONT_ANSI_VAL(0x0033)
		{0x00, 0x00, 0x00, 0x00, 0x38, 0x44, 0x04, 0x18, 0x04, 0x44, 0x38, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('4')
			EX_FONT_ANSI_VAL(0x0034)
		{0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0x28, 0x48, 0x7c, 0x08, 0x1c, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('5')
			EX_FONT_ANSI_VAL(0x0035)
		{0x00, 0x00, 0x00, 0x00, 0x3c, 0x20, 0x20, 0x38, 0x04, 0x44, 0x38, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('6')
			EX_FONT_ANSI_VAL(0x0036)
		{0x00, 0x00, 0x00, 0x00, 0x1c, 0x20, 0x40, 0x78, 0x44, 0x44, 0x38, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('7')
			EX_FONT_ANSI_VAL(0x0037)
		{0x00, 0x00, 0x00, 0x00, 0x7c, 0x44, 0x04, 0x08, 0x08, 0x10, 0x10, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('8')
			EX_FONT_ANSI_VAL(0x0038)
		{0x00, 0x00, 0x00, 0x00, 0x38, 0x44, 0x44, 0x38, 0x44, 0x44, 0x38, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('9')
			EX_FONT_ANSI_VAL(0x0039)
		{0x00, 0x00, 0x00, 0x00, 0x38, 0x44, 0x44, 0x3c, 0x04, 0x08, 0x70, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR(':')
			EX_FONT_ANSI_VAL(0x003a)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR(';')
			EX_FONT_ANSI_VAL(0x003b)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x30, 0x20, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('<')
			EX_FONT_ANSI_VAL(0x003c)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x18, 0x60, 0x18, 0x04, 0x00, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('=')
			EX_FONT_ANSI_VAL(0x003d)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('>')
			EX_FONT_ANSI_VAL(0x003e)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x30, 0x0c, 0x30, 0x40, 0x00, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('?')
			EX_FONT_ANSI_VAL(0x003f)
		{0x00, 0x00, 0x00, 0x00, 0x30, 0x48, 0x08, 0x10, 0x10, 0x00, 0x30, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('@')
			EX_FONT_ANSI_VAL(0x0040)
		{0x00, 0x00, 0x00, 0x00, 0x38, 0x44, 0x4c, 0x54, 0x54, 0x4c, 0x40, 0x3c, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('A')
			EX_FONT_ANSI_VAL(0x0041)
		{0x00, 0x00, 0x00, 0x00, 0x30, 0x10, 0x28, 0x28, 0x38, 0x44, 0xee, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('B')
			EX_FONT_ANSI_VAL(0x0042)
		{0x00, 0x00, 0x00, 0x00, 0xf8, 0x44, 0x44, 0x78, 0x44, 0x44, 0xf8, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('C')
			EX_FONT_ANSI_VAL(0x0043)
		{0x00, 0x00, 0x00, 0x00, 0x3c, 0x44, 0x40, 0x40, 0x40, 0x44, 0x38, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('D')
			EX_FONT_ANSI_VAL(0x0044)
		{0x00, 0x00, 0x00, 0x00, 0xf0, 0x48, 0x44, 0x44, 0x44, 0x48, 0xf0, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('E')
			EX_FONT_ANSI_VAL(0x0045)
		{0x00, 0x00, 0x00, 0x00, 0x7c, 0x24, 0x28, 0x38, 0x28, 0x24, 0x7c, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('F')
			EX_FONT_ANSI_VAL(0x0046)
		{0x00, 0x00, 0x00, 0x00, 0x7c, 0x24, 0x28, 0x38, 0x28, 0x20, 0x70, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('G')
			EX_FONT_ANSI_VAL(0x0047)
		{0x00, 0x00, 0x00, 0x00, 0x3c, 0x44, 0x40, 0x40, 0x4e, 0x44, 0x38, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('H')
			EX_FONT_ANSI_VAL(0x0048)
		{0x00, 0x00, 0x00, 0x00, 0xee, 0x44, 0x44, 0x7c, 0x44, 0x44, 0xee, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('I')
			EX_FONT_ANSI_VAL(0x0049)
		{0x00, 0x00, 0x00, 0x00, 0x7c, 0x10, 0x10, 0x10, 0x10, 0x10, 0x7c, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('J')
			EX_FONT_ANSI_VAL(0x004a)
		{0x00, 0x00, 0x00, 0x00, 0x3c, 0x08, 0x08, 0x08, 0x48, 0x48, 0x30, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('K')
			EX_FONT_ANSI_VAL(0x004b)
		{0x00, 0x00, 0x00, 0x00, 0xee, 0x44, 0x48, 0x70, 0x48, 0x44, 0xe6, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('L')
			EX_FONT_ANSI_VAL(0x004c)
		{0x00, 0x00, 0x00, 0x00, 0x70, 0x20, 0x20, 0x20, 0x24, 0x24, 0x7c, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('M')
			EX_FONT_ANSI_VAL(0x004d)
		{0x00, 0x00, 0x00, 0x00, 0xee, 0x6c, 0x6c, 0x54, 0x44, 0x44, 0xee, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('N')
			EX_FONT_ANSI_VAL(0x004e)
		{0x00, 0x00, 0x00, 0x00, 0xee, 0x64, 0x64, 0x54, 0x54, 0x4c, 0xec, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('O')
			EX_FONT_ANSI_VAL(0x004f)
		{0x00, 0x00, 0x00, 0x00, 0x38, 0x44, 0x44, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('P')
			EX_FONT_ANSI_VAL(0x0050)
		{0x00, 0x00, 0x00, 0x00, 0x78, 0x24, 0x24, 0x24, 0x38, 0x20, 0x70, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('Q')
			EX_FONT_ANSI_VAL(0x0051)
		{0x00, 0x00, 0x00, 0x00, 0x38, 0x44, 0x44, 0x44, 0x44, 0x44, 0x38, 0x1c, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('R')
			EX_FONT_ANSI_VAL(0x0052)
		{0x00, 0x00, 0x00, 0x00, 0x78, 0x24, 0x24, 0x24, 0x38, 0x24, 0x72, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('S')
			EX_FONT_ANSI_VAL(0x0053)
		{0x00, 0x00, 0x00, 0x00, 0x34, 0x4c, 0x40, 0x38, 0x04, 0x44, 0x78, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('T')
			EX_FONT_ANSI_VAL(0x0054)
		{0x00, 0x00, 0x00, 0x00, 0x7c, 0x54, 0x10, 0x10, 0x10, 0x10, 0x38, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('U')
			EX_FONT_ANSI_VAL(0x0055)
		{0x00, 0x00, 0x00, 0x00, 0xee, 0x44, 0x44, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('V')
			EX_FONT_ANSI_VAL(0x0056)
		{0x00, 0x00, 0x00, 0x00, 0xee, 0x44, 0x44, 0x48, 0x28, 0x28, 0x30, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('W')
			EX_FONT_ANSI_VAL(0x0057)
		{0x00, 0x00, 0x00, 0x00, 0xee, 0x44, 0x54, 0x54, 0x54, 0x54, 0x28, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('X')
			EX_FONT_ANSI_VAL(0x0058)
		{0x00, 0x00, 0x00, 0x00, 0xc6, 0x44, 0x28, 0x10, 0x28, 0x44, 0xc6, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('Y')
			EX_FONT_ANSI_VAL(0x0059)
		{0x00, 0x00, 0x00, 0x00, 0xee, 0x44, 0x28, 0x10, 0x10, 0x10, 0x38, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('Z')
			EX_FONT_ANSI_VAL(0x005a)
		{0x00, 0x00, 0x00, 0x00, 0x7c, 0x44, 0x08, 0x10, 0x20, 0x44, 0x7c, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('[')
			EX_FONT_ANSI_VAL(0x005b)
		{0x00, 0x00, 0x00, 0x00, 0x18, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x18, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('\\')
			EX_FONT_ANSI_VAL(0x005c)
		{0x00, 0x00, 0x00, 0x00, 0x40, 0x20, 0x20, 0x10, 0x10, 0x10, 0x08, 0x08, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR(']')
			EX_FONT_ANSI_VAL(0x005d)
		{0x00, 0x00, 0x00, 0x00, 0x30, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x30, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('^')
			EX_FONT_ANSI_VAL(0x005e)
		{0x00, 0x00, 0x00, 0x00, 0x10, 0x28, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('_')
			EX_FONT_ANSI_VAL(0x005f)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe}
	},
	{
		EX_FONT_CHAR('`')
			EX_FONT_ANSI_VAL(0x0060)
		{0x00, 0x00, 0x00, 0x00, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('a')
			EX_FONT_ANSI_VAL(0x0061)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x44, 0x3c, 0x44, 0x7e, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('b')
			EX_FONT_ANSI_VAL(0x0062)
		{0x00, 0x00, 0x00, 0x00, 0xc0, 0x40, 0x58, 0x64, 0x44, 0x44, 0xf8, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('c')
			EX_FONT_ANSI_VAL(0x0063)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x44, 0x40, 0x40, 0x3c, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('d')
			EX_FONT_ANSI_VAL(0x0064)
		{0x00, 0x00, 0x00, 0x00, 0x0c, 0x04, 0x34, 0x4c, 0x44, 0x44, 0x3e, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('e')
			EX_FONT_ANSI_VAL(0x0065)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x44, 0x7c, 0x40, 0x3c, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('f')
			EX_FONT_ANSI_VAL(0x0066)
		{0x00, 0x00, 0x00, 0x00, 0x0c, 0x10, 0x3c, 0x10, 0x10, 0x10, 0x3c, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('g')
			EX_FONT_ANSI_VAL(0x0067)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x4c, 0x44, 0x44, 0x3c, 0x04, 0x38, 0x00}
	},
	{
		EX_FONT_CHAR('h')
			EX_FONT_ANSI_VAL(0x0068)
		{0x00, 0x00, 0x00, 0x00, 0xc0, 0x40, 0x58, 0x64, 0x44, 0x44, 0xee, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('i')
			EX_FONT_ANSI_VAL(0x0069)
		{0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x70, 0x10, 0x10, 0x10, 0x7c, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('j')
			EX_FONT_ANSI_VAL(0x006a)
		{0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x78, 0x08, 0x08, 0x08, 0x08, 0x08, 0x70, 0x00}
	},
	{
		EX_FONT_CHAR('k')
			EX_FONT_ANSI_VAL(0x006b)
		{0x00, 0x00, 0x00, 0x00, 0xc0, 0x40, 0x5c, 0x48, 0x70, 0x48, 0xdc, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('l')
			EX_FONT_ANSI_VAL(0x006c)
		{0x00, 0x00, 0x00, 0x00, 0x30, 0x10, 0x10, 0x10, 0x10, 0x10, 0x7c, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('m')
			EX_FONT_ANSI_VAL(0x006d)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x54, 0x54, 0x54, 0xfe, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('n')
			EX_FONT_ANSI_VAL(0x006e)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd8, 0x64, 0x44, 0x44, 0xee, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('o')
			EX_FONT_ANSI_VAL(0x006f)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('p')
			EX_FONT_ANSI_VAL(0x0070)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd8, 0x64, 0x44, 0x44, 0x78, 0x40, 0xe0, 0x00}
	},
	{
		EX_FONT_CHAR('q')
			EX_FONT_ANSI_VAL(0x0071)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x4c, 0x44, 0x44, 0x3c, 0x04, 0x0e, 0x00}
	},
	{
		EX_FONT_CHAR('r')
			EX_FONT_ANSI_VAL(0x0072)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6c, 0x30, 0x20, 0x20, 0x78, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('s')
			EX_FONT_ANSI_VAL(0x0073)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x40, 0x38, 0x04, 0x78, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('t')
			EX_FONT_ANSI_VAL(0x0074)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xf8, 0x40, 0x40, 0x44, 0x38, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('u')
			EX_FONT_ANSI_VAL(0x0075)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcc, 0x44, 0x44, 0x4c, 0x36, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('v')
			EX_FONT_ANSI_VAL(0x0076)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xee, 0x44, 0x48, 0x28, 0x30, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('w')
			EX_FONT_ANSI_VAL(0x0077)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xee, 0x44, 0x54, 0x54, 0x28, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('x')
			EX_FONT_ANSI_VAL(0x0078)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6c, 0x28, 0x10, 0x28, 0x6c, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('y')
			EX_FONT_ANSI_VAL(0x0079)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xee, 0x44, 0x28, 0x28, 0x10, 0x10, 0x70, 0x00}
	},
	{
		EX_FONT_CHAR('z')
			EX_FONT_ANSI_VAL(0x007a)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x48, 0x10, 0x24, 0x7c, 0x00, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('{')
			EX_FONT_ANSI_VAL(0x007b)
		{0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x10, 0x10, 0x30, 0x10, 0x10, 0x10, 0x08, 0x00}
	},
	{
		EX_FONT_CHAR('|')
			EX_FONT_ANSI_VAL(0x007c)
		{0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00}
	},
	{
		EX_FONT_CHAR('}')
			EX_FONT_ANSI_VAL(0x007d)
		{0x00, 0x00, 0x00, 0x00, 0x20, 0x10, 0x10, 0x10, 0x18, 0x10, 0x10, 0x10, 0x20, 0x00}
	},
	{
		EX_FONT_CHAR('~')
			EX_FONT_ANSI_VAL(0x007e)
		{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00}
	}
};


# endif

