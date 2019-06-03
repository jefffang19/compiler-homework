/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "test.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#define returnDollarLEN 100
#define IDLISTSIZE 100
#define IDLEN 100
#define STACKSIZE 50
struct st_func{
	int size;
	char scope_name[IDLEN];
	char idlist[IDLISTSIZE][IDLEN];
};
typedef struct st_func ST;

struct mystack{
	int size;
	ST list[STACKSIZE];
}table;
typedef struct mystack STACK;

void into_scope(char str[]);
void add_id(char str[]);
void out_scope();
void print_current();
int check_sameid(char str[]);

int sem_def;
void yyerror(const char *str);

#line 96 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 30 "test.y" /* yacc.c:355  */

	char* s;
	char c;
	float d;
	int i;

#line 249 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 266 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   837

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  154
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  303

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,     2,     2,    68,     2,     2,
      56,    57,    61,    65,    58,    66,    64,    67,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    54,
      62,    55,    63,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    60,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,     2,    71,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    54,    58,    62,    67,    76,    83,    87,    90,    94,
      99,   108,   117,   126,   135,   145,   155,   165,   175,   183,
     191,   199,   208,   212,   216,   220,   225,   226,   227,   229,
     234,   242,   250,   258,   262,   270,   278,   286,   295,   296,
     301,   305,   309,   313,   317,   321,   325,   329,   334,   335,
     339,   341,   342,   343,   344,   345,   346,   348,   352,   356,
     360,   364,   368,   373,   377,   381,   385,   389,   393,   397,
     401,   406,   407,   408,   412,   417,   418,   422,   426,   431,
     431,   431,   431,   431,   431,   433,   437,   441,   445,   449,
     453,   457,   459,   460,   464,   468,   472,   477,   488,   496,
     504,   512,   513,   519,   520,   524,   528,   530,   531,   535,
     541,   546,   547,   551,   552,   553,   557,   560,   563,   565,
     573,   581,   589,   597,   601,   606,   614,   624,   628,   633,
     637,   638,   639,   643,   647,   651,   656,   660,   665,   666,
     671,   675,   679,   681,   685
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOLEAN", "BREAK", "BYTE", "CASE",
  "CHAR", "CATCH", "CLASS", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE",
  "ELSE", "EXTENDS", "FALSE2", "FINAL", "FINALLY", "FLOAT", "FOR", "IF",
  "IMPLEMENTS", "INT", "LONG", "MAIN", "NEW", "PRINT", "PRIVATE",
  "PROTECTED", "PUBLIC", "RETURN", "SHORT", "STATIC", "STRING", "SWITCH",
  "THIS", "TRUE2", "TRY", "VOID", "WHILE", "READ", "INTEGER", "REAL", "ID",
  "PPLUS", "MMINUS", "SEQUAL", "BEQUAL", "EQUAL", "NEQUAL", "AND", "OR",
  "';'", "'='", "'('", "')'", "','", "'['", "']'", "'*'", "'<'", "'>'",
  "'.'", "'+'", "'-'", "'/'", "'%'", "'!'", "'{'", "'}'", "$accept",
  "readin", "declaration", "class_declr", "new_obj", "class_body",
  "method_declr", "method_declr_parem", "method_modifier", "assign",
  "arrinit", "arrinit_expr", "conditional", "boolean_expr", "infixop",
  "loop", "for_parem", "forinitop", "forupdate", "type", "simple", "name",
  "identifier_list", "expr", "term", "factor", "prefixOp", "postfixOp",
  "const_expr", "compound", "function", "func_parem", "func_return",
  "leftcurly", "rightcurly", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,    59,    61,    40,    41,    44,    91,
      93,    42,    60,    62,    46,    43,    45,    47,    37,    33,
     123,   125
};
# endif

#define YYPACT_NINF -228

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-228)))

#define YYTABLE_NINF -153

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -228,   479,  -228,    92,  -228,  -228,   -10,   188,  -228,     2,
       6,  -228,    43,  -228,  -228,  -228,   188,   -16,  -228,    56,
      60,  -228,  -228,    23,    75,    91,  -228,   683,   280,   309,
     103,    72,  -228,  -228,  -228,   188,  -228,   105,  -228,    49,
    -228,    95,   771,  -228,   143,  -228,  -228,  -228,  -228,    94,
    -228,    50,   738,   688,   683,    50,    78,   103,   122,  -228,
    -228,   -18,   137,  -228,  -228,  -228,  -228,    81,   129,    -6,
    -228,  -228,  -228,  -228,   -36,  -228,  -228,   145,  -228,   277,
     -24,   147,   136,  -228,   142,   148,   683,   170,   152,  -228,
    -228,  -228,  -228,  -228,  -228,  -228,   762,   762,   683,   762,
     762,   762,  -228,   764,   284,  -228,   154,   616,   149,   165,
     187,    50,   167,   198,    96,  -228,   546,   186,   193,   217,
     196,   178,   129,   197,  -228,  -228,   206,   163,    50,   -19,
     208,   209,   223,   216,    50,  -228,  -228,   108,  -228,    35,
     226,  -228,  -228,  -228,   108,  -228,  -228,  -228,   220,   213,
     764,   234,   311,   244,   756,   546,   632,   546,   246,  -228,
      38,   600,   546,   248,   259,  -228,  -228,  -228,   547,   -33,
     249,   266,  -228,   253,   261,    50,  -228,   272,   287,  -228,
     683,  -228,   764,  -228,  -228,  -228,   756,    83,   292,   293,
    -228,  -228,   311,  -228,  -228,   600,   311,   294,   335,   600,
    -228,   648,   306,   275,   327,   213,   310,  -228,   600,  -228,
     307,   -22,   308,  -228,   377,    11,    25,   313,    94,  -228,
     339,   188,  -228,  -228,  -228,  -228,  -228,  -228,  -228,   213,
    -228,   311,   514,   213,  -228,   198,   427,  -228,  -228,  -228,
    -228,   213,   318,  -228,   377,    18,   213,  -228,  -228,   377,
     188,   319,    94,   683,   188,   317,  -228,  -228,  -228,  -228,
     600,   364,  -228,  -228,  -228,   213,  -228,  -228,   377,  -228,
     213,  -228,  -228,   188,   683,   213,   110,   323,   342,   213,
     514,  -228,   213,  -228,  -228,  -228,   213,  -228,   683,   343,
     328,  -228,  -228,  -228,   600,  -228,  -228,  -228,   329,  -228,
     213,  -228,  -228
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      10,     0,     1,   116,    89,    90,     0,     0,    92,     0,
       0,    91,     0,    36,    37,    38,     0,   124,    94,     0,
       0,   137,   138,   102,     0,     0,   101,     0,     0,     0,
       0,     0,     4,     5,     3,     0,     7,     0,     9,     0,
       6,   121,     0,   113,   117,   126,   127,   123,   128,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,   135,
     136,     0,     0,   129,   130,   116,   124,   102,   121,     0,
     131,   133,   132,   134,   102,   122,     2,     0,     8,   107,
       0,     0,   111,    11,     0,     0,     0,     0,     0,    65,
      66,    61,    62,   100,    63,    64,     0,     0,     0,     0,
       0,     0,   153,     0,   107,    13,     0,     0,    81,     0,
       0,     0,     0,    58,     0,    12,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   125,     0,     0,     0,     0,
     108,     0,     0,    42,     0,    98,    99,    39,   146,   148,
       0,    95,   114,   115,    59,   118,   119,   120,     0,     0,
      17,    82,    80,     0,     0,     0,     0,     0,     0,    69,
       0,     0,     0,     0,     0,   104,   105,   106,     0,     0,
       0,     0,   110,     0,     0,     0,    43,    40,     0,   112,
       0,   147,    16,   154,    14,    19,     0,     0,     0,     0,
      77,    85,    78,    83,    71,     0,    79,     0,    50,     0,
      96,     0,     0,     0,     0,     0,     0,    67,     0,    97,
       0,     0,     0,    29,     0,     0,    32,    41,     0,   109,
       0,     0,   149,    18,    84,    88,    86,    87,    74,     0,
      75,    76,     0,     0,   151,    58,     0,   144,   143,    70,
     145,     0,     0,    31,     0,     0,     0,    26,    28,     0,
       0,    34,     0,     0,     0,     0,    72,    73,    56,    52,
       0,    51,   142,    68,    15,     0,    27,    30,     0,    22,
       0,    24,    33,     0,     0,     0,    48,     0,     0,     0,
       0,    23,     0,    25,    20,    35,     0,    47,     0,     0,
       0,    53,    57,    54,     0,    21,    46,    49,     0,    45,
       0,    44,    55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -228,  -228,    15,  -228,  -228,  -136,   386,  -159,  -228,   -35,
    -228,  -227,     0,   -41,  -228,  -228,  -228,  -146,  -174,     4,
       1,   -23,   -38,    -1,   189,  -228,  -228,  -142,   190,   -15,
     330,   210,  -228,  -113,    26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   202,    32,    33,   149,   150,   170,    35,   130,
      82,   275,   203,    37,    98,    38,   109,   110,   190,   111,
     204,    41,    83,   160,    43,    44,    45,    46,    47,   205,
      48,   140,   206,   103,   184
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,    36,    40,   161,    68,    39,    88,    75,   193,   212,
     191,    51,   112,   105,   185,   117,    31,   115,   228,   131,
      55,   213,   230,    61,   173,   120,    69,   121,    62,   -93,
      68,    68,   243,    68,   118,    49,   132,   102,   122,    77,
     224,   174,   195,   -93,   199,   -93,   223,   286,   102,   208,
     191,   125,   113,   114,   191,   113,   214,   257,    52,    96,
      97,   297,    53,    68,    68,   248,   153,   108,    58,    59,
      60,   151,   267,    68,    68,    68,    68,    68,    68,     3,
      86,   102,    61,   250,    68,   137,   139,    62,   102,   191,
     172,   272,    93,   180,    79,   104,   179,   144,   244,    54,
      96,    97,   249,    96,    97,   253,   113,    39,    80,    80,
      81,    81,    56,    66,   285,   197,    57,   159,   148,   260,
      63,    21,    22,    67,    24,    25,    76,    59,    60,    59,
      60,   171,   268,    68,    27,   116,    64,   219,    86,   274,
      61,    84,    85,    28,    29,    62,   -60,    30,    74,   -60,
      86,    87,   225,   158,    39,   113,   194,    68,   198,    78,
     234,    96,    97,   207,   102,   148,     4,   294,   288,   108,
       5,    65,   171,    96,    97,    96,    97,   119,    68,   139,
     229,   251,   124,     8,   233,    87,    39,    11,   237,   238,
     126,     4,   133,   241,   134,     5,   135,   148,    50,   246,
     235,   108,   136,    18,    99,    66,   141,   154,     8,    86,
     100,   101,    11,    21,    22,    67,    24,    25,    71,    73,
     169,   262,   155,    50,   157,   255,    27,   138,    18,   265,
      68,   239,   258,   259,   270,    28,    29,    61,   166,    30,
     247,   156,    62,   162,   164,   279,    89,    90,    91,    92,
     163,    68,   276,   282,   171,   256,   165,   167,   277,   261,
      94,    95,   168,    96,    97,    68,   175,   263,   177,   176,
     266,   178,   269,   276,   182,   271,    65,   171,     4,   300,
     292,   293,     5,   181,   183,   142,   143,   276,   145,   146,
     147,   281,   186,     7,   283,     8,   284,    10,   192,    11,
     200,   287,   209,    12,   210,   291,   215,   201,   295,    16,
      17,   216,   296,   217,   221,    18,   218,    20,    21,    22,
      67,    24,    25,    21,    22,    70,   302,   220,    65,    26,
       4,    27,    86,   127,     5,   128,   129,   226,   227,    86,
      28,    29,   128,   129,    30,     7,  -141,     8,   231,    10,
     232,    11,    21,    22,    72,    12,   187,   188,   189,   201,
     236,    16,    17,   242,   240,   245,   254,    18,   252,    20,
      21,    22,    67,    24,    25,   264,   278,   273,    65,   280,
       4,    26,   289,    27,     5,   290,   298,    34,   299,   301,
     222,   123,    28,    29,     0,     7,    30,     8,  -140,    10,
       0,    11,     0,     0,     0,    12,     0,     0,     0,   201,
       0,    16,    17,     0,     0,     0,     0,    18,     0,    20,
      21,    22,    67,    24,    25,     0,     0,     0,    65,     0,
       4,    26,     0,    27,     5,     0,     0,     0,     0,     0,
       0,     0,    28,    29,     0,     7,    30,     8,   183,    10,
       0,    11,     0,     0,     0,    12,     0,     0,     0,   201,
       0,    16,    17,     0,     0,     0,     0,    18,     0,    20,
      21,    22,    67,    24,    25,     0,     0,     0,     0,     2,
       3,    26,     4,    27,     0,     0,     5,     0,     6,     0,
       0,     0,    28,    29,     0,     0,    30,     7,  -139,     8,
       9,    10,     0,    11,     0,     0,     0,    12,    13,    14,
      15,     0,     0,    16,    17,    65,     0,     0,     0,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,    26,     0,    27,    10,     0,     0,     0,
       0,     0,    12,     0,    28,    29,     0,    65,    30,    66,
       4,     0,     0,     0,     5,     0,    20,    21,    22,    67,
      24,    25,     0,     0,     0,     0,     0,     8,    26,     0,
      27,    11,     0,     0,    12,     0,     0,     0,     0,    28,
      29,    66,    50,    30,   102,     0,     0,    18,    20,    21,
      22,    67,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    65,    27,     4,   211,     0,     0,     5,     0,     0,
       0,    28,    29,     0,     0,    30,   102,     3,     7,     0,
       8,     0,    10,     0,    11,     0,     0,     0,    12,     0,
       0,     0,   201,     3,    16,    17,     0,     0,     0,     0,
      18,     0,    20,    21,    22,    67,    24,    25,     0,     3,
       0,    66,     0,     0,    26,     0,    27,     0,     0,    21,
      22,    67,    24,    25,     0,    28,    29,    66,     0,    30,
     152,     0,    27,     0,     0,    21,    22,    67,    24,    25,
       0,    28,    29,    66,    65,    30,   196,     0,    27,     3,
       0,    21,    22,    67,    24,    25,     0,    28,    29,     0,
       0,    30,  -152,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    29,     0,     0,    30,    66,     0,
       0,     0,     0,    66,     0,     0,    21,    22,    67,    24,
      25,    21,    22,    67,    24,    25,     0,     0,     0,    27,
       0,     4,     0,     0,    27,     5,     0,     0,    28,    29,
       0,     0,    30,    28,    29,     0,     7,    30,     8,     4,
       0,     0,    11,     5,     0,     0,     0,     4,     0,     0,
       0,     5,    16,    50,     7,     0,     8,     0,    18,     0,
      11,     0,     7,   106,     8,     0,     0,     0,    11,     0,
      16,    50,   107,    13,    14,    15,    18,    66,    16,    50,
       0,   106,     0,     0,    18,    21,    22,    67,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    89,
      90,    91,    92,     0,     0,    93,     0,    28,    29,     0,
       0,    30,     0,    94,    95,     0,    96,    97
};

static const yytype_int16 yycheck[] =
{
       1,     1,     1,   116,    27,     1,    41,    30,   154,   168,
     152,     7,    53,    51,   150,    56,     1,    55,   192,    43,
      16,    54,   196,    59,    43,    43,    27,    45,    64,    45,
      53,    54,    54,    56,    57,    45,    60,    70,    61,    35,
     186,    60,   155,    59,   157,    61,   182,   274,    70,   162,
     192,    57,    53,    54,   196,    56,   169,   231,    56,    65,
      66,   288,    56,    86,    87,    54,   107,    52,    45,    46,
      47,   106,    54,    96,    97,    98,    99,   100,   101,     1,
      55,    70,    59,    58,   107,    86,    87,    64,    70,   231,
     128,   250,    54,    58,    45,    45,   134,    98,   211,    56,
      65,    66,   215,    65,    66,   218,   107,   103,    59,    59,
      61,    61,    56,    35,   273,   156,    56,   116,   103,   232,
      45,    43,    44,    45,    46,    47,    54,    46,    47,    46,
      47,   127,   245,   156,    56,    57,    45,   175,    55,   252,
      59,    46,    47,    65,    66,    64,    54,    69,    45,    57,
      55,    56,   187,    57,   150,   156,   155,   180,   157,    54,
     201,    65,    66,   162,    70,   150,     3,   280,    58,   154,
       7,     1,   168,    65,    66,    65,    66,    55,   201,   180,
     195,   216,    45,    20,   199,    56,   182,    24,   203,   204,
      45,     3,    45,   208,    58,     7,    54,   182,    35,   214,
     201,   186,    54,    40,    61,    35,    54,    58,    20,    55,
      67,    68,    24,    43,    44,    45,    46,    47,    28,    29,
      57,   236,    57,    35,    57,   221,    56,    57,    40,   244,
     253,   205,   232,   232,   249,    65,    66,    59,    60,    69,
     214,    54,    64,    57,    27,   260,    48,    49,    50,    51,
      57,   274,   253,   268,   250,   229,    60,    60,   254,   233,
      62,    63,    56,    65,    66,   288,    58,   241,    45,    60,
     244,    55,   246,   274,    54,   249,     1,   273,     3,   294,
     280,   280,     7,    57,    71,    96,    97,   288,    99,   100,
     101,   265,    58,    18,   268,    20,   270,    22,    54,    24,
      54,   275,    54,    28,    45,   279,    57,    32,   282,    34,
      35,    45,   286,    60,    27,    40,    55,    42,    43,    44,
      45,    46,    47,    43,    44,    45,   300,    55,     1,    54,
       3,    56,    55,    56,     7,    58,    59,    45,    45,    55,
      65,    66,    58,    59,    69,    18,    71,    20,    54,    22,
      15,    24,    43,    44,    45,    28,    45,    46,    47,    32,
      54,    34,    35,    56,    54,    57,    27,    40,    55,    42,
      43,    44,    45,    46,    47,    57,    59,    58,     1,    15,
       3,    54,    59,    56,     7,    43,    43,     1,    60,    60,
     180,    61,    65,    66,    -1,    18,    69,    20,    71,    22,
      -1,    24,    -1,    -1,    -1,    28,    -1,    -1,    -1,    32,
      -1,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,     1,    -1,
       3,    54,    -1,    56,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    -1,    18,    69,    20,    71,    22,
      -1,    24,    -1,    -1,    -1,    28,    -1,    -1,    -1,    32,
      -1,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,     0,
       1,    54,     3,    56,    -1,    -1,     7,    -1,     9,    -1,
      -1,    -1,    65,    66,    -1,    -1,    69,    18,    71,    20,
      21,    22,    -1,    24,    -1,    -1,    -1,    28,    29,    30,
      31,    -1,    -1,    34,    35,     1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    56,    22,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    65,    66,    -1,     1,    69,    35,
       3,    -1,    -1,    -1,     7,    -1,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    20,    54,    -1,
      56,    24,    -1,    -1,    28,    -1,    -1,    -1,    -1,    65,
      66,    35,    35,    69,    70,    -1,    -1,    40,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      54,     1,    56,     3,    57,    -1,    -1,     7,    -1,    -1,
      -1,    65,    66,    -1,    -1,    69,    70,     1,    18,    -1,
      20,    -1,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    32,     1,    34,    35,    -1,    -1,    -1,    -1,
      40,    -1,    42,    43,    44,    45,    46,    47,    -1,     1,
      -1,    35,    -1,    -1,    54,    -1,    56,    -1,    -1,    43,
      44,    45,    46,    47,    -1,    65,    66,    35,    -1,    69,
      54,    -1,    56,    -1,    -1,    43,    44,    45,    46,    47,
      -1,    65,    66,    35,     1,    69,    54,    -1,    56,     1,
      -1,    43,    44,    45,    46,    47,    -1,    65,    66,    -1,
      -1,    69,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66,    -1,    -1,    69,    35,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    43,    44,    45,    46,
      47,    43,    44,    45,    46,    47,    -1,    -1,    -1,    56,
      -1,     3,    -1,    -1,    56,     7,    -1,    -1,    65,    66,
      -1,    -1,    69,    65,    66,    -1,    18,    69,    20,     3,
      -1,    -1,    24,     7,    -1,    -1,    -1,     3,    -1,    -1,
      -1,     7,    34,    35,    18,    -1,    20,    -1,    40,    -1,
      24,    -1,    18,    45,    20,    -1,    -1,    -1,    24,    -1,
      34,    35,    54,    29,    30,    31,    40,    35,    34,    35,
      -1,    45,    -1,    -1,    40,    43,    44,    45,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    48,
      49,    50,    51,    -1,    -1,    54,    -1,    65,    66,    -1,
      -1,    69,    -1,    62,    63,    -1,    65,    66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    73,     0,     1,     3,     7,     9,    18,    20,    21,
      22,    24,    28,    29,    30,    31,    34,    35,    40,    41,
      42,    43,    44,    45,    46,    47,    54,    56,    65,    66,
      69,    74,    75,    76,    78,    80,    84,    85,    87,    91,
      92,    93,    95,    96,    97,    98,    99,   100,   102,    45,
      35,    91,    56,    56,    56,    91,    56,    56,    45,    46,
      47,    59,    64,    45,    45,     1,    35,    45,    93,    95,
      45,   100,    45,   100,    45,    93,    54,    91,    54,    45,
      59,    61,    82,    94,    46,    47,    55,    56,    81,    48,
      49,    50,    51,    54,    62,    63,    65,    66,    86,    61,
      67,    68,    70,   105,    45,    94,    45,    54,    74,    88,
      89,    91,    85,    95,    95,    94,    57,    85,    93,    55,
      43,    45,    93,   102,    45,    57,    45,    56,    58,    59,
      81,    43,    60,    45,    58,    54,    54,    95,    57,    95,
     103,    54,    96,    96,    95,    96,    96,    96,    74,    77,
      78,    81,    54,    85,    58,    57,    54,    57,    57,    92,
      95,   105,    57,    57,    27,    60,    60,    60,    56,    57,
      79,    91,    94,    43,    60,    58,    60,    45,    55,    94,
      58,    57,    54,    71,   106,    77,    58,    45,    46,    47,
      90,    99,    54,    89,    92,   105,    54,    85,    92,   105,
      54,    32,    74,    84,    92,   101,   104,    92,   105,    54,
      45,    57,    79,    54,   105,    57,    45,    60,    55,    94,
      55,    27,   103,    77,    89,    81,    45,    45,    90,   101,
      90,    54,    15,   101,    85,    95,    54,   101,   101,   106,
      54,   101,    56,    54,   105,    57,   101,   106,    54,   105,
      58,    81,    55,   105,    27,    91,   106,    90,    84,    92,
     105,   106,   101,   106,    57,   101,   106,    54,   105,   106,
     101,   106,    79,    58,   105,    83,    95,    91,    59,   101,
      15,   106,   101,   106,   106,    79,    83,   106,    58,    59,
      43,   106,    84,    92,   105,   106,   106,    83,    43,    60,
     101,    60,   106
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    74,    74,    74,    75,    76,    77,    77,    77,    77,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    79,    79,    79,    80,    80,    80,    81,
      82,    82,    82,    82,    82,    82,    82,    82,    83,    83,
      84,    84,    84,    84,    84,    84,    84,    84,    85,    85,
      85,    86,    86,    86,    86,    86,    86,    87,    87,    87,
      87,    87,    87,    88,    88,    88,    88,    88,    88,    88,
      88,    89,    89,    89,    89,    90,    90,    90,    90,    91,
      91,    91,    91,    91,    91,    92,    92,    92,    92,    92,
      92,    92,    93,    93,    93,    93,    93,    94,    94,    94,
      94,    94,    94,    95,    95,    95,    95,    96,    96,    96,
      96,    97,    97,    97,    97,    97,    97,    97,    97,    98,
      98,    98,    98,    98,    98,    99,    99,   100,   100,   101,
     101,   101,   101,   101,   101,   101,   102,   102,   103,   103,
     104,   104,   104,   105,   106
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     2,     2,     2,     3,     2,
       0,     2,     3,     3,     5,     7,     2,     1,     3,     2,
       8,     9,     7,     8,     7,     8,     6,     7,     6,     5,
       7,     6,     2,     4,     3,     5,     1,     1,     1,     2,
       3,     4,     2,     3,     9,     8,     8,     7,     1,     3,
       5,     7,     7,     9,     9,    11,     7,     9,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     5,     7,     4,
       6,     5,     7,     5,     4,     4,     4,     3,     3,     3,
       2,     1,     2,     3,     4,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     3,     5,     5,     3,     3,
       2,     1,     1,     3,     4,     4,     4,     1,     2,     4,
       3,     1,     3,     1,     3,     3,     1,     1,     3,     3,
       3,     1,     2,     1,     1,     3,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     1,     2,
       1,     1,     3,     2,     2,     2,     3,     4,     1,     3,
       2,     2,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 44 "test.y" /* yacc.c:1646  */
    { printf("%s ;",(yyvsp[-1].s)); }
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 45 "test.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[0].s)); }
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 46 "test.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[0].s)); }
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 47 "test.y" /* yacc.c:1646  */
    { printf("%s ;",(yyvsp[0].s)); }
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 48 "test.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[0].s)); }
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 49 "test.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[0].s)); }
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 50 "test.y" /* yacc.c:1646  */
    { printf("%s ;",(yyvsp[-1].s)); }
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 51 "test.y" /* yacc.c:1646  */
    { printf("%s",(yyvsp[0].s)); }
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 52 "test.y" /* yacc.c:1646  */
    { /*empty*/ }
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 54 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*3*returnDollarLEN);				
				sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 58 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*3*returnDollarLEN);	
				sprintf((yyval.s),"static %s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 62 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*3*returnDollarLEN);	
				sprintf((yyval.s),"final %s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 67 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				if(check_sameid((yyvsp[-3].s))) sprintf((yyval.s),"%s %s {\n>'%s' is a duplicate identifier\n%s\n}",(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-3].s),(yyvsp[-1].s));
				else{ 
					add_id((yyvsp[-3].s));
					sprintf((yyval.s),"%s %s {\n%s\n}",(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-1].s));
				}
			}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 76 "test.y" /* yacc.c:1646  */
    {
				/* check if class difined? */
				if(strcmp((yyvsp[-6].s),(yyvsp[-2].s))!=0) fprintf(stderr,"%s typed do not match with newed type %s",(yyvsp[-5].s),(yyvsp[-2].s));
				(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);	
				sprintf((yyval.s),"%s %s = new %s()",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-2].s));
			}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 83 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);	
				sprintf((yyval.s),"%s ;",(yyvsp[-1].s));
			}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 87 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (yyvsp[0].s);
			}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 90 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				sprintf((yyval.s),"%s ;\n%s",(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 94 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				sprintf((yyval.s),"%s\n%s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 99 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-6].s))) sprintf((yyval.s),"%s %s(%s){\n>'%s' is a duplicate identifier\n%s\n}",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-6].s),(yyvsp[-1].s));
				else{
					add_id((yyvsp[-6].s));
					sprintf((yyval.s),"%s %s(%s){\n%s\n}",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
				}
			}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 108 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-6].s))) sprintf((yyval.s),"%s %s %s(%s){\n>'%s' is a duplicate identifier\n%s\n}",(yyvsp[-8].s),(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-6].s),(yyvsp[-1].s));
				else{
					add_id((yyvsp[-6].s));
					sprintf((yyval.s),"%s %s %s(%s){\n%s\n}",(yyvsp[-8].s),(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
				}
			}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 117 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-5].s))) sem_def = 1;
				else{
					add_id((yyvsp[-5].s));
					sprintf((yyval.s),"%s %s(){\n%s\n}",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-1].s));
				}
			}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 126 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-5].s))) sprintf((yyval.s),"%s %s %s(){\n>'%s' is a duplicate identifier\n%s\n}",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-5].s),(yyvsp[-1].s));
				else{ 
					sprintf((yyval.s),"%s %s %s(){\n%s\n}",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-1].s));
 					add_id((yyvsp[-5].s));
 				}
			}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 135 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-5].s))) sprintf((yyval.s),"%s %s(%s){ }\n>'%s' is a duplicate identifier",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-3].s),(yyvsp[-5].s));
				else{ 
					sprintf((yyval.s),"%s %s(%s){ }",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-3].s));
 					add_id((yyvsp[-5].s));
 				}
			}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 145 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-5].s))) sprintf((yyval.s),"%s %s %s(%s){ }\n>'%s' is a duplicate identifier",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-3].s),(yyvsp[-5].s));
				else{ 
					sprintf((yyval.s),"%s %s %s(%s){ }",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-3].s));
 					add_id((yyvsp[-5].s));
 				}
			}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 155 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-4].s))) sprintf((yyval.s),"%s %s(){ }\n>'%s' is a duplicate identifier",(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-4].s));
				else{ 
					sprintf((yyval.s),"%s %s(){ }",(yyvsp[-5].s),(yyvsp[-4].s));
					add_id((yyvsp[-4].s));
				}
			}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 165 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				fprintf(stderr,"Warning: function body in declaration is empty\n");
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-4].s))) sprintf((yyval.s),"%s %s %s(){ }\n>'%s' is a duplicate identifier",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-4].s));
				else{ 
					sprintf((yyval.s),"%s %s %s(){ }",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-4].s));
 					add_id((yyvsp[-4].s));
 				}
			}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 175 "test.y" /* yacc.c:1646  */
    { /* function declaration */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-4].s))) sprintf((yyval.s),"%s %s(%s) ;\n>'%s' is a duplicate identifier",(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-2].s));
				else{ 
					sprintf((yyval.s),"%s %s(%s) ;",(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-2].s));
					add_id((yyvsp[-4].s));
				}
			}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 183 "test.y" /* yacc.c:1646  */
    { /* function declaration */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-3].s))) sprintf((yyval.s),"%s %s() ;\n>'%s' is a duplicate identifier",(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-3].s));
				else{ 
					sprintf((yyval.s),"%s %s() ;",(yyvsp[-4].s),(yyvsp[-3].s));
 					add_id((yyvsp[-3].s));
 				}
			}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 191 "test.y" /* yacc.c:1646  */
    { /* function declaration */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-4].s))) sprintf((yyval.s),"%s %s %s(%s) ;\n>'%s' is a duplicate identifier",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[-4].s));
				else{ 
					sprintf((yyval.s),"%s %s %s(%s) ;",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-2].s));
 					add_id((yyvsp[-4].s));
 				}
			}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 199 "test.y" /* yacc.c:1646  */
    { /* function declaration */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-3].s))) sprintf((yyval.s),"%s %s %s() ;\n>'%s' is a duplicate identifier",(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-3].s));
				else{ 
					sprintf((yyval.s),"%s %s %s() ;",(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-3].s));
 					add_id((yyvsp[-3].s));
 				}
			}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 208 "test.y" /* yacc.c:1646  */
    {
						(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
						sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
					}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 212 "test.y" /* yacc.c:1646  */
    {
						(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
						sprintf((yyval.s),"%s %s, %s",(yyvsp[-3].s),(yyvsp[-2].s),(yyvsp[0].s));
					}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 216 "test.y" /* yacc.c:1646  */
    {
						(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
						sprintf((yyval.s),"%s %s %s",(yyvsp[-2].s),(yyvsp[-1].s),(yyvsp[0].s));
					}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 220 "test.y" /* yacc.c:1646  */
    {
						(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
						sprintf((yyval.s),"%s %s %s, %s",(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-2].s),(yyvsp[0].s));
					}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 225 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 226 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 227 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 229 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"= %s",(yyvsp[0].s));
				}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 234 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[0].s))) sprintf((yyval.s),"[] %s\n>'%s' is a duplicate identifier",(yyvsp[0].s),(yyvsp[0].s));
					else{ 
						sprintf((yyval.s),"[] %s",(yyvsp[0].s));
 						add_id((yyvsp[0].s));
 					}
				}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 242 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);		
					if(check_sameid((yyvsp[-3].s))) sprintf((yyval.s),"%s[%d]\n>'%s' is a duplicate identifier",(yyvsp[-3].s),(yyvsp[-1].i),(yyvsp[-3].s));
					else{ 
						sprintf((yyval.s),"%s[%d]",(yyvsp[-3].s),(yyvsp[-1].i));
 						add_id((yyvsp[-3].s));
 					}
				}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 250 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[0].s))) sprintf((yyval.s),"* %s\n>'%s' is a duplicate identifier",(yyvsp[0].s),(yyvsp[0].s));
					else{ 
						sprintf((yyval.s),"* %s",(yyvsp[0].s));
 						add_id((yyvsp[0].s));
 					}
				}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 258 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"[%d]",(yyvsp[-1].i));
				}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 262 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[-6].s))) sprintf((yyval.s),"[] %s = new %s[%d]\n>'%s' is a duplicate identifier",(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].i),(yyvsp[-6].s));
					else{ 
						sprintf((yyval.s),"[] %s = new %s[%d]",(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].i));
 						add_id((yyvsp[-6].s));
 					}
				}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 270 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[-6].s))) sprintf((yyval.s),"*%s = new %s[%d]\n>'%s' is a duplicate identifier",(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].i),(yyvsp[-6].s));
					else{ 
						sprintf((yyval.s),"*%s = new %s[%d]",(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].i));
 						add_id((yyvsp[-6].s));
 					}
				}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 278 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*8*returnDollarLEN);	
					if(check_sameid((yyvsp[-7].s))) sprintf((yyval.s),"%s[%d] = {%s}\n>'%s' is a duplicate identifier",(yyvsp[-7].s),(yyvsp[-5].i),(yyvsp[-1].s),(yyvsp[-7].s));
					else{ 
						sprintf((yyval.s),"%s[%d] = {%s}",(yyvsp[-7].s),(yyvsp[-5].i),(yyvsp[-1].s));
						add_id((yyvsp[-7].s));
					}
				}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 286 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*8*returnDollarLEN);	
					if(check_sameid((yyvsp[-6].s))) sprintf((yyval.s),"%s[] = {%s}\n>'%s' is a duplicate identifier",(yyvsp[-6].s),(yyvsp[-1].s),(yyvsp[-6].s));
					else{ 
						sprintf((yyval.s),"%s[] = {%s}",(yyvsp[-6].s),(yyvsp[-1].s));
						 add_id((yyvsp[-6].s));
					}
				}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 295 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 296 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%s,%s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 301 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) %s",(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[0].s)); 
				}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 305 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*5*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) {\n%s\n}",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
				}
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 309 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) %s\n%s %s",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 313 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) %s\n%s {\n%s\n}",(yyvsp[-8].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 317 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) {\n%s\n}\n%s %s",(yyvsp[-8].s),(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 321 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) {\n%s\n}\n%s {\n%s\n}",(yyvsp[-10].s),(yyvsp[-8].s),(yyvsp[-5].s),(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 2198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 325 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) %s\n%s %s",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 329 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) {\n%s\n}\n%s %s",(yyvsp[-8].s),(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 334 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s);}
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 335 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%s %s %s",(yyvsp[-2].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 339 "test.y" /* yacc.c:1646  */
    { /* error recovery */ (yyval.s) = "ERROR HERE"; }
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 341 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 342 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 343 "test.y" /* yacc.c:1646  */
    { (yyval.s) = "<"; }
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 344 "test.y" /* yacc.c:1646  */
    { (yyval.s) = ">"; }
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 345 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 346 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 348 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ( %s ) %s",(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 352 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf((yyval.s),"%s ( %s ) {\n%s\n}",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
			}
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 356 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ( ) %s ;",(yyvsp[-3].s),(yyvsp[0].s));
			}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 360 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);
					sprintf((yyval.s),"%s ( ) {\n%s\n}",(yyvsp[-5].s),(yyvsp[-1].s));
			}
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 364 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ( %s ) %s ;",(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 368 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf((yyval.s),"%s ( %s ) {\n%s\n}",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
			}
#line 2327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 373 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ; %s ; %s",(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 377 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s)," ; %s ; %s",(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 381 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ; ; %s",(yyvsp[-3].s),(yyvsp[0].s));
			}
#line 2354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 385 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ; %s ;",(yyvsp[-3].s),(yyvsp[-1].s));
			}
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 389 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s)," ; ; %s ",(yyvsp[0].s));
			}
#line 2372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 393 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s)," ; %s ; ",(yyvsp[-1].s));
			}
#line 2381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 397 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s)," %s ; ;",(yyvsp[-2].s));
			}
#line 2390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 401 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s)," ; ; ");
			}
#line 2399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 406 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 407 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[-1].s); }
#line 2411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 408 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s , %s",(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 412 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s %s , %s",(yyvsp[-3].s),(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 417 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 418 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
				sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 2444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 422 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 2453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 426 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 2462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 431 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 2468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 431 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 2474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 431 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s); }
#line 2480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 431 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 2486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 431 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 2492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 431 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 433 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s ;",(yyvsp[-2].s),(yyvsp[-1].s));
				}
#line 2507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 437 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*5*returnDollarLEN);
					sprintf((yyval.s),"%s(%s) ;",(yyvsp[-4].s),(yyvsp[-2].s));
				}
#line 2516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 441 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s(%s) ;",(yyvsp[-4].s),(yyvsp[-2].s));
				}
#line 2525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 445 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s%s ;",(yyvsp[-2].s),(yyvsp[-1].s));
				}
#line 2534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 449 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s%s ;",(yyvsp[-2].s),(yyvsp[-1].s));
				}
#line 2543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 453 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s ;",(yyvsp[-1].s));
				}
#line 2552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 457 "test.y" /* yacc.c:1646  */
    { (yyval.s) = ";"; }
#line 2558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 459 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 460 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s.%s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 464 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s[%d]",(yyvsp[-3].s),(yyvsp[-1].i));
				}
#line 2582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 468 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s[%s]",(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 2591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 472 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s[%s]",(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 2600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 477 "test.y" /* yacc.c:1646  */
    {	
					if(check_sameid((yyvsp[0].s))){
						(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
						sprintf((yyval.s),"%s\n>'%s' is a duplicate identifier",(yyvsp[0].s),(yyvsp[0].s));
					}
					else{ 
 						add_id((yyvsp[0].s));
 						(yyval.s) = (yyvsp[0].s);
 					}
					
				}
#line 2616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 488 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[-1].s))) sprintf((yyval.s),"%s %s\n>'%s' is a duplicate identifier",(yyvsp[-1].s),(yyvsp[0].s),(yyvsp[-1].s));
					else{ 
						add_id((yyvsp[-1].s));
						sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
					}
				}
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 496 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[-3].s))) sprintf((yyval.s),"%s %s, %s\n>'%s' is a duplicate identifier",(yyvsp[-3].s),(yyvsp[-2].s),(yyvsp[0].s),(yyvsp[-3].s));
					else{ 
						sprintf((yyval.s),"%s %s, %s",(yyvsp[-3].s),(yyvsp[-2].s),(yyvsp[0].s));
 						add_id((yyvsp[-3].s));
 					}
				}
#line 2642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 504 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[-2].s))) sprintf((yyval.s),"%s, %s\n>'%s' is a duplicate identifier",(yyvsp[-2].s),(yyvsp[0].s),(yyvsp[-2].s));
					else{ 
						sprintf((yyval.s),"%s, %s",(yyvsp[-2].s),(yyvsp[0].s));
 						add_id((yyvsp[-2].s));
 					}
				}
#line 2655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 512 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 513 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*8*returnDollarLEN);
					sprintf((yyval.s),"%s, %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 519 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s);}
#line 2676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 520 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s + %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 524 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s - %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 528 "test.y" /* yacc.c:1646  */
    { /* error recovery */ (yyval.s) = "ERROR HERE"; }
#line 2700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 530 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 531 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s * %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 535 "test.y" /* yacc.c:1646  */
    {
					/*zero divisor*/
					if((yyvsp[0].s)[0]=='0') fprintf(stderr,"zero divisor\n");
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s / %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 541 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s \% %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 546 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 547 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"!%s",(yyvsp[0].s));
				}
#line 2750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 551 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s);}
#line 2756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 552 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 553 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"(%s)",(yyvsp[-1].s));
				}
#line 2771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 557 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (yyvsp[0].s);
				}
#line 2779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 560 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (yyvsp[0].s);;
				}
#line 2787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 563 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 565 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"++%s",(yyvsp[0].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support ++ operator\n");*/
				}
#line 2806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 573 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"--%s",(yyvsp[0].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
#line 2819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 581 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"+%s",(yyvsp[0].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
#line 2832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 589 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"-%s",(yyvsp[0].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
#line 2845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 597 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"-%s",(yyvsp[0].s));
				}
#line 2854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 601 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"-%s",(yyvsp[0].s));
				}
#line 2863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 606 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s++",(yyvsp[-1].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support ++ operator\n");*/
				}
#line 2876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 614 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s--",(yyvsp[-1].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
#line 2889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 624 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%d",(yyvsp[0].i)); 
				}
#line 2898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 628 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%g",(yyvsp[0].d));
				}
#line 2907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 633 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s ;",(yyvsp[-1].s));
				}
#line 2916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 637 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 638 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 639 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf((yyval.s),"%s\n%s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 643 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*5*returnDollarLEN);
					sprintf((yyval.s),"%s\n%s",(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 647 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*5*returnDollarLEN);
					sprintf((yyval.s),"%s\n%s",(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 651 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s ;",(yyvsp[-1].s));
				}
#line 2964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 656 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s()",(yyvsp[-2].s));
				}
#line 2973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 660 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s(%s)",(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 2982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 665 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 666 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s, %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 671 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 3006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 675 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 3015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 679 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 3021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 681 "test.y" /* yacc.c:1646  */
    {
					into_scope("scope");
					(yyval.c) = '{';
				}
#line 3030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 685 "test.y" /* yacc.c:1646  */
    {
					/*print_current();*/
					out_scope();				
					(yyval.c) = '}';
				}
#line 3040 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3044 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 690 "test.y" /* yacc.c:1906  */

int main(){
	table.size = 0;
	into_scope("global");
	yyparse();
	/*print_current();*/
	return 0;
}

void into_scope(char str[]){
	table.size++;
	table.list[table.size-1].size=0;
	strcpy(table.list[table.size-1].scope_name,str);
}

void add_id(char str[]){
	table.list[table.size-1].size++;
	strcpy(table.list[table.size-1].idlist[table.list[table.size-1].size-1],str);
}

void out_scope(){
	table.list[table.size-1].size = 0;
	table.size--;
}

void print_current(){
	int cur_size = table.list[table.size-1].size, i;
	printf("scope: %s\nid list size: %d\n",table.list[table.size-1].scope_name,cur_size);
	for(i=0;i<cur_size;++i){
		printf("%s\n",table.list[table.size-1].idlist[i]);
	}
	printf("\n");
}

int check_sameid(char str[]){
	int cur_size = table.list[table.size-1].size, i;
	for(i=0;i<cur_size;++i){
		if(strcmp(table.list[table.size-1].idlist[i],str)==0) return 1;
	}
	return 0;
}

void yyerror(const char *str){
	fprintf(stderr,">%s in\n-->",str);
}
