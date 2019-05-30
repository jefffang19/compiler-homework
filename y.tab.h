/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BOOLEAN = 258,
    BREAK = 259,
    BYTE = 260,
    CASE = 261,
    CHAR = 262,
    CATCH = 263,
    CLASS = 264,
    CONST = 265,
    CONTINUE = 266,
    DEFAULT = 267,
    DO = 268,
    DOUBLE = 269,
    ELSE = 270,
    EXTENDS = 271,
    FALSE2 = 272,
    FINAL = 273,
    FINALLY = 274,
    FLOAT = 275,
    FOR = 276,
    IF = 277,
    IMPLEMENTS = 278,
    INT = 279,
    LONG = 280,
    MAIN = 281,
    NEW = 282,
    PRINT = 283,
    PRIVATE = 284,
    PROTECTED = 285,
    PUBLIC = 286,
    RETURN = 287,
    SHORT = 288,
    STATIC = 289,
    STRING = 290,
    SWITCH = 291,
    THIS = 292,
    TRUE2 = 293,
    TRY = 294,
    VOID = 295,
    WHILE = 296,
    READ = 297,
    INTEGER = 298,
    REAL = 299,
    ID = 300,
    PPLUS = 301,
    MMINUS = 302,
    SEQUAL = 303,
    BEQUAL = 304,
    EQUAL = 305,
    NEQUAL = 306,
    AND = 307,
    OR = 308
  };
#endif
/* Tokens.  */
#define BOOLEAN 258
#define BREAK 259
#define BYTE 260
#define CASE 261
#define CHAR 262
#define CATCH 263
#define CLASS 264
#define CONST 265
#define CONTINUE 266
#define DEFAULT 267
#define DO 268
#define DOUBLE 269
#define ELSE 270
#define EXTENDS 271
#define FALSE2 272
#define FINAL 273
#define FINALLY 274
#define FLOAT 275
#define FOR 276
#define IF 277
#define IMPLEMENTS 278
#define INT 279
#define LONG 280
#define MAIN 281
#define NEW 282
#define PRINT 283
#define PRIVATE 284
#define PROTECTED 285
#define PUBLIC 286
#define RETURN 287
#define SHORT 288
#define STATIC 289
#define STRING 290
#define SWITCH 291
#define THIS 292
#define TRUE2 293
#define TRY 294
#define VOID 295
#define WHILE 296
#define READ 297
#define INTEGER 298
#define REAL 299
#define ID 300
#define PPLUS 301
#define MMINUS 302
#define SEQUAL 303
#define BEQUAL 304
#define EQUAL 305
#define NEQUAL 306
#define AND 307
#define OR 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 6 "test.y" /* yacc.c:1909  */

	char* s;
	float d;
	int i;

#line 166 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
