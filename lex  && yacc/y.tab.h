/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ADD = 258,                     /* ADD  */
    MINUS = 259,                   /* MINUS  */
    MULT = 260,                    /* MULT  */
    DIVISION = 261,                /* DIVISION  */
    POWER = 262,                   /* POWER  */
    MODULA = 263,                  /* MODULA  */
    EQUAL = 264,                   /* EQUAL  */
    FACTORIAL = 265,               /* FACTORIAL  */
    GCD = 266,                     /* GCD  */
    LN = 267,                      /* LN  */
    LOG = 268,                     /* LOG  */
    SIN = 269,                     /* SIN  */
    COS = 270,                     /* COS  */
    TAN = 271,                     /* TAN  */
    COT = 272,                     /* COT  */
    EXIT = 273,                    /* EXIT  */
    PRINT = 274,                   /* PRINT  */
    LOWER = 275,                   /* LOWER  */
    GREATER = 276,                 /* GREATER  */
    LE = 277,                      /* LE  */
    GE = 278,                      /* GE  */
    ISEQ = 279,                    /* ISEQ  */
    OR = 280,                      /* OR  */
    AND = 281,                     /* AND  */
    WHILE = 282,                   /* WHILE  */
    NUMBER = 283,                  /* NUMBER  */
    identifier = 284               /* identifier  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ADD 258
#define MINUS 259
#define MULT 260
#define DIVISION 261
#define POWER 262
#define MODULA 263
#define EQUAL 264
#define FACTORIAL 265
#define GCD 266
#define LN 267
#define LOG 268
#define SIN 269
#define COS 270
#define TAN 271
#define COT 272
#define EXIT 273
#define PRINT 274
#define LOWER 275
#define GREATER 276
#define LE 277
#define GE 278
#define ISEQ 279
#define OR 280
#define AND 281
#define WHILE 282
#define NUMBER 283
#define identifier 284

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 35 "calc.y"
 double dtype; char id;

#line 128 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
