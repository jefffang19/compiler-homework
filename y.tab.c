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

static int lineno = 1;


#line 99 "y.tab.c" /* yacc.c:339  */

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
    OR = 308,
    EMPTYLINE = 309
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
#define EMPTYLINE 309

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 33 "test.y" /* yacc.c:355  */

	char* s;
	char c;
	float d;
	int i;

#line 254 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 271 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   880

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  155
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  304

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,     2,     2,     2,    69,     2,     2,
      57,    58,    62,    66,    59,    67,    65,    68,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    55,
      63,    56,    64,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,     2,    72,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    58,    62,    66,    71,    80,    87,    91,    94,
      98,   103,   112,   121,   130,   139,   149,   159,   169,   179,
     187,   195,   203,   212,   216,   220,   224,   229,   230,   231,
     233,   238,   246,   254,   262,   266,   274,   282,   290,   299,
     300,   305,   309,   313,   317,   321,   325,   329,   333,   338,
     339,   343,   345,   346,   347,   348,   349,   350,   352,   356,
     360,   364,   368,   372,   377,   381,   385,   389,   393,   397,
     401,   405,   410,   411,   412,   416,   421,   422,   426,   430,
     435,   435,   435,   435,   435,   435,   437,   441,   445,   449,
     453,   457,   461,   463,   464,   468,   472,   476,   481,   492,
     500,   508,   516,   517,   523,   524,   528,   532,   534,   535,
     539,   545,   550,   551,   555,   556,   557,   561,   564,   567,
     569,   577,   585,   593,   601,   605,   610,   618,   628,   632,
     637,   641,   642,   643,   647,   651,   655,   660,   664,   669,
     670,   675,   679,   683,   685,   690
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
  "EMPTYLINE", "';'", "'='", "'('", "')'", "','", "'['", "']'", "'*'",
  "'<'", "'>'", "'.'", "'+'", "'-'", "'/'", "'%'", "'!'", "'{'", "'}'",
  "$accept", "readin", "declaration", "class_declr", "new_obj",
  "class_body", "method_declr", "method_declr_parem", "method_modifier",
  "assign", "arrinit", "arrinit_expr", "conditional", "boolean_expr",
  "infixop", "loop", "for_parem", "forinitop", "forupdate", "type",
  "simple", "name", "identifier_list", "expr", "term", "factor",
  "prefixOp", "postfixOp", "const_expr", "compound", "function",
  "func_parem", "func_return", "leftcurly", "rightcurly", YY_NULLPTR
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
     305,   306,   307,   308,   309,    59,    61,    40,    41,    44,
      91,    93,    42,    60,    62,    46,    43,    45,    47,    37,
      33,   123,   125
};
# endif

#define YYPACT_NINF -262

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-262)))

#define YYTABLE_NINF -154

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -262,   471,  -262,    19,  -262,  -262,   -41,   107,  -262,   -49,
     -26,  -262,     3,  -262,  -262,  -262,   107,    31,  -262,    40,
      43,  -262,  -262,   -28,    59,    64,  -262,  -262,   736,   219,
     232,    98,   131,  -262,  -262,  -262,   107,  -262,   139,  -262,
      51,  -262,   150,   813,  -262,    92,  -262,  -262,  -262,  -262,
      78,  -262,    75,   197,   742,   736,    75,   615,    98,    97,
    -262,  -262,   127,   153,  -262,  -262,  -262,  -262,    -2,   146,
       6,  -262,  -262,  -262,  -262,    41,  -262,  -262,   160,  -262,
     132,   -20,   169,   179,  -262,   167,   186,   736,   648,   188,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,   808,   808,   736,
     808,   808,   808,  -262,   810,   180,  -262,   192,   654,   191,
     193,   202,    75,   209,   279,   110,  -262,   544,   211,   213,
     233,   212,   114,   146,   223,  -262,  -262,   229,    26,    75,
       9,   221,   237,   245,   248,    75,  -262,  -262,   163,  -262,
     143,   255,  -262,  -262,  -262,   163,  -262,  -262,  -262,   251,
     242,   810,   257,   256,   260,   787,   544,   687,   544,   263,
    -262,    67,   599,   544,   266,   280,  -262,  -262,  -262,    27,
      48,   268,   288,  -262,   278,   285,    75,  -262,   291,   297,
    -262,   736,  -262,   810,  -262,  -262,  -262,   787,    94,   304,
     307,  -262,  -262,   256,  -262,  -262,   599,   256,   298,   339,
     599,  -262,   703,   300,   265,   316,   242,   302,  -262,   599,
    -262,   308,    57,   306,  -262,   367,    68,   168,   310,    78,
    -262,   340,   107,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
     242,  -262,   256,   507,   242,  -262,   279,   418,  -262,  -262,
    -262,  -262,   242,   311,  -262,   367,    74,   242,  -262,  -262,
     367,   107,   313,    78,   736,   107,   315,  -262,  -262,  -262,
    -262,   599,   361,  -262,  -262,  -262,   242,  -262,  -262,   367,
    -262,   242,  -262,  -262,   107,   736,   242,   152,   317,   335,
     242,   507,  -262,   242,  -262,  -262,  -262,   242,  -262,   736,
     336,   319,  -262,  -262,  -262,   599,  -262,  -262,  -262,   320,
    -262,   242,  -262,  -262
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      11,     0,     1,   117,    90,    91,     0,     0,    93,     0,
       0,    92,     0,    37,    38,    39,     0,   125,    95,     0,
       0,   138,   139,   103,     0,     0,    10,   102,     0,     0,
       0,     0,     0,     4,     5,     3,     0,     7,     0,     9,
       0,     6,   122,     0,   114,   118,   127,   128,   124,   129,
       0,    94,     0,     0,     0,     0,     0,     0,     0,     0,
     136,   137,     0,     0,   130,   131,   117,   125,   103,   122,
       0,   132,   134,   133,   135,   103,   123,     2,     0,     8,
     108,     0,     0,   112,    12,     0,     0,     0,     0,     0,
      66,    67,    62,    63,   101,    64,    65,     0,     0,     0,
       0,     0,     0,   154,     0,   108,    14,     0,     0,    82,
       0,     0,     0,     0,    59,     0,    13,     0,     0,     0,
       0,     0,   103,     0,     0,   104,   126,     0,     0,     0,
       0,   109,     0,     0,    43,     0,    99,   100,    40,   147,
     149,     0,    96,   115,   116,    60,   119,   120,   121,     0,
       0,    18,    83,    81,     0,     0,     0,     0,     0,     0,
      70,     0,     0,     0,     0,     0,   105,   106,   107,     0,
       0,     0,     0,   111,     0,     0,     0,    44,    41,     0,
     113,     0,   148,    17,   155,    15,    20,     0,     0,     0,
       0,    78,    86,    79,    84,    72,     0,    80,     0,    51,
       0,    97,     0,     0,     0,     0,     0,     0,    68,     0,
      98,     0,     0,     0,    30,     0,     0,    33,    42,     0,
     110,     0,     0,   150,    19,    85,    89,    87,    88,    75,
       0,    76,    77,     0,     0,   152,    59,     0,   145,   144,
      71,   146,     0,     0,    32,     0,     0,     0,    27,    29,
       0,     0,    35,     0,     0,     0,     0,    73,    74,    57,
      53,     0,    52,   143,    69,    16,     0,    28,    31,     0,
      23,     0,    25,    34,     0,     0,     0,    49,     0,     0,
       0,     0,    24,     0,    26,    21,    36,     0,    48,     0,
       0,     0,    54,    58,    55,     0,    22,    47,    50,     0,
      46,     0,    45,    56
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -262,  -262,    12,  -262,  -262,  -135,   383,  -159,  -262,   -36,
    -262,  -261,     0,   -33,  -262,  -262,  -262,  -130,  -190,     4,
       1,   -19,   -30,    -1,   194,  -262,  -262,  -138,   216,   -79,
     328,   215,  -262,   -68,   -22
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   203,    33,    34,   150,   151,   171,    36,   131,
      83,   276,   204,    38,    99,    39,   110,   111,   191,   112,
     205,    42,    84,   161,    44,    45,    46,    47,    48,   206,
      49,   141,   207,   104,   185
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,    37,    41,   229,    50,    40,    89,   231,    53,    69,
     213,    52,    76,    32,   287,   192,   186,    59,    60,    61,
      56,   113,   106,   132,   118,   194,   116,    70,   298,     4,
       4,    54,    62,     5,     5,    69,    69,    63,    69,   119,
      78,   133,   258,   123,    60,    61,     8,     8,   224,   162,
      11,    11,   174,   114,   115,   192,   114,   225,    62,   192,
      55,    51,    51,    63,   126,   109,    18,    18,    69,    69,
     175,   152,    97,    98,   -61,   154,   -94,   -61,    69,    69,
      69,    69,    69,    69,   170,   212,   138,   140,   196,    69,
     200,   -94,   273,   -94,   192,   209,    80,    57,   145,   173,
      58,    62,   215,   214,    64,   180,    63,   114,    40,    65,
       4,    81,   244,    82,     5,   286,   149,   230,   160,   103,
     105,   234,    94,   249,   198,   238,   239,     8,   103,   268,
     242,    11,   172,    97,    98,    81,   247,    82,    69,   103,
      60,    61,    51,    75,   245,   103,   220,    18,   250,   103,
      87,   254,   226,   120,   100,    40,   114,   195,   263,   199,
     101,   102,    69,   149,   208,   261,   266,   109,   159,   235,
     121,   271,   122,   172,    62,   167,    97,    98,   269,    63,
     140,   252,   280,    69,   240,   275,    77,    40,    87,   128,
     283,   129,   130,   248,    79,   149,    85,    86,   125,   109,
       4,   236,   181,    88,     5,   127,    87,    88,   257,    97,
      98,   289,   262,   295,   134,     7,   301,     8,    97,    98,
     264,    11,   136,   267,    87,   270,   256,   251,   272,    97,
      98,    16,    51,   259,   260,    69,    87,    18,   135,   129,
     130,   137,   107,   142,   282,    72,    74,   284,    87,   285,
     155,   156,   108,   277,   288,   172,    69,   157,   292,   278,
     165,   296,    21,    22,    71,   297,    66,   158,     4,   163,
      69,   164,     5,   166,   277,    21,    22,    73,   172,   303,
     176,   293,   294,     7,   168,     8,   169,    10,   277,    11,
     178,   143,   144,    12,   146,   147,   148,   202,   177,    16,
      17,   188,   189,   190,   179,    18,   183,    20,    21,    22,
      68,    24,    25,   182,   184,   193,   187,    66,   201,     4,
      27,   210,    28,     5,   222,   211,   216,    90,    91,    92,
      93,    29,    30,   217,     7,    31,     8,  -142,    10,   218,
      11,   219,    95,    96,    12,    97,    98,   221,   202,   227,
      16,    17,   228,   232,   233,   237,    18,   241,    20,    21,
      22,    68,    24,    25,   246,   243,   253,   255,    66,   265,
       4,    27,   274,    28,     5,   279,   281,   290,   291,   299,
     300,   302,    29,    30,    35,     7,    31,     8,  -141,    10,
     124,    11,     0,     0,     0,    12,   223,     0,     0,   202,
       0,    16,    17,     0,     0,     0,     0,    18,     0,    20,
      21,    22,    68,    24,    25,     0,     0,     0,     0,    66,
       0,     4,    27,     0,    28,     5,     0,     0,     0,     0,
       0,     0,     0,    29,    30,     0,     7,    31,     8,   184,
      10,     0,    11,     0,     0,     0,    12,     0,     0,     0,
     202,     0,    16,    17,     0,     0,     0,     0,    18,     0,
      20,    21,    22,    68,    24,    25,     0,     0,     0,     0,
       0,     2,     3,    27,     4,    28,     0,     0,     5,     0,
       6,     0,     0,     0,    29,    30,     0,     0,    31,     7,
    -140,     8,     9,    10,     0,    11,     0,     0,     0,    12,
      13,    14,    15,     0,     0,    16,    17,     0,    66,     0,
       0,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,     0,    28,    10,
       0,     0,     0,     0,     0,    12,     0,    29,    30,     0,
       0,    31,    67,     0,     0,    66,     0,     0,     0,    20,
      21,    22,    68,    24,    25,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    28,     0,     0,     0,     0,     0,
       0,     0,    12,    29,    30,     0,     0,    31,   103,    67,
       0,     0,     0,     0,     0,     0,    20,    21,    22,    68,
      24,    25,     0,     0,     0,     0,     0,     0,     0,    27,
      66,    28,     4,     0,     0,     0,     5,     0,     0,     0,
      29,    30,     0,     0,    31,   103,     3,     7,     0,     8,
       0,    10,     0,    11,     0,     0,     0,    12,     0,     0,
       0,   202,     0,    16,    17,     0,     0,     0,     0,    18,
       0,    20,    21,    22,    68,    24,    25,     0,     0,    66,
      67,     0,     0,     0,    27,     3,    28,     0,    21,    22,
      68,    24,    25,     0,     0,    29,    30,     0,     0,    31,
       0,     0,    28,   117,     0,     0,     0,     0,     0,     0,
       0,    29,    30,    67,     0,    31,     0,     0,     3,    67,
       0,    21,    22,    68,    24,    25,     0,    21,    22,    68,
      24,    25,     0,     0,     3,    28,   139,     0,     0,   153,
       0,    28,     0,     0,    29,    30,     0,     0,    31,     0,
      29,    30,    67,     0,    31,     0,     0,     0,     0,     0,
      21,    22,    68,    24,    25,     0,     0,    66,    67,     0,
       0,     0,   197,     3,    28,     0,    21,    22,    68,    24,
      25,     0,     0,    29,    30,     0,     0,    31,  -153,     0,
      28,     0,     0,     0,     0,     0,     0,     0,     0,    29,
      30,    67,     0,    31,     0,     0,     0,    67,     0,    21,
      22,    68,    24,    25,     0,    21,    22,    68,    24,    25,
       4,     0,     0,    28,     5,     0,     0,     0,     0,    28,
       0,     0,    29,    30,     0,     7,    31,     8,    29,    30,
       0,    11,    31,     4,     0,     0,     0,     5,     0,     0,
       0,    16,    51,     0,     0,     0,     0,    18,     7,     0,
       8,     0,   107,     0,    11,     0,     0,     0,     0,    13,
      14,    15,     0,    67,    16,    51,     0,     0,     0,     0,
      18,    21,    22,    68,    24,    25,     0,     0,     0,     0,
       0,    90,    91,    92,    93,    28,     0,     0,    94,     0,
       0,     0,     0,     0,    29,    30,    95,    96,    31,    97,
      98
};

static const yytype_int16 yycheck[] =
{
       1,     1,     1,   193,    45,     1,    42,   197,    57,    28,
     169,     7,    31,     1,   275,   153,   151,    45,    46,    47,
      16,    54,    52,    43,    57,   155,    56,    28,   289,     3,
       3,    57,    60,     7,     7,    54,    55,    65,    57,    58,
      36,    61,   232,    62,    46,    47,    20,    20,   183,   117,
      24,    24,    43,    54,    55,   193,    57,   187,    60,   197,
      57,    35,    35,    65,    58,    53,    40,    40,    87,    88,
      61,   107,    66,    67,    55,   108,    45,    58,    97,    98,
      99,   100,   101,   102,    58,    58,    87,    88,   156,   108,
     158,    60,   251,    62,   232,   163,    45,    57,    99,   129,
      57,    60,   170,    55,    45,   135,    65,   108,   104,    45,
       3,    60,    55,    62,     7,   274,   104,   196,   117,    71,
      45,   200,    55,    55,   157,   204,   205,    20,    71,    55,
     209,    24,   128,    66,    67,    60,   215,    62,   157,    71,
      46,    47,    35,    45,   212,    71,   176,    40,   216,    71,
      56,   219,   188,    56,    62,   151,   157,   156,   237,   158,
      68,    69,   181,   151,   163,   233,   245,   155,    58,   202,
      43,   250,    45,   169,    60,    61,    66,    67,   246,    65,
     181,   217,   261,   202,   206,   253,    55,   183,    56,    57,
     269,    59,    60,   215,    55,   183,    46,    47,    45,   187,
       3,   202,    59,    57,     7,    45,    56,    57,   230,    66,
      67,    59,   234,   281,    45,    18,   295,    20,    66,    67,
     242,    24,    55,   245,    56,   247,   222,    59,   250,    66,
      67,    34,    35,   233,   233,   254,    56,    40,    59,    59,
      60,    55,    45,    55,   266,    29,    30,   269,    56,   271,
      59,    58,    55,   254,   276,   251,   275,    55,   280,   255,
      27,   283,    43,    44,    45,   287,     1,    58,     3,    58,
     289,    58,     7,    61,   275,    43,    44,    45,   274,   301,
      59,   281,   281,    18,    61,    20,    57,    22,   289,    24,
      45,    97,    98,    28,   100,   101,   102,    32,    61,    34,
      35,    45,    46,    47,    56,    40,    55,    42,    43,    44,
      45,    46,    47,    58,    72,    55,    59,     1,    55,     3,
      55,    55,    57,     7,    27,    45,    58,    48,    49,    50,
      51,    66,    67,    45,    18,    70,    20,    72,    22,    61,
      24,    56,    63,    64,    28,    66,    67,    56,    32,    45,
      34,    35,    45,    55,    15,    55,    40,    55,    42,    43,
      44,    45,    46,    47,    58,    57,    56,    27,     1,    58,
       3,    55,    59,    57,     7,    60,    15,    60,    43,    43,
      61,    61,    66,    67,     1,    18,    70,    20,    72,    22,
      62,    24,    -1,    -1,    -1,    28,   181,    -1,    -1,    32,
      -1,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,     1,
      -1,     3,    55,    -1,    57,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    18,    70,    20,    72,
      22,    -1,    24,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      32,    -1,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,     0,     1,    55,     3,    57,    -1,    -1,     7,    -1,
       9,    -1,    -1,    -1,    66,    67,    -1,    -1,    70,    18,
      72,    20,    21,    22,    -1,    24,    -1,    -1,    -1,    28,
      29,    30,    31,    -1,    -1,    34,    35,    -1,     1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,    22,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    66,    67,    -1,
      -1,    70,    35,    -1,    -1,     1,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    66,    67,    -1,    -1,    70,    71,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
       1,    57,     3,    -1,    -1,    -1,     7,    -1,    -1,    -1,
      66,    67,    -1,    -1,    70,    71,     1,    18,    -1,    20,
      -1,    22,    -1,    24,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    32,    -1,    34,    35,    -1,    -1,    -1,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    -1,    -1,     1,
      35,    -1,    -1,    -1,    55,     1,    57,    -1,    43,    44,
      45,    46,    47,    -1,    -1,    66,    67,    -1,    -1,    70,
      -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    35,    -1,    70,    -1,    -1,     1,    35,
      -1,    43,    44,    45,    46,    47,    -1,    43,    44,    45,
      46,    47,    -1,    -1,     1,    57,    58,    -1,    -1,    55,
      -1,    57,    -1,    -1,    66,    67,    -1,    -1,    70,    -1,
      66,    67,    35,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      43,    44,    45,    46,    47,    -1,    -1,     1,    35,    -1,
      -1,    -1,    55,     1,    57,    -1,    43,    44,    45,    46,
      47,    -1,    -1,    66,    67,    -1,    -1,    70,    55,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    35,    -1,    70,    -1,    -1,    -1,    35,    -1,    43,
      44,    45,    46,    47,    -1,    43,    44,    45,    46,    47,
       3,    -1,    -1,    57,     7,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    66,    67,    -1,    18,    70,    20,    66,    67,
      -1,    24,    70,     3,    -1,    -1,    -1,     7,    -1,    -1,
      -1,    34,    35,    -1,    -1,    -1,    -1,    40,    18,    -1,
      20,    -1,    45,    -1,    24,    -1,    -1,    -1,    -1,    29,
      30,    31,    -1,    35,    34,    35,    -1,    -1,    -1,    -1,
      40,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    57,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    66,    67,    63,    64,    70,    66,
      67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    74,     0,     1,     3,     7,     9,    18,    20,    21,
      22,    24,    28,    29,    30,    31,    34,    35,    40,    41,
      42,    43,    44,    45,    46,    47,    54,    55,    57,    66,
      67,    70,    75,    76,    77,    79,    81,    85,    86,    88,
      92,    93,    94,    96,    97,    98,    99,   100,   101,   103,
      45,    35,    92,    57,    57,    57,    92,    57,    57,    45,
      46,    47,    60,    65,    45,    45,     1,    35,    45,    94,
      96,    45,   101,    45,   101,    45,    94,    55,    92,    55,
      45,    60,    62,    83,    95,    46,    47,    56,    57,    82,
      48,    49,    50,    51,    55,    63,    64,    66,    67,    87,
      62,    68,    69,    71,   106,    45,    95,    45,    55,    75,
      89,    90,    92,    86,    96,    96,    95,    58,    86,    94,
      56,    43,    45,    94,   103,    45,    58,    45,    57,    59,
      60,    82,    43,    61,    45,    59,    55,    55,    96,    58,
      96,   104,    55,    97,    97,    96,    97,    97,    97,    75,
      78,    79,    82,    55,    86,    59,    58,    55,    58,    58,
      93,    96,   106,    58,    58,    27,    61,    61,    61,    57,
      58,    80,    92,    95,    43,    61,    59,    61,    45,    56,
      95,    59,    58,    55,    72,   107,    78,    59,    45,    46,
      47,    91,   100,    55,    90,    93,   106,    55,    86,    93,
     106,    55,    32,    75,    85,    93,   102,   105,    93,   106,
      55,    45,    58,    80,    55,   106,    58,    45,    61,    56,
      95,    56,    27,   104,    78,    90,    82,    45,    45,    91,
     102,    91,    55,    15,   102,    86,    96,    55,   102,   102,
     107,    55,   102,    57,    55,   106,    58,   102,   107,    55,
     106,    59,    82,    56,   106,    27,    92,   107,    91,    85,
      93,   106,   107,   102,   107,    58,   102,   107,    55,   106,
     107,   102,   107,    80,    59,   106,    84,    96,    92,    60,
     102,    15,   107,   102,   107,   107,    80,    84,   107,    59,
      60,    43,   107,    85,    93,   106,   107,   107,    84,    43,
      61,   102,    61,   107
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    75,    75,    75,    76,    77,    78,    78,    78,
      78,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    80,    80,    80,    80,    81,    81,    81,
      82,    83,    83,    83,    83,    83,    83,    83,    83,    84,
      84,    85,    85,    85,    85,    85,    85,    85,    85,    86,
      86,    86,    87,    87,    87,    87,    87,    87,    88,    88,
      88,    88,    88,    88,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    90,    90,    90,    91,    91,    91,    91,
      92,    92,    92,    92,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    94,    94,    94,    94,    94,    95,    95,
      95,    95,    95,    95,    96,    96,    96,    96,    97,    97,
      97,    97,    98,    98,    98,    98,    98,    98,    98,    98,
      99,    99,    99,    99,    99,    99,   100,   100,   101,   101,
     102,   102,   102,   102,   102,   102,   102,   103,   103,   104,
     104,   105,   105,   105,   106,   107
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     2,     2,     2,     3,     2,
       2,     0,     2,     3,     3,     5,     7,     2,     1,     3,
       2,     8,     9,     7,     8,     7,     8,     6,     7,     6,
       5,     7,     6,     2,     4,     3,     5,     1,     1,     1,
       2,     3,     4,     2,     3,     9,     8,     8,     7,     1,
       3,     5,     7,     7,     9,     9,    11,     7,     9,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     5,     7,
       4,     6,     5,     7,     5,     4,     4,     4,     3,     3,
       3,     2,     1,     2,     3,     4,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     3,     5,     5,     3,
       3,     2,     1,     1,     3,     4,     4,     4,     1,     2,
       4,     3,     1,     3,     1,     3,     3,     1,     1,     3,
       3,     3,     1,     2,     1,     1,     3,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       2,     1,     1,     3,     2,     2,     2,     3,     4,     1,
       3,     2,     2,     1,     1,     1
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
#line 47 "test.y" /* yacc.c:1646  */
    { printf("%s ;\n",(yyvsp[-1].s)); }
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 48 "test.y" /* yacc.c:1646  */
    { printf("%s\n",(yyvsp[0].s)); }
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 49 "test.y" /* yacc.c:1646  */
    { printf("%s\n",(yyvsp[0].s)); }
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 50 "test.y" /* yacc.c:1646  */
    { printf("%s ;\n",(yyvsp[0].s)); }
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 51 "test.y" /* yacc.c:1646  */
    { printf("%s\n",(yyvsp[0].s)); }
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 52 "test.y" /* yacc.c:1646  */
    { printf("%s\n",(yyvsp[0].s)); }
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 53 "test.y" /* yacc.c:1646  */
    { printf("%s ;\n",(yyvsp[-1].s)); }
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 54 "test.y" /* yacc.c:1646  */
    { printf("%s\n",(yyvsp[0].s)); }
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 55 "test.y" /* yacc.c:1646  */
    { printf("LINE %d:\n",lineno++); }
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 56 "test.y" /* yacc.c:1646  */
    { /*empty*/ }
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 58 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*3*returnDollarLEN);				
				sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 62 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*3*returnDollarLEN);	
				sprintf((yyval.s),"static %s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 66 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*3*returnDollarLEN);	
				sprintf((yyval.s),"final %s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 71 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				if(check_sameid((yyvsp[-3].s))) sprintf((yyval.s),"%s %s {\n>'%s' is a duplicate identifier\n%s\n}",(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-3].s),(yyvsp[-1].s));
				else{ 
					add_id((yyvsp[-3].s));
					sprintf((yyval.s),"%s %s {\n%s\n}",(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-1].s));
				}
			}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 80 "test.y" /* yacc.c:1646  */
    {
				/* check if class difined? */
				if(strcmp((yyvsp[-6].s),(yyvsp[-2].s))!=0) fprintf(stderr,"%s typed do not match with newed type %s",(yyvsp[-5].s),(yyvsp[-2].s));
				(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);	
				sprintf((yyval.s),"%s %s = new %s()",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-2].s));
			}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 87 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);	
				sprintf((yyval.s),"%s ;",(yyvsp[-1].s));
			}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 91 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (yyvsp[0].s);
			}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 94 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				sprintf((yyval.s),"%s ;\n%s",(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 98 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);	
				sprintf((yyval.s),"%s\n%s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 103 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-6].s))) sprintf((yyval.s),"%s %s(%s){\n>'%s' is a duplicate identifier\n%s\n}",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-6].s),(yyvsp[-1].s));
				else{
					add_id((yyvsp[-6].s));
					sprintf((yyval.s),"%s %s(%s){\n%s\n}",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
				}
			}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 112 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-6].s))) sprintf((yyval.s),"%s %s %s(%s){\n>'%s' is a duplicate identifier\n%s\n}",(yyvsp[-8].s),(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-6].s),(yyvsp[-1].s));
				else{
					add_id((yyvsp[-6].s));
					sprintf((yyval.s),"%s %s %s(%s){\n%s\n}",(yyvsp[-8].s),(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
				}
			}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 121 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-5].s))) sem_def = 1;
				else{
					add_id((yyvsp[-5].s));
					sprintf((yyval.s),"%s %s(){\n%s\n}",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-1].s));
				}
			}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 130 "test.y" /* yacc.c:1646  */
    { /*function*/
				/* ps compound is things inside function(){ HERE } */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-5].s))) sprintf((yyval.s),"%s %s %s(){\n>'%s' is a duplicate identifier\n%s\n}",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-5].s),(yyvsp[-1].s));
				else{ 
					sprintf((yyval.s),"%s %s %s(){\n%s\n}",(yyvsp[-7].s),(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-1].s));
 					add_id((yyvsp[-5].s));
 				}
			}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 139 "test.y" /* yacc.c:1646  */
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
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 149 "test.y" /* yacc.c:1646  */
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
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 159 "test.y" /* yacc.c:1646  */
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
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 169 "test.y" /* yacc.c:1646  */
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
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 179 "test.y" /* yacc.c:1646  */
    { /* function declaration */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-4].s))) sprintf((yyval.s),"%s %s(%s) ;\n>'%s' is a duplicate identifier",(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-2].s));
				else{ 
					sprintf((yyval.s),"%s %s(%s) ;",(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-2].s));
					add_id((yyvsp[-4].s));
				}
			}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 187 "test.y" /* yacc.c:1646  */
    { /* function declaration */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-3].s))) sprintf((yyval.s),"%s %s() ;\n>'%s' is a duplicate identifier",(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-3].s));
				else{ 
					sprintf((yyval.s),"%s %s() ;",(yyvsp[-4].s),(yyvsp[-3].s));
 					add_id((yyvsp[-3].s));
 				}
			}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 195 "test.y" /* yacc.c:1646  */
    { /* function declaration */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-4].s))) sprintf((yyval.s),"%s %s %s(%s) ;\n>'%s' is a duplicate identifier",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[-4].s));
				else{ 
					sprintf((yyval.s),"%s %s %s(%s) ;",(yyvsp[-6].s),(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-2].s));
 					add_id((yyvsp[-4].s));
 				}
			}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 203 "test.y" /* yacc.c:1646  */
    { /* function declaration */
				(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
				if(check_sameid((yyvsp[-3].s))) sprintf((yyval.s),"%s %s %s() ;\n>'%s' is a duplicate identifier",(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-3].s));
				else{ 
					sprintf((yyval.s),"%s %s %s() ;",(yyvsp[-5].s),(yyvsp[-4].s),(yyvsp[-3].s));
 					add_id((yyvsp[-3].s));
 				}
			}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 212 "test.y" /* yacc.c:1646  */
    {
						(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
						sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
					}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 216 "test.y" /* yacc.c:1646  */
    {
						(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
						sprintf((yyval.s),"%s %s, %s",(yyvsp[-3].s),(yyvsp[-2].s),(yyvsp[0].s));
					}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 220 "test.y" /* yacc.c:1646  */
    {
						(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
						sprintf((yyval.s),"%s %s %s",(yyvsp[-2].s),(yyvsp[-1].s),(yyvsp[0].s));
					}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 224 "test.y" /* yacc.c:1646  */
    {
						(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
						sprintf((yyval.s),"%s %s %s, %s",(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-2].s),(yyvsp[0].s));
					}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 229 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 230 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 231 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 233 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"= %s",(yyvsp[0].s));
				}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 238 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[0].s))) sprintf((yyval.s),"[] %s\n>'%s' is a duplicate identifier",(yyvsp[0].s),(yyvsp[0].s));
					else{ 
						sprintf((yyval.s),"[] %s",(yyvsp[0].s));
 						add_id((yyvsp[0].s));
 					}
				}
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 246 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);		
					if(check_sameid((yyvsp[-3].s))) sprintf((yyval.s),"%s[%d]\n>'%s' is a duplicate identifier",(yyvsp[-3].s),(yyvsp[-1].i),(yyvsp[-3].s));
					else{ 
						sprintf((yyval.s),"%s[%d]",(yyvsp[-3].s),(yyvsp[-1].i));
 						add_id((yyvsp[-3].s));
 					}
				}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 254 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[0].s))) sprintf((yyval.s),"* %s\n>'%s' is a duplicate identifier",(yyvsp[0].s),(yyvsp[0].s));
					else{ 
						sprintf((yyval.s),"* %s",(yyvsp[0].s));
 						add_id((yyvsp[0].s));
 					}
				}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 262 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"[%d]",(yyvsp[-1].i));
				}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 266 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[-6].s))) sprintf((yyval.s),"[] %s = new %s[%d]\n>'%s' is a duplicate identifier",(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].i),(yyvsp[-6].s));
					else{ 
						sprintf((yyval.s),"[] %s = new %s[%d]",(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].i));
 						add_id((yyvsp[-6].s));
 					}
				}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 274 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[-6].s))) sprintf((yyval.s),"*%s = new %s[%d]\n>'%s' is a duplicate identifier",(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].i),(yyvsp[-6].s));
					else{ 
						sprintf((yyval.s),"*%s = new %s[%d]",(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].i));
 						add_id((yyvsp[-6].s));
 					}
				}
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 282 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*8*returnDollarLEN);	
					if(check_sameid((yyvsp[-7].s))) sprintf((yyval.s),"%s[%d] = {%s}\n>'%s' is a duplicate identifier",(yyvsp[-7].s),(yyvsp[-5].i),(yyvsp[-1].s),(yyvsp[-7].s));
					else{ 
						sprintf((yyval.s),"%s[%d] = {%s}",(yyvsp[-7].s),(yyvsp[-5].i),(yyvsp[-1].s));
						add_id((yyvsp[-7].s));
					}
				}
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 290 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*8*returnDollarLEN);	
					if(check_sameid((yyvsp[-6].s))) sprintf((yyval.s),"%s[] = {%s}\n>'%s' is a duplicate identifier",(yyvsp[-6].s),(yyvsp[-1].s),(yyvsp[-6].s));
					else{ 
						sprintf((yyval.s),"%s[] = {%s}",(yyvsp[-6].s),(yyvsp[-1].s));
						 add_id((yyvsp[-6].s));
					}
				}
#line 2150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 299 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 300 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%s,%s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 305 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) %s",(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[0].s)); 
				}
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 309 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*5*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) {\n%s\n}",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
				}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 313 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) %s\n%s %s",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 317 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) %s\n%s {\n%s\n}",(yyvsp[-8].s),(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 321 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) {\n%s\n}\n%s %s",(yyvsp[-8].s),(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 325 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) {\n%s\n}\n%s {\n%s\n}",(yyvsp[-10].s),(yyvsp[-8].s),(yyvsp[-5].s),(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 329 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) %s\n%s %s",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 333 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);					
					sprintf((yyval.s),"%s(%s) {\n%s\n}\n%s %s",(yyvsp[-8].s),(yyvsp[-6].s),(yyvsp[-3].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 338 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s);}
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 339 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%s %s %s",(yyvsp[-2].s),(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 343 "test.y" /* yacc.c:1646  */
    { /* error recovery */ (yyval.s) = "ERROR HERE"; }
#line 2258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 345 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 346 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 347 "test.y" /* yacc.c:1646  */
    { (yyval.s) = "<"; }
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 348 "test.y" /* yacc.c:1646  */
    { (yyval.s) = ">"; }
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 349 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 350 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 352 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ( %s ) %s",(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 356 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf((yyval.s),"%s ( %s ) {\n%s\n}",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
			}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 360 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ( ) %s ;",(yyvsp[-3].s),(yyvsp[0].s));
			}
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 364 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*10*returnDollarLEN);
					sprintf((yyval.s),"%s ( ) {\n%s\n}",(yyvsp[-5].s),(yyvsp[-1].s));
			}
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 368 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ( %s ) %s ;",(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 372 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf((yyval.s),"%s ( %s ) {\n%s\n}",(yyvsp[-6].s),(yyvsp[-4].s),(yyvsp[-1].s));
			}
#line 2348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 377 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ; %s ; %s",(yyvsp[-4].s),(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 381 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s)," ; %s ; %s",(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 385 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ; ; %s",(yyvsp[-3].s),(yyvsp[0].s));
			}
#line 2375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 389 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s ; %s ;",(yyvsp[-3].s),(yyvsp[-1].s));
			}
#line 2384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 393 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s)," ; ; %s ",(yyvsp[0].s));
			}
#line 2393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 397 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s)," ; %s ; ",(yyvsp[-1].s));
			}
#line 2402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 401 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s)," %s ; ;",(yyvsp[-2].s));
			}
#line 2411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 405 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s)," ; ; ");
			}
#line 2420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 410 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 411 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[-1].s); }
#line 2432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 412 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s , %s",(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 416 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s %s , %s",(yyvsp[-3].s),(yyvsp[-2].s),(yyvsp[0].s));
			}
#line 2450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 421 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 422 "test.y" /* yacc.c:1646  */
    {
				(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
				sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 2465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 426 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 2474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 430 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
			}
#line 2483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 435 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 2489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 435 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 2495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 435 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s); }
#line 2501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 435 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 2507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 435 "test.y" /* yacc.c:1646  */
    {(yyval.s) = (yyvsp[0].s);}
#line 2513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 435 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 437 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s ;",(yyvsp[-2].s),(yyvsp[-1].s));
				}
#line 2528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 441 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*5*returnDollarLEN);
					sprintf((yyval.s),"%s(%s) ;",(yyvsp[-4].s),(yyvsp[-2].s));
				}
#line 2537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 445 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s(%s) ;",(yyvsp[-4].s),(yyvsp[-2].s));
				}
#line 2546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 449 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s%s ;",(yyvsp[-2].s),(yyvsp[-1].s));
				}
#line 2555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 453 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s%s ;",(yyvsp[-2].s),(yyvsp[-1].s));
				}
#line 2564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 457 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s ;",(yyvsp[-1].s));
				}
#line 2573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 461 "test.y" /* yacc.c:1646  */
    { (yyval.s) = ";"; }
#line 2579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 463 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 464 "test.y" /* yacc.c:1646  */
    { 
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s.%s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 468 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s[%d]",(yyvsp[-3].s),(yyvsp[-1].i));
				}
#line 2603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 472 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s[%s]",(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 2612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 476 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s[%s]",(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 2621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 481 "test.y" /* yacc.c:1646  */
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
#line 2637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 492 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[-1].s))) sprintf((yyval.s),"%s %s\n>'%s' is a duplicate identifier",(yyvsp[-1].s),(yyvsp[0].s),(yyvsp[-1].s));
					else{ 
						add_id((yyvsp[-1].s));
						sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
					}
				}
#line 2650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 500 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[-3].s))) sprintf((yyval.s),"%s %s, %s\n>'%s' is a duplicate identifier",(yyvsp[-3].s),(yyvsp[-2].s),(yyvsp[0].s),(yyvsp[-3].s));
					else{ 
						sprintf((yyval.s),"%s %s, %s",(yyvsp[-3].s),(yyvsp[-2].s),(yyvsp[0].s));
 						add_id((yyvsp[-3].s));
 					}
				}
#line 2663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 508 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					if(check_sameid((yyvsp[-2].s))) sprintf((yyval.s),"%s, %s\n>'%s' is a duplicate identifier",(yyvsp[-2].s),(yyvsp[0].s),(yyvsp[-2].s));
					else{ 
						sprintf((yyval.s),"%s, %s",(yyvsp[-2].s),(yyvsp[0].s));
 						add_id((yyvsp[-2].s));
 					}
				}
#line 2676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 516 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 517 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*8*returnDollarLEN);
					sprintf((yyval.s),"%s, %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 523 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s);}
#line 2697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 524 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s + %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 528 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s - %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 532 "test.y" /* yacc.c:1646  */
    { /* error recovery */ (yyval.s) = "ERROR HERE"; }
#line 2721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 534 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 535 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s * %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 539 "test.y" /* yacc.c:1646  */
    {
					/*zero divisor*/
					if((yyvsp[0].s)[0]=='0') fprintf(stderr,"zero divisor\n");
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s / %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 545 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s \% %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 550 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 551 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"!%s",(yyvsp[0].s));
				}
#line 2771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 555 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s);}
#line 2777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 556 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 557 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"(%s)",(yyvsp[-1].s));
				}
#line 2792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 561 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (yyvsp[0].s);
				}
#line 2800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 564 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (yyvsp[0].s);;
				}
#line 2808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 567 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 569 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"++%s",(yyvsp[0].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support ++ operator\n");*/
				}
#line 2827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 577 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"--%s",(yyvsp[0].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
#line 2840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 585 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"+%s",(yyvsp[0].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
#line 2853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 593 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"-%s",(yyvsp[0].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
#line 2866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 601 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"-%s",(yyvsp[0].s));
				}
#line 2875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 605 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"-%s",(yyvsp[0].s));
				}
#line 2884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 610 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s++",(yyvsp[-1].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support ++ operator\n");*/
				}
#line 2897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 618 "test.y" /* yacc.c:1646  */
    {
					/* need implement ID = function or variable */
					/* if ID is variable */
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s--",(yyvsp[-1].s));
					/* if ID is function */
					/*fprintf(stderr,"function name doesn't support -- operator\n");*/
				}
#line 2910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 628 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%d",(yyvsp[0].i)); 
				}
#line 2919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 632 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);					
					sprintf((yyval.s),"%g",(yyvsp[0].d));
				}
#line 2928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 637 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s ;",(yyvsp[-1].s));
				}
#line 2937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 641 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 642 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 643 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*15*returnDollarLEN);
					sprintf((yyval.s),"%s\n%s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 2958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 647 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*5*returnDollarLEN);
					sprintf((yyval.s),"%s\n%s",(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 651 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*5*returnDollarLEN);
					sprintf((yyval.s),"%s\n%s",(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 2976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 655 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s ;",(yyvsp[-1].s));
				}
#line 2985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 660 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s()",(yyvsp[-2].s));
				}
#line 2994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 664 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*2*returnDollarLEN);
					sprintf((yyval.s),"%s(%s)",(yyvsp[-3].s),(yyvsp[-1].s));
				}
#line 3003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 669 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 3009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 670 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s, %s",(yyvsp[-2].s),(yyvsp[0].s));
				}
#line 3018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 675 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 3027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 679 "test.y" /* yacc.c:1646  */
    {
					(yyval.s) = (char*)malloc(sizeof(char)*returnDollarLEN);
					sprintf((yyval.s),"%s %s",(yyvsp[-1].s),(yyvsp[0].s));
				}
#line 3036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 683 "test.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 3042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 685 "test.y" /* yacc.c:1646  */
    {
					into_scope("scope");
					(yyval.c) = '{';
				}
#line 3051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 690 "test.y" /* yacc.c:1646  */
    {
					/*print_current();*/
					out_scope();				
					(yyval.c) = '}';
				}
#line 3061 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3065 "y.tab.c" /* yacc.c:1646  */
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
#line 696 "test.y" /* yacc.c:1906  */

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
