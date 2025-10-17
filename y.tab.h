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
    INTEGER = 258,                 /* INTEGER  */
    IDENT = 259,                   /* IDENT  */
    CHARVAL = 260,                 /* CHARVAL  */
    VOID = 261,                    /* VOID  */
    SF = 262,                      /* SF  */
    PF = 263,                      /* PF  */
    IF = 264,                      /* IF  */
    ELSE = 265,                    /* ELSE  */
    GREATER = 266,                 /* GREATER  */
    EQEQ = 267,                    /* EQEQ  */
    LESSEQ = 268,                  /* LESSEQ  */
    GREATEREQ = 269,               /* GREATEREQ  */
    LESS = 270,                    /* LESS  */
    INCREMENT = 271,               /* INCREMENT  */
    DECREMENT = 272,               /* DECREMENT  */
    INCL = 273,                    /* INCL  */
    MULTIPLICATION = 274,          /* MULTIPLICATION  */
    DIVIDE = 275,                  /* DIVIDE  */
    RETURN = 276,                  /* RETURN  */
    FLOATVAL = 277,                /* FLOATVAL  */
    PLUS = 278,                    /* PLUS  */
    EQ = 279,                      /* EQ  */
    MINUS = 280,                   /* MINUS  */
    SEMICOLON = 281,               /* SEMICOLON  */
    COMMA = 282,                   /* COMMA  */
    OPPARENTH = 283,               /* OPPARENTH  */
    OPENCURL = 284,                /* OPENCURL  */
    SCANF = 285,                   /* SCANF  */
    DEN = 286,                     /* DEN  */
    CELIM = 287,                   /* CELIM  */
    INTRESERVE = 288,              /* INTRESERVE  */
    DOUBLERESERVE = 289,           /* DOUBLERESERVE  */
    FLOATRESERVE = 290,            /* FLOATRESERVE  */
    CHARRESERVE = 291,             /* CHARRESERVE  */
    DOT = 292,                     /* DOT  */
    QUOTE = 293,                   /* QUOTE  */
    CLPARENTH = 294,               /* CLPARENTH  */
    CLOSECURL = 295,               /* CLOSECURL  */
    PERCENT = 296,                 /* PERCENT  */
    AND = 297,                     /* AND  */
    FOR = 298                      /* FOR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INTEGER 258
#define IDENT 259
#define CHARVAL 260
#define VOID 261
#define SF 262
#define PF 263
#define IF 264
#define ELSE 265
#define GREATER 266
#define EQEQ 267
#define LESSEQ 268
#define GREATEREQ 269
#define LESS 270
#define INCREMENT 271
#define DECREMENT 272
#define INCL 273
#define MULTIPLICATION 274
#define DIVIDE 275
#define RETURN 276
#define FLOATVAL 277
#define PLUS 278
#define EQ 279
#define MINUS 280
#define SEMICOLON 281
#define COMMA 282
#define OPPARENTH 283
#define OPENCURL 284
#define SCANF 285
#define DEN 286
#define CELIM 287
#define INTRESERVE 288
#define DOUBLERESERVE 289
#define FLOATRESERVE 290
#define CHARRESERVE 291
#define DOT 292
#define QUOTE 293
#define CLPARENTH 294
#define CLOSECURL 295
#define PERCENT 296
#define AND 297
#define FOR 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "program.y"

	int number;
	char* str;
	double doubflt;

#line 159 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
