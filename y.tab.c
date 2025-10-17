/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "program.y"

#include <string.h>
#include <algorithm>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
extern FILE *yyin;
extern int yylex();
void yyerror(const char* s);

static inline void ReplaceAll(string &str, const string& from, const string& to) {
				size_t start_pos = 0;
				while((start_pos = str.find(from, start_pos)) != string::npos) {
					str.replace(start_pos, from.length(), to);
					start_pos += to.length(); 
				}
			}
//I used the algorithm from the following link:https://stackoverflow.com/questions/2896600/how-to-replace-all-occurrences-of-a-character-in-string

#line 92 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 237 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTEGER = 3,                    /* INTEGER  */
  YYSYMBOL_IDENT = 4,                      /* IDENT  */
  YYSYMBOL_CHARVAL = 5,                    /* CHARVAL  */
  YYSYMBOL_VOID = 6,                       /* VOID  */
  YYSYMBOL_SF = 7,                         /* SF  */
  YYSYMBOL_PF = 8,                         /* PF  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_ELSE = 10,                      /* ELSE  */
  YYSYMBOL_GREATER = 11,                   /* GREATER  */
  YYSYMBOL_EQEQ = 12,                      /* EQEQ  */
  YYSYMBOL_LESSEQ = 13,                    /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 14,                 /* GREATEREQ  */
  YYSYMBOL_LESS = 15,                      /* LESS  */
  YYSYMBOL_INCREMENT = 16,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 17,                 /* DECREMENT  */
  YYSYMBOL_INCL = 18,                      /* INCL  */
  YYSYMBOL_MULTIPLICATION = 19,            /* MULTIPLICATION  */
  YYSYMBOL_DIVIDE = 20,                    /* DIVIDE  */
  YYSYMBOL_RETURN = 21,                    /* RETURN  */
  YYSYMBOL_FLOATVAL = 22,                  /* FLOATVAL  */
  YYSYMBOL_PLUS = 23,                      /* PLUS  */
  YYSYMBOL_EQ = 24,                        /* EQ  */
  YYSYMBOL_MINUS = 25,                     /* MINUS  */
  YYSYMBOL_SEMICOLON = 26,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 27,                     /* COMMA  */
  YYSYMBOL_OPPARENTH = 28,                 /* OPPARENTH  */
  YYSYMBOL_OPENCURL = 29,                  /* OPENCURL  */
  YYSYMBOL_SCANF = 30,                     /* SCANF  */
  YYSYMBOL_DEN = 31,                       /* DEN  */
  YYSYMBOL_CELIM = 32,                     /* CELIM  */
  YYSYMBOL_INTRESERVE = 33,                /* INTRESERVE  */
  YYSYMBOL_DOUBLERESERVE = 34,             /* DOUBLERESERVE  */
  YYSYMBOL_FLOATRESERVE = 35,              /* FLOATRESERVE  */
  YYSYMBOL_CHARRESERVE = 36,               /* CHARRESERVE  */
  YYSYMBOL_DOT = 37,                       /* DOT  */
  YYSYMBOL_QUOTE = 38,                     /* QUOTE  */
  YYSYMBOL_CLPARENTH = 39,                 /* CLPARENTH  */
  YYSYMBOL_CLOSECURL = 40,                 /* CLOSECURL  */
  YYSYMBOL_PERCENT = 41,                   /* PERCENT  */
  YYSYMBOL_AND = 42,                       /* AND  */
  YYSYMBOL_FOR = 43,                       /* FOR  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_fncns = 46,                     /* fncns  */
  YYSYMBOL_fncn = 47,                      /* fncn  */
  YYSYMBOL_b_for_funs = 48,                /* b_for_funs  */
  YYSYMBOL_b_for_fun = 49,                 /* b_for_fun  */
  YYSYMBOL_typ_f = 50,                     /* typ_f  */
  YYSYMBOL_parameter = 51,                 /* parameter  */
  YYSYMBOL_assgns = 52,                    /* assgns  */
  YYSYMBOL_assgn = 53,                     /* assgn  */
  YYSYMBOL_assgn_type = 54,                /* assgn_type  */
  YYSYMBOL_decl_body = 55,                 /* decl_body  */
  YYSYMBOL_ifelse = 56,                    /* ifelse  */
  YYSYMBOL_forLoop = 57,                   /* forLoop  */
  YYSYMBOL_incordec = 58,                  /* incordec  */
  YYSYMBOL_comparetype = 59,               /* comparetype  */
  YYSYMBOL_identOrInt = 60,                /* identOrInt  */
  YYSYMBOL_call = 61,                      /* call  */
  YYSYMBOL_callBody = 62,                  /* callBody  */
  YYSYMBOL_pf = 63,                        /* pf  */
  YYSYMBOL_sf = 64                         /* sf  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   269

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  184

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   298


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    36,    36,    36,    36,    38,    38,    39,    41,    48,
      54,    54,    55,    55,    55,    56,    69,    71,    71,    71,
      71,    71,    72,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    92,    92,    92,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   105,   108,   111,   114,   117,
     120,   123,   127,   132,   140,   148,   152,   158,   159,   162,
     163,   164,   165,   166,   170,   171,   174,   175,   179,   180,
     184,   187
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER", "IDENT",
  "CHARVAL", "VOID", "SF", "PF", "IF", "ELSE", "GREATER", "EQEQ", "LESSEQ",
  "GREATEREQ", "LESS", "INCREMENT", "DECREMENT", "INCL", "MULTIPLICATION",
  "DIVIDE", "RETURN", "FLOATVAL", "PLUS", "EQ", "MINUS", "SEMICOLON",
  "COMMA", "OPPARENTH", "OPENCURL", "SCANF", "DEN", "CELIM", "INTRESERVE",
  "DOUBLERESERVE", "FLOATRESERVE", "CHARRESERVE", "DOT", "QUOTE",
  "CLPARENTH", "CLOSECURL", "PERCENT", "AND", "FOR", "$accept", "program",
  "fncns", "fncn", "b_for_funs", "b_for_fun", "typ_f", "parameter",
  "assgns", "assgn", "assgn_type", "decl_body", "ifelse", "forLoop",
  "incordec", "comparetype", "identOrInt", "call", "callBody", "pf", "sf", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-149)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-55)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     128,  -149,   104,  -149,  -149,  -149,  -149,     3,   104,  -149,
       9,   104,  -149,  -149,    12,    31,     2,  -149,  -149,  -149,
    -149,  -149,    24,    68,  -149,    47,   150,    29,  -149,   -12,
      51,    65,   166,    83,    85,    88,    -2,   162,   123,  -149,
    -149,    16,    70,    80,    86,     7,  -149,  -149,  -149,   100,
     105,   143,     0,  -149,   152,    -4,    14,    68,  -149,  -149,
    -149,  -149,   151,   156,   161,   163,   176,  -149,   177,   178,
     179,   180,   181,   182,   186,   187,   188,   189,  -149,   170,
     190,   191,   206,   192,    35,   207,   211,  -149,  -149,   213,
     213,   213,   213,   165,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,   214,  -149,   194,   197,   184,   215,  -149,
     193,   201,   200,   203,  -149,  -149,  -149,  -149,   121,   154,
     124,   149,  -149,   195,   224,  -149,  -149,  -149,  -149,  -149,
     127,   184,  -149,   226,   196,   227,   199,  -149,  -149,   202,
     127,   204,  -149,   205,   208,   210,   209,   228,   216,  -149,
      52,   217,   184,  -149,  -149,   212,    72,   132,   183,  -149,
     218,   219,   221,  -149,   183,   231,   236,  -149,   185,   185,
    -149,  -149,   220,   222,   225,   233,    89,   109,  -149,   223,
    -149,   229,  -149,  -149
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,    17,     0,    21,    18,    19,    20,     0,     3,     6,
       0,     2,     1,     5,     0,     0,     0,    22,    45,    42,
      43,    44,     0,    23,    25,     0,     0,     0,    24,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
      30,     0,     0,     0,     0,     0,    32,    31,    41,     0,
       0,     0,     0,     7,     0,     0,    11,    12,    15,    16,
      14,    13,    46,    53,    48,    47,    54,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     8,    10,     0,
       0,     0,     0,     0,    29,    36,    35,    40,    39,    34,
      33,    38,    37,     0,    76,     0,     0,     0,     0,    60,
       0,     0,     0,    54,    49,    52,    51,    50,     0,    53,
       0,     0,    79,     0,     0,    69,    70,    73,    72,    71,
       0,     0,    59,     0,     0,     0,     0,    75,    74,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,    80,
       0,     0,     0,    81,    56,     0,     0,     0,    55,    58,
       0,     0,     0,    61,    57,     0,     0,    62,     0,     0,
      67,    68,     0,     0,     0,     0,     0,     0,    65,     0,
      66,     0,    63,    64
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,   241,    19,   -56,  -149,  -149,  -149,   234,   103,
    -149,   -37,  -148,  -149,    81,  -127,   111,  -149,   153,  -149,
    -149
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     7,     8,     9,    55,    56,    10,    22,    57,    24,
      25,    30,    58,    59,   172,   130,   139,    35,    79,    60,
      61
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      88,    68,    16,    12,   140,    49,    50,    51,    52,    83,
     163,    77,    37,    14,   -54,    38,   167,    86,    16,    69,
      70,    49,    50,    51,    52,   157,    26,    13,   110,    84,
      13,    18,    19,    20,    21,    16,    87,    17,    53,    16,
      15,    54,    49,    50,    51,    52,    78,    18,    19,    20,
      21,    29,   114,   115,   116,   117,    16,    54,    36,    49,
      50,    51,    52,    27,    18,    19,    20,    21,    18,    19,
      20,    21,    16,    71,    72,   109,    16,    39,    54,    49,
      50,    51,    52,    73,    74,    18,    19,    20,    21,    75,
      76,    40,   154,    16,   155,    54,    49,    50,    51,    52,
     160,    18,    19,    20,    21,    18,    19,    20,    21,    46,
       1,    47,   159,    16,    48,    54,    49,    50,    51,    52,
     179,   181,    18,    19,    20,    21,    28,    66,    80,   178,
     137,   138,    54,    81,     1,   161,   162,     3,     4,     5,
       6,    67,    18,    19,    20,    21,     2,    40,    89,   180,
      46,    91,    54,    31,    32,    33,    18,    19,    20,    21,
      28,     3,     4,     5,     6,    62,    63,    64,   118,   119,
     120,    82,    34,    41,    42,    47,    92,    43,    89,    44,
      85,    90,    45,    90,    65,    41,    42,   121,    91,    43,
      92,    44,    51,    52,    45,   125,   126,   127,   128,   129,
      93,   170,   171,    94,    95,    96,    97,    98,    99,   104,
     107,   111,   100,   101,   102,   112,   103,   113,    77,   131,
     108,   123,   105,   106,   124,   133,   134,    37,   136,   141,
     147,   143,   152,   132,   149,   168,   142,   135,   144,   150,
     169,   145,   153,    11,   148,   165,   156,   166,   151,    23,
     173,   146,   158,     0,   176,     0,   122,     0,   164,   174,
       0,   175,   177,   182,     0,     0,     0,     0,     0,   183
};

static const yytype_int16 yycheck[] =
{
      56,    38,     4,     0,   131,     7,     8,     9,    10,     9,
     158,     4,    24,     4,    26,    27,   164,    21,     4,     3,
       4,     7,     8,     9,    10,   152,    24,     8,    84,    29,
      11,    33,    34,    35,    36,     4,    40,     6,    40,     4,
      28,    43,     7,     8,     9,    10,    39,    33,    34,    35,
      36,     4,    89,    90,    91,    92,     4,    43,    29,     7,
       8,     9,    10,    39,    33,    34,    35,    36,    33,    34,
      35,    36,     4,     3,     4,    40,     4,    26,    43,     7,
       8,     9,    10,     3,     4,    33,    34,    35,    36,     3,
       4,    26,    40,     4,   150,    43,     7,     8,     9,    10,
     156,    33,    34,    35,    36,    33,    34,    35,    36,    26,
       6,    26,    40,     4,    26,    43,     7,     8,     9,    10,
     176,   177,    33,    34,    35,    36,    23,     4,    28,    40,
       3,     4,    43,    28,     6,     3,     4,    33,    34,    35,
      36,    38,    33,    34,    35,    36,    18,    26,    27,    40,
      26,    27,    43,     3,     4,     5,    33,    34,    35,    36,
      57,    33,    34,    35,    36,     3,     4,     5,     3,     4,
       5,    28,    22,    19,    20,    26,    27,    23,    27,    25,
      28,    27,    28,    27,    22,    19,    20,    22,    27,    23,
      27,    25,     9,    10,    28,    11,    12,    13,    14,    15,
      24,    16,    17,    26,    26,    26,    26,    26,    26,    39,
       4,     4,    26,    26,    26,     4,    27,     4,     4,     4,
      28,    27,    32,    32,    27,    24,    26,    24,     4,     3,
      26,     4,     4,    40,    26,     4,    40,    42,    39,    29,
       4,    39,    26,     2,    39,    26,    29,    26,    39,    15,
     169,   140,    40,    -1,    29,    -1,   103,    -1,    40,    39,
      -1,    39,    29,    40,    -1,    -1,    -1,    -1,    -1,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,    18,    33,    34,    35,    36,    45,    46,    47,
      50,    46,     0,    47,     4,    28,     4,     6,    33,    34,
      35,    36,    51,    52,    53,    54,    24,    39,    53,     4,
      55,     3,     4,     5,    22,    61,    29,    24,    27,    26,
      26,    19,    20,    23,    25,    28,    26,    26,    26,     7,
       8,     9,    10,    40,    43,    48,    49,    52,    56,    57,
      63,    64,     3,     4,     5,    22,     4,    53,    55,     3,
       4,     3,     4,     3,     4,     3,     4,     4,    39,    62,
      28,    28,    28,     9,    29,    28,    21,    40,    48,    27,
      27,    27,    27,    24,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    27,    39,    32,    32,     4,    28,    40,
      48,     4,     4,     4,    55,    55,    55,    55,     3,     4,
       5,    22,    62,    27,    27,    11,    12,    13,    14,    15,
      59,     4,    40,    24,    26,    42,     4,     3,     4,    60,
      59,     3,    40,     4,    39,    39,    60,    26,    39,    26,
      29,    39,     4,    26,    40,    48,    29,    59,    40,    40,
      48,     3,     4,    56,    40,    26,    26,    56,     4,     4,
      16,    17,    58,    58,    39,    39,    29,    29,    40,    48,
      40,    48,    40,    40
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    45,    45,    46,    46,    47,    47,    47,
      48,    48,    49,    49,    49,    49,    49,    50,    50,    50,
      50,    50,    51,    51,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    54,    54,    54,    54,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    56,    56,    56,    56,    56,
      56,    56,    56,    57,    57,    57,    57,    58,    58,    59,
      59,    59,    59,    59,    60,    60,    61,    61,    62,    62,
      63,    64
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     0,     2,     1,     7,     8,    11,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     2,     4,     5,
       4,     4,     4,     6,     6,     6,     6,     6,     6,     6,
       6,     4,     1,     1,     1,     1,     3,     3,     3,     5,
       5,     5,     5,     3,     1,     9,     8,    10,     9,     4,
       3,    10,    11,    16,    16,    15,    15,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     1,     3,
       7,     8
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* program: %empty  */
#line 36 "program.y"
                         {cout<<"Enter a valid input"<<endl;}
#line 1412 "y.tab.c"
    break;

  case 7: /* fncn: typ_f IDENT OPPARENTH parameter CLPARENTH OPENCURL CLOSECURL  */
#line 40 "program.y"
                {cout<<"FUNCTION "<<(yyvsp[-5].str)<<" "<<(yyvsp[-3].str)<<"\nEND FUNCTION "<<(yyvsp[-5].str)<<"\n"<<endl;}
#line 1418 "y.tab.c"
    break;

  case 8: /* fncn: typ_f IDENT OPPARENTH parameter CLPARENTH OPENCURL b_for_funs CLOSECURL  */
#line 41 "program.y"
                                                                                 {	
		string s= "FUNCTION "+ string((yyvsp[-6].str)) + " " + string((yyvsp[-4].str)) + "\n" + string((yyvsp[-1].str));
		ReplaceAll(s,string("\n"),string("\n\t"));
		cout<<s;
		cout<<"\nEND FUNCTION "<<(yyvsp[-6].str)<<"\n";
		}
#line 1429 "y.tab.c"
    break;

  case 9: /* fncn: typ_f IDENT OPPARENTH parameter CLPARENTH OPENCURL b_for_funs RETURN IDENT SEMICOLON CLOSECURL  */
#line 48 "program.y"
                                                                                                        {	
		string s= "FUNCTION "+ string((yyvsp[-9].str)) + " " + string((yyvsp[-7].str)) + "\n" + string((yyvsp[-4].str))+"\n"+string((yyvsp[-9].str))+"="+string((yyvsp[-2].str));
		ReplaceAll(s,string("\n"),string("\n\t"));
		cout<<s;
		cout<<"\nEND FUNCTION "<<(yyvsp[-9].str)<<"\n";}
#line 1439 "y.tab.c"
    break;

  case 10: /* b_for_funs: b_for_fun b_for_funs  */
#line 54 "program.y"
                                {(yyval.str) = strdup((string((yyvsp[-1].str))+"\n"+ string((yyvsp[0].str))).c_str());}
#line 1445 "y.tab.c"
    break;

  case 11: /* b_for_funs: b_for_fun  */
#line 54 "program.y"
                                                                                                {(yyval.str)=(yyvsp[0].str);}
#line 1451 "y.tab.c"
    break;

  case 12: /* b_for_fun: assgns  */
#line 55 "program.y"
                 {(yyval.str)=(yyvsp[0].str);}
#line 1457 "y.tab.c"
    break;

  case 13: /* b_for_fun: sf  */
#line 55 "program.y"
                             {(yyval.str)=(yyvsp[0].str);}
#line 1463 "y.tab.c"
    break;

  case 14: /* b_for_fun: pf  */
#line 55 "program.y"
                                         {(yyval.str)=(yyvsp[0].str);}
#line 1469 "y.tab.c"
    break;

  case 15: /* b_for_fun: ifelse  */
#line 56 "program.y"
               {
		string s=string((yyvsp[0].str));
		ReplaceAll(s,string("\n"),string("\n\t"));
		ReplaceAll(s,string("\n\tELSEIF"),string("\nELSEIF"));
		ReplaceAll(s,string("\n\tELSE"),string("\nELSE"));
		if(s[0]=='I'){
			string a = "\nENDIF";
			(yyval.str) = strdup((s+a).c_str());
		}
		else{
			(yyval.str) = strdup(s.c_str());
			}
	}
#line 1487 "y.tab.c"
    break;

  case 16: /* b_for_fun: forLoop  */
#line 69 "program.y"
                {(yyval.str) = (yyvsp[0].str);}
#line 1493 "y.tab.c"
    break;

  case 22: /* parameter: VOID  */
#line 72 "program.y"
               {(yyval.str)=strdup("");}
#line 1499 "y.tab.c"
    break;

  case 24: /* assgns: assgns assgn  */
#line 73 "program.y"
                   {(yyval.str) = strdup((string((yyvsp[-1].str)) + "\n"+string((yyvsp[0].str))).c_str());}
#line 1505 "y.tab.c"
    break;

  case 25: /* assgns: assgn  */
#line 74 "program.y"
              { (yyval.str)=(yyvsp[0].str);}
#line 1511 "y.tab.c"
    break;

  case 26: /* assgn: assgn_type decl_body SEMICOLON  */
#line 75 "program.y"
                                     { (yyval.str)=(yyvsp[-1].str);}
#line 1517 "y.tab.c"
    break;

  case 27: /* assgn: assgn_type IDENT  */
#line 76 "program.y"
                         { (yyval.str) =(yyvsp[0].str);}
#line 1523 "y.tab.c"
    break;

  case 28: /* assgn: assgn_type IDENT COMMA assgn  */
#line 77 "program.y"
                                      {(yyval.str) = strdup((string((yyvsp[-2].str))+" "+string((yyvsp[0].str))).c_str());}
#line 1529 "y.tab.c"
    break;

  case 29: /* assgn: assgn_type IDENT COMMA decl_body SEMICOLON  */
#line 78 "program.y"
                                                    {(yyval.str) = strdup((string((yyvsp[-1].str))).c_str());}
#line 1535 "y.tab.c"
    break;

  case 30: /* assgn: IDENT EQ INTEGER SEMICOLON  */
#line 79 "program.y"
                                   { (yyval.str) = strdup((string((yyvsp[-3].str)) + "=" + to_string((yyvsp[-1].number))).c_str()); }
#line 1541 "y.tab.c"
    break;

  case 31: /* assgn: IDENT EQ FLOATVAL SEMICOLON  */
#line 80 "program.y"
                                    { (yyval.str) = strdup((string((yyvsp[-3].str)) + "=" + to_string((yyvsp[-1].doubflt))).c_str()); }
#line 1547 "y.tab.c"
    break;

  case 32: /* assgn: IDENT EQ CHARVAL SEMICOLON  */
#line 81 "program.y"
                                   { (yyval.str) = strdup((string((yyvsp[-3].str)) + "=" + string((yyvsp[-1].str))).c_str()); }
#line 1553 "y.tab.c"
    break;

  case 33: /* assgn: IDENT EQ IDENT PLUS IDENT SEMICOLON  */
#line 82 "program.y"
                                             { (yyval.str) = strdup((string((yyvsp[-5].str)) + "=" + string((yyvsp[-3].str))+"+"+string((yyvsp[-1].str))).c_str());}
#line 1559 "y.tab.c"
    break;

  case 34: /* assgn: IDENT EQ IDENT PLUS INTEGER SEMICOLON  */
#line 83 "program.y"
                                               { (yyval.str) = strdup((string((yyvsp[-5].str)) + "=" + string((yyvsp[-3].str))+"+"+to_string((yyvsp[-1].number))).c_str());}
#line 1565 "y.tab.c"
    break;

  case 35: /* assgn: IDENT EQ IDENT MULTIPLICATION IDENT SEMICOLON  */
#line 84 "program.y"
                                                        { (yyval.str) = strdup((string((yyvsp[-5].str)) + "=" + string((yyvsp[-3].str))+"*"+string((yyvsp[-1].str))).c_str());}
#line 1571 "y.tab.c"
    break;

  case 36: /* assgn: IDENT EQ IDENT MULTIPLICATION INTEGER SEMICOLON  */
#line 85 "program.y"
                                                          { (yyval.str) = strdup((string((yyvsp[-5].str)) + "=" + string((yyvsp[-3].str))+"*"+to_string((yyvsp[-1].number))).c_str());}
#line 1577 "y.tab.c"
    break;

  case 37: /* assgn: IDENT EQ IDENT MINUS IDENT SEMICOLON  */
#line 86 "program.y"
                                               { (yyval.str) = strdup((string((yyvsp[-5].str)) + "=" + string((yyvsp[-3].str))+"*"+string((yyvsp[-1].str))).c_str());}
#line 1583 "y.tab.c"
    break;

  case 38: /* assgn: IDENT EQ IDENT MINUS INTEGER SEMICOLON  */
#line 87 "program.y"
                                                 { (yyval.str) = strdup((string((yyvsp[-5].str)) + "=" + string((yyvsp[-3].str))+"*"+to_string((yyvsp[-1].number))).c_str());}
#line 1589 "y.tab.c"
    break;

  case 39: /* assgn: IDENT EQ IDENT DIVIDE IDENT SEMICOLON  */
#line 88 "program.y"
                                               { (yyval.str) = strdup((string((yyvsp[-5].str)) + "=" + string((yyvsp[-3].str))+"/"+string((yyvsp[-1].str))).c_str());}
#line 1595 "y.tab.c"
    break;

  case 40: /* assgn: IDENT EQ IDENT DIVIDE INTEGER SEMICOLON  */
#line 89 "program.y"
                                                 { (yyval.str) = strdup((string((yyvsp[-5].str)) + "=" + string((yyvsp[-3].str))+"/"+to_string((yyvsp[-1].number))).c_str());}
#line 1601 "y.tab.c"
    break;

  case 41: /* assgn: IDENT EQ call SEMICOLON  */
#line 90 "program.y"
                                {(yyval.str)=strdup((string((yyvsp[-3].str))+"="+string((yyvsp[-1].str))).c_str());}
#line 1607 "y.tab.c"
    break;

  case 46: /* decl_body: IDENT EQ INTEGER  */
#line 93 "program.y"
                           { (yyval.str) = strdup((string((yyvsp[-2].str)) + "=" + to_string((yyvsp[0].number))).c_str()); }
#line 1613 "y.tab.c"
    break;

  case 47: /* decl_body: IDENT EQ FLOATVAL  */
#line 94 "program.y"
                          { (yyval.str) = strdup((string((yyvsp[-2].str)) + "=" + to_string((yyvsp[0].doubflt))).c_str()); }
#line 1619 "y.tab.c"
    break;

  case 48: /* decl_body: IDENT EQ CHARVAL  */
#line 95 "program.y"
                         { (yyval.str) = strdup((string((yyvsp[-2].str)) + "=" + string((yyvsp[0].str))).c_str()); }
#line 1625 "y.tab.c"
    break;

  case 49: /* decl_body: IDENT EQ INTEGER COMMA decl_body  */
#line 96 "program.y"
                                         { (yyval.str) = strdup((string((yyvsp[-4].str)) + "=" + to_string((yyvsp[-2].number)) + "\n" + string((yyvsp[0].str))).c_str());  }
#line 1631 "y.tab.c"
    break;

  case 50: /* decl_body: IDENT EQ FLOATVAL COMMA decl_body  */
#line 97 "program.y"
                                          { (yyval.str) = strdup((string((yyvsp[-4].str)) + "=" + to_string((yyvsp[-2].doubflt)) + "\n" + string((yyvsp[0].str))).c_str());  }
#line 1637 "y.tab.c"
    break;

  case 51: /* decl_body: IDENT EQ CHARVAL COMMA decl_body  */
#line 98 "program.y"
                                         { (yyval.str) = strdup((string((yyvsp[-4].str)) + "=" + string((yyvsp[-2].str)) + "\n" + string((yyvsp[0].str))).c_str());  }
#line 1643 "y.tab.c"
    break;

  case 52: /* decl_body: IDENT EQ IDENT COMMA decl_body  */
#line 99 "program.y"
                                       { (yyval.str) = strdup((string((yyvsp[-4].str)) + "=" + string((yyvsp[-2].str)) + "\n" + string((yyvsp[0].str))).c_str());  }
#line 1649 "y.tab.c"
    break;

  case 53: /* decl_body: IDENT EQ IDENT  */
#line 100 "program.y"
                       { (yyval.str) = strdup((string((yyvsp[-2].str)) + "=" + string((yyvsp[0].str))).c_str());  }
#line 1655 "y.tab.c"
    break;

  case 54: /* decl_body: IDENT  */
#line 101 "program.y"
              { (yyval.str)=strdup(""); }
#line 1661 "y.tab.c"
    break;

  case 55: /* ifelse: IF OPPARENTH IDENT comparetype identOrInt CLPARENTH OPENCURL b_for_funs CLOSECURL  */
#line 105 "program.y"
                                                                                               {	
			string s= string("IF")+" "+string((yyvsp[-6].str))+" "+string((yyvsp[-5].str))+" "+string((yyvsp[-4].str))+" THEN"+"\n"+string((yyvsp[-1].str));
			(yyval.str) = strdup(s.c_str());}
#line 1669 "y.tab.c"
    break;

  case 56: /* ifelse: IF OPPARENTH IDENT comparetype identOrInt CLPARENTH OPENCURL CLOSECURL  */
#line 108 "program.y"
                                                                              {
			(yyval.str) = strdup((string("IF ")+string((yyvsp[-5].str))+" "+string((yyvsp[-4].str))+" "+string((yyvsp[-3].str))+string(" THEN")).c_str());
		}
#line 1677 "y.tab.c"
    break;

  case 57: /* ifelse: ELSE IF OPPARENTH IDENT comparetype identOrInt CLPARENTH OPENCURL b_for_funs CLOSECURL  */
#line 111 "program.y"
                                                                                               {
			(yyval.str) = strdup((string("ELSEIF")+" "+string((yyvsp[-6].str))+" "+string((yyvsp[-5].str))+" "+string((yyvsp[-4].str))+" THEN"+"\n"+string((yyvsp[-1].str))).c_str());
		}
#line 1685 "y.tab.c"
    break;

  case 58: /* ifelse: ELSE IF OPPARENTH IDENT comparetype identOrInt CLPARENTH OPENCURL CLOSECURL  */
#line 114 "program.y"
                                                                                   {
			(yyval.str) = strdup((string("ELSEIF ")+string((yyvsp[-5].str))+" "+string((yyvsp[-4].str))+" "+string((yyvsp[-3].str))+string(" THEN")).c_str());
		}
#line 1693 "y.tab.c"
    break;

  case 59: /* ifelse: ELSE OPENCURL b_for_funs CLOSECURL  */
#line 117 "program.y"
                                          {
			(yyval.str) = strdup((string("ELSE ")+string((yyvsp[-1].str))).c_str());
		}
#line 1701 "y.tab.c"
    break;

  case 60: /* ifelse: ELSE OPENCURL CLOSECURL  */
#line 120 "program.y"
                               {
			(yyval.str) = strdup((string("ELSE ")+string("THEN")).c_str());
		}
#line 1709 "y.tab.c"
    break;

  case 61: /* ifelse: IF OPPARENTH IDENT comparetype identOrInt CLPARENTH OPENCURL b_for_funs CLOSECURL ifelse  */
#line 123 "program.y"
                                                                                                      {	
			string s= string("IF")+" "+string((yyvsp[-7].str))+" "+string((yyvsp[-6].str))+" "+string((yyvsp[-5].str))+" THEN"+"\n"+string((yyvsp[-2].str))+"\n"+string((yyvsp[0].str));
			(yyval.str) = strdup(s.c_str());
		}
#line 1718 "y.tab.c"
    break;

  case 62: /* ifelse: ELSE IF OPPARENTH IDENT comparetype identOrInt CLPARENTH OPENCURL b_for_funs CLOSECURL ifelse  */
#line 127 "program.y"
                                                                                                      {
			(yyval.str) = strdup((string("ELSEIF")+" "+string((yyvsp[-7].str))+" "+string((yyvsp[-6].str))+" "+string((yyvsp[-5].str))+" THEN"+"\n"+string((yyvsp[-2].str))+"\n"+string((yyvsp[0].str))).c_str());
		}
#line 1726 "y.tab.c"
    break;

  case 63: /* forLoop: FOR OPPARENTH IDENT EQ INTEGER SEMICOLON IDENT comparetype INTEGER SEMICOLON IDENT incordec CLPARENTH OPENCURL b_for_funs CLOSECURL  */
#line 133 "program.y"
        {
			string a= string((yyvsp[-13].str))+ "=" + to_string((yyvsp[-11].number)) + "\n";
			string b= "WHILE " + string((yyvsp[-9].str)) + string((yyvsp[-8].str)) + to_string((yyvsp[-7].number))+"\n" + (yyvsp[-1].str)+"\n"+string((yyvsp[-5].str))+"="+string((yyvsp[-5].str))+string((yyvsp[-4].str))+"1";
			string c = "\nEND WHILE";
			ReplaceAll(b,string("\n"),string("\n\t"));
			(yyval.str) = strdup((a+b+c).c_str());
        }
#line 1738 "y.tab.c"
    break;

  case 64: /* forLoop: FOR OPPARENTH IDENT EQ INTEGER SEMICOLON IDENT comparetype IDENT SEMICOLON IDENT incordec CLPARENTH OPENCURL b_for_funs CLOSECURL  */
#line 141 "program.y"
        {
			string a= string((yyvsp[-13].str))+ "=" + to_string((yyvsp[-11].number)) + "\n";
			string b= "WHILE " + string((yyvsp[-9].str)) + string((yyvsp[-8].str)) + string((yyvsp[-7].str))+"\n" + (yyvsp[-1].str)+"\n"+string((yyvsp[-5].str))+"="+string((yyvsp[-5].str))+string((yyvsp[-4].str))+"1";
			string c = "\nEND WHILE";
			ReplaceAll(b,string("\n"),string("\n\t"));
			(yyval.str) = strdup((a+b+c).c_str());
        }
#line 1750 "y.tab.c"
    break;

  case 65: /* forLoop: FOR OPPARENTH IDENT EQ INTEGER SEMICOLON IDENT comparetype INTEGER SEMICOLON IDENT incordec CLPARENTH OPENCURL CLOSECURL  */
#line 149 "program.y"
        {
            (yyval.str) = strdup((string((yyvsp[-12].str)) + "=" + to_string((yyvsp[-10].number)) + "\n" + "WHILE " + string((yyvsp[-8].str)) + string((yyvsp[-7].str)) + to_string((yyvsp[-6].number)) + "\n").c_str());
        }
#line 1758 "y.tab.c"
    break;

  case 66: /* forLoop: FOR OPPARENTH IDENT EQ INTEGER SEMICOLON IDENT comparetype IDENT SEMICOLON IDENT incordec CLPARENTH OPENCURL CLOSECURL  */
#line 153 "program.y"
        {
            (yyval.str) = strdup((string((yyvsp[-12].str)) + "=" + to_string((yyvsp[-10].number)) + "\n" + "WHILE " + string((yyvsp[-8].str)) + string((yyvsp[-7].str)) + string((yyvsp[-6].str)) + "\n").c_str());
        }
#line 1766 "y.tab.c"
    break;

  case 67: /* incordec: INCREMENT  */
#line 158 "program.y"
                 {(yyval.str) =strdup("+");}
#line 1772 "y.tab.c"
    break;

  case 68: /* incordec: DECREMENT  */
#line 159 "program.y"
                 {(yyval.str) =strdup("-");}
#line 1778 "y.tab.c"
    break;

  case 69: /* comparetype: GREATER  */
#line 162 "program.y"
                 {(yyval.str) =strdup((string((yyvsp[0].str))).c_str());}
#line 1784 "y.tab.c"
    break;

  case 70: /* comparetype: EQEQ  */
#line 163 "program.y"
                 {(yyval.str) =strdup((string((yyvsp[0].str))).c_str());}
#line 1790 "y.tab.c"
    break;

  case 71: /* comparetype: LESS  */
#line 164 "program.y"
                  {(yyval.str) =strdup((string((yyvsp[0].str))).c_str());}
#line 1796 "y.tab.c"
    break;

  case 72: /* comparetype: GREATEREQ  */
#line 165 "program.y"
                   {(yyval.str) =strdup((string((yyvsp[0].str))).c_str());}
#line 1802 "y.tab.c"
    break;

  case 73: /* comparetype: LESSEQ  */
#line 166 "program.y"
                  {(yyval.str) =strdup((string((yyvsp[0].str))).c_str());}
#line 1808 "y.tab.c"
    break;

  case 74: /* identOrInt: IDENT  */
#line 170 "program.y"
              {(yyval.str) =strdup((string((yyvsp[0].str))).c_str());}
#line 1814 "y.tab.c"
    break;

  case 75: /* identOrInt: INTEGER  */
#line 171 "program.y"
                        {(yyval.str) =strdup(to_string((yyvsp[0].number)).c_str());}
#line 1820 "y.tab.c"
    break;

  case 76: /* call: IDENT OPPARENTH callBody CLPARENTH  */
#line 174 "program.y"
                                           { (yyval.str) = strdup((string((yyvsp[-3].str))+" "+string((yyvsp[-1].str))).c_str());}
#line 1826 "y.tab.c"
    break;

  case 77: /* call: IDENT OPPARENTH CLPARENTH  */
#line 175 "program.y"
                                   {(yyval.str)=(yyvsp[-2].str);}
#line 1832 "y.tab.c"
    break;

  case 78: /* callBody: IDENT  */
#line 179 "program.y"
                { (yyval.str) = strdup((string((yyvsp[0].str))).c_str()); }
#line 1838 "y.tab.c"
    break;

  case 79: /* callBody: IDENT COMMA callBody  */
#line 180 "program.y"
                             {(yyval.str) = strdup((string((yyvsp[-2].str))+" "+string((yyvsp[0].str))).c_str());}
#line 1844 "y.tab.c"
    break;

  case 80: /* pf: PF OPPARENTH CELIM COMMA IDENT CLPARENTH SEMICOLON  */
#line 184 "program.y"
                                                                 {(yyval.str)=strdup(("PRINT "+string((yyvsp[-2].str))).c_str());}
#line 1850 "y.tab.c"
    break;

  case 81: /* sf: SF OPPARENTH CELIM COMMA AND IDENT CLPARENTH SEMICOLON  */
#line 187 "program.y"
                                                         {(yyval.str) =strdup(("READ "+string((yyvsp[-2].str))).c_str());}
#line 1856 "y.tab.c"
    break;


#line 1860 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 189 "program.y"


void yyerror(const char* s){
	cout<<"error: "<<s<<endl;
}

int yywrap(){
	return 1;
}

int main(int argc, char *argv[])
{
	yyin=fopen(argv[1],"r");
	yyparse();
	fclose(yyin);
	return 0;
}
