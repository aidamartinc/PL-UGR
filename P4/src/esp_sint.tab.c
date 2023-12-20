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
#line 1 "src/esp_sint.y"

/* ********************************************************
**
** Fichero : PRUEBA .Y
** Funcion : Pruebas de YACC para practicas de PL
**
******************************************************* */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "semantica.h"

// #include "./include/semantica.h"

int yylex() ; 

/** La siguiente declaracion permite que 'yyerror ' se pueda invocar desde el
*** fuente de lex ( prueba .l)
**/

void yyerror ( const char * msg ) ;

/** La siguiente variable se usara para conocer el numero de la linea
*** que se esta leyendo en cada momento . Tambien es posible usar la variable
*** 'yylineno ' que tambien nos muestra la linea actual . Para ello es necesario
*** invocar a flex con la opcion '-l' ( compatibilidad con lex ).
**/

//int linea_actual = 1 ;

#define YYERROR_VERBOSE


#line 105 "src/esp_sint.tab.c"

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

#include "esp_sint.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CABECERA_PROGRAMA = 3,          /* CABECERA_PROGRAMA  */
  YYSYMBOL_TIPO_PRIM = 4,                  /* TIPO_PRIM  */
  YYSYMBOL_TIPO_LISTA = 5,                 /* TIPO_LISTA  */
  YYSYMBOL_ID_IF = 6,                      /* ID_IF  */
  YYSYMBOL_ID_ELSE = 7,                    /* ID_ELSE  */
  YYSYMBOL_ID_WHILE = 8,                   /* ID_WHILE  */
  YYSYMBOL_ID_REPEAT = 9,                  /* ID_REPEAT  */
  YYSYMBOL_ID_UNTIL = 10,                  /* ID_UNTIL  */
  YYSYMBOL_ID_RETURN = 11,                 /* ID_RETURN  */
  YYSYMBOL_NOMB_ENTRADA = 12,              /* NOMB_ENTRADA  */
  YYSYMBOL_NOMB_SALIDA = 13,               /* NOMB_SALIDA  */
  YYSYMBOL_LISTA_SENT_DER = 14,            /* LISTA_SENT_DER  */
  YYSYMBOL_LISTA_SENT_IZQ = 15,            /* LISTA_SENT_IZQ  */
  YYSYMBOL_EXPR_LISTA_IZQ = 16,            /* EXPR_LISTA_IZQ  */
  YYSYMBOL_EXPR_LISTA_DER = 17,            /* EXPR_LISTA_DER  */
  YYSYMBOL_OP_UN_DELANTE = 18,             /* OP_UN_DELANTE  */
  YYSYMBOL_OP_BIN_TERN_PRIM = 19,          /* OP_BIN_TERN_PRIM  */
  YYSYMBOL_OP_BIN_TERN_SEG = 20,           /* OP_BIN_TERN_SEG  */
  YYSYMBOL_OP_BINARIO = 21,                /* OP_BINARIO  */
  YYSYMBOL_OP_UNARIO = 22,                 /* OP_UNARIO  */
  YYSYMBOL_OP_UN_BIN = 23,                 /* OP_UN_BIN  */
  YYSYMBOL_IDENTIFICADOR = 24,             /* IDENTIFICADOR  */
  YYSYMBOL_CADENA = 25,                    /* CADENA  */
  YYSYMBOL_PAR_IZQ = 26,                   /* PAR_IZQ  */
  YYSYMBOL_PAR_DER = 27,                   /* PAR_DER  */
  YYSYMBOL_CORCH_IZQ = 28,                 /* CORCH_IZQ  */
  YYSYMBOL_CORCH_DER = 29,                 /* CORCH_DER  */
  YYSYMBOL_LLAVE_IZQ = 30,                 /* LLAVE_IZQ  */
  YYSYMBOL_LLAVE_DER = 31,                 /* LLAVE_DER  */
  YYSYMBOL_COMA = 32,                      /* COMA  */
  YYSYMBOL_PYC = 33,                       /* PYC  */
  YYSYMBOL_ASIGN = 34,                     /* ASIGN  */
  YYSYMBOL_IVAR = 35,                      /* IVAR  */
  YYSYMBOL_FVAR = 36,                      /* FVAR  */
  YYSYMBOL_OP_BIN_MULTDIV = 37,            /* OP_BIN_MULTDIV  */
  YYSYMBOL_OP_RELACION = 38,               /* OP_RELACION  */
  YYSYMBOL_OP_IGUALDAD = 39,               /* OP_IGUALDAD  */
  YYSYMBOL_OP_LOGICOS_OR = 40,             /* OP_LOGICOS_OR  */
  YYSYMBOL_OP_LOGICOS_AND = 41,            /* OP_LOGICOS_AND  */
  YYSYMBOL_OP_BINARIO_LISTAS = 42,         /* OP_BINARIO_LISTAS  */
  YYSYMBOL_OP_TER_LIST = 43,               /* OP_TER_LIST  */
  YYSYMBOL_OP_MAS_MENOS = 44,              /* OP_MAS_MENOS  */
  YYSYMBOL_OP_UN_NEG = 45,                 /* OP_UN_NEG  */
  YYSYMBOL_OP_UN_SHARP = 46,               /* OP_UN_SHARP  */
  YYSYMBOL_OP_UN_QUEST = 47,               /* OP_UN_QUEST  */
  YYSYMBOL_OP_MENOS_MENOS = 48,            /* OP_MENOS_MENOS  */
  YYSYMBOL_OP_MAS_MAS = 49,                /* OP_MAS_MAS  */
  YYSYMBOL_CONST_INT = 50,                 /* CONST_INT  */
  YYSYMBOL_CONST_FLOAT = 51,               /* CONST_FLOAT  */
  YYSYMBOL_CONST_BOOL = 52,                /* CONST_BOOL  */
  YYSYMBOL_CONST_CHAR = 53,                /* CONST_CHAR  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_programa = 55,                  /* programa  */
  YYSYMBOL_bloque = 56,                    /* bloque  */
  YYSYMBOL_57_1 = 57,                      /* $@1  */
  YYSYMBOL_Declar_de_subprogs = 58,        /* Declar_de_subprogs  */
  YYSYMBOL_Declar_subprog = 59,            /* Declar_subprog  */
  YYSYMBOL_60_2 = 60,                      /* $@2  */
  YYSYMBOL_Declar_de_variables_locales = 61, /* Declar_de_variables_locales  */
  YYSYMBOL_62_3 = 62,                      /* $@3  */
  YYSYMBOL_decl_variables = 63,            /* decl_variables  */
  YYSYMBOL_lista_variables = 64,           /* lista_variables  */
  YYSYMBOL_65_4 = 65,                      /* $@4  */
  YYSYMBOL_lista_ident = 66,               /* lista_ident  */
  YYSYMBOL_tipo = 67,                      /* tipo  */
  YYSYMBOL_Cabecera_subprog = 68,          /* Cabecera_subprog  */
  YYSYMBOL_69_5 = 69,                      /* $@5  */
  YYSYMBOL_lista_arg = 70,                 /* lista_arg  */
  YYSYMBOL_argumentos = 71,                /* argumentos  */
  YYSYMBOL_Sentencia_opt = 72,             /* Sentencia_opt  */
  YYSYMBOL_Sentencias = 73,                /* Sentencias  */
  YYSYMBOL_74_6 = 74,                      /* $@6  */
  YYSYMBOL_75_7 = 75,                      /* $@7  */
  YYSYMBOL_Sentencia = 76,                 /* Sentencia  */
  YYSYMBOL_sentencia_entrada = 77,         /* sentencia_entrada  */
  YYSYMBOL_sentencia_salida = 78,          /* sentencia_salida  */
  YYSYMBOL_sentencia_listas = 79,          /* sentencia_listas  */
  YYSYMBOL_expresion = 80,                 /* expresion  */
  YYSYMBOL_constante = 81,                 /* constante  */
  YYSYMBOL_constante_base = 82,            /* constante_base  */
  YYSYMBOL_constante_lista = 83,           /* constante_lista  */
  YYSYMBOL_constante_lista_int = 84,       /* constante_lista_int  */
  YYSYMBOL_constante_lista_float = 85,     /* constante_lista_float  */
  YYSYMBOL_constante_lista_bool = 86,      /* constante_lista_bool  */
  YYSYMBOL_constante_lista_char = 87,      /* constante_lista_char  */
  YYSYMBOL_sentencia_asignacion = 88,      /* sentencia_asignacion  */
  YYSYMBOL_sentencia_if = 89,              /* sentencia_if  */
  YYSYMBOL_sentencia_while = 90,           /* sentencia_while  */
  YYSYMBOL_sentencia_repeat = 91,          /* sentencia_repeat  */
  YYSYMBOL_sentencia_return = 92,          /* sentencia_return  */
  YYSYMBOL_93_8 = 93,                      /* @8  */
  YYSYMBOL_lista_variables_entrada = 94,   /* lista_variables_entrada  */
  YYSYMBOL_lista_expresiones_o_cadena = 95, /* lista_expresiones_o_cadena  */
  YYSYMBOL_lista = 96,                     /* lista  */
  YYSYMBOL_llamada_funcion = 97,           /* llamada_funcion  */
  YYSYMBOL_lista_expresiones = 98          /* lista_expresiones  */
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   305

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  182

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   123,   123,   125,   125,   133,   134,   137,   137,   140,
     140,   141,   144,   145,   148,   148,   149,   152,   153,   154,
     157,   158,   160,   160,   166,   167,   168,   171,   172,   177,
     178,   181,   181,   182,   182,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   197,   199,   202,   203,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     231,   232,   234,   235,   236,   237,   239,   240,   241,   242,
     244,   245,   246,   247,   248,   249,   250,   251,   255,   257,
     258,   260,   261,   262,   262,   265,   267,   269,   273,   274,
     275,   276,   277,   281,   284,   287,   288,   289
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
  "\"end of file\"", "error", "\"invalid token\"", "CABECERA_PROGRAMA",
  "TIPO_PRIM", "TIPO_LISTA", "ID_IF", "ID_ELSE", "ID_WHILE", "ID_REPEAT",
  "ID_UNTIL", "ID_RETURN", "NOMB_ENTRADA", "NOMB_SALIDA", "LISTA_SENT_DER",
  "LISTA_SENT_IZQ", "EXPR_LISTA_IZQ", "EXPR_LISTA_DER", "OP_UN_DELANTE",
  "OP_BIN_TERN_PRIM", "OP_BIN_TERN_SEG", "OP_BINARIO", "OP_UNARIO",
  "OP_UN_BIN", "IDENTIFICADOR", "CADENA", "PAR_IZQ", "PAR_DER",
  "CORCH_IZQ", "CORCH_DER", "LLAVE_IZQ", "LLAVE_DER", "COMA", "PYC",
  "ASIGN", "IVAR", "FVAR", "OP_BIN_MULTDIV", "OP_RELACION", "OP_IGUALDAD",
  "OP_LOGICOS_OR", "OP_LOGICOS_AND", "OP_BINARIO_LISTAS", "OP_TER_LIST",
  "OP_MAS_MENOS", "OP_UN_NEG", "OP_UN_SHARP", "OP_UN_QUEST",
  "OP_MENOS_MENOS", "OP_MAS_MAS", "CONST_INT", "CONST_FLOAT", "CONST_BOOL",
  "CONST_CHAR", "$accept", "programa", "bloque", "$@1",
  "Declar_de_subprogs", "Declar_subprog", "$@2",
  "Declar_de_variables_locales", "$@3", "decl_variables",
  "lista_variables", "$@4", "lista_ident", "tipo", "Cabecera_subprog",
  "$@5", "lista_arg", "argumentos", "Sentencia_opt", "Sentencias", "$@6",
  "$@7", "Sentencia", "sentencia_entrada", "sentencia_salida",
  "sentencia_listas", "expresion", "constante", "constante_base",
  "constante_lista", "constante_lista_int", "constante_lista_float",
  "constante_lista_bool", "constante_lista_char", "sentencia_asignacion",
  "sentencia_if", "sentencia_while", "sentencia_repeat",
  "sentencia_return", "@8", "lista_variables_entrada",
  "lista_expresiones_o_cadena", "lista", "llamada_funcion",
  "lista_expresiones", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-32)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-108)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,    -6,    20,   -32,   -32,   -32,    29,   -32,   -32,    78,
      14,   -32,   -32,    66,     7,   -32,   -32,   -32,    74,   -32,
      71,    83,   193,   -32,   -32,   -32,     3,   -32,    -6,   -32,
     193,   -32,   102,   103,   193,   140,   107,     6,   113,   -11,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,    61,   116,   -32,   -32,   140,   140,   134,   -32,
     121,   140,    25,   140,   140,   140,   140,   140,   140,   -32,
     -32,   -32,   -32,   257,   -32,   -32,   -32,   -32,   -32,   -32,
       9,   -12,   -32,   -32,   257,    75,   -32,   -32,   140,   124,
     -32,    21,   188,   203,   123,    73,   218,   -32,   -32,   -32,
     -32,    63,    80,    81,    98,    15,   104,   104,   104,   104,
     104,   -32,   140,   140,   140,   140,   140,   140,   140,   140,
     117,   141,   143,   -32,   110,   -32,   230,   -32,   -32,   150,
     148,   145,   193,   193,   140,   257,    39,   -32,   -32,   128,
     -32,   131,   -32,   127,   -32,   130,   -32,   132,   104,   -31,
      95,    24,   172,    32,   104,   -32,   -32,   -32,   -32,   257,
     -32,   -32,   -32,   111,   189,   -32,   245,   -32,   140,   -32,
     -32,   -32,   -32,   140,   171,   193,   164,   257,   -32,   -32,
     -32,   -32
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     3,     2,     1,    11,     9,     6,     0,
      33,    16,    20,     0,     0,    13,    14,     5,     0,     7,
       0,    31,     0,    21,    10,    12,     0,    22,     0,     4,
       0,    44,     0,     0,     0,     0,     0,     0,     0,     0,
      35,    34,    38,    39,    43,    42,    36,    37,    41,    40,
      19,    18,     0,     0,     8,    32,     0,     0,     0,    69,
      64,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    93,    65,    70,    71,    66,    67,    96,
       0,    64,   102,   101,   100,     0,    47,    48,     0,     0,
      15,     0,     0,     0,     0,     0,     0,    81,    83,    85,
      87,     0,     0,     0,     0,     0,    55,    49,    50,    51,
      53,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,    46,     0,    17,    26,     0,
       0,    24,     0,     0,     0,   106,     0,    68,    76,     0,
      77,     0,    78,     0,    79,     0,   103,    61,    56,    59,
      60,    58,    57,    54,    62,    94,    97,    95,    99,    98,
      88,    27,    23,     0,    89,    91,     0,   104,     0,    80,
      82,    84,    86,     0,     0,     0,     0,   105,    63,    28,
      90,    92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -32,   -32,    45,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     184,   -32,   -32,   -10,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -29,   -32,   -32,   163,   -28,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     151,   -32,   -32,   -32,   -32
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    40,     6,    10,    17,    28,     8,     9,    14,
      15,    26,    52,    16,    19,    53,   130,   131,    20,    21,
      30,    22,    41,    42,    43,    44,    73,    74,    75,    76,
     101,   102,   103,   104,    45,    46,    47,    48,    49,   120,
      80,    85,    77,    78,   136
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    55,    87,    87,    50,    58,   113,    59,    11,    84,
     121,    12,    13,   118,    95,     1,   121,   119,    12,    13,
       5,    38,   128,    88,     3,    12,    13,    51,    92,    93,
      81,    82,    61,    96,    62,   106,   107,   108,   109,   110,
     111,   122,   123,    24,   146,   -30,     4,   122,   -25,    79,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
     126,   113,   114,   115,     7,   117,   167,   135,   118,   113,
      23,   168,   119,    54,    59,    97,    98,    99,   100,    11,
     119,   129,    12,    13,   147,   148,   149,   150,   151,   152,
     153,   154,   138,    89,    90,   139,   159,    60,    27,    61,
    -107,    62,    29,   164,   165,  -107,   166,   124,   125,   140,
     142,    59,   141,   143,   -29,    12,    13,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,   144,    56,    57,
     145,    79,   113,   114,    60,   158,    61,    86,    62,   118,
     177,    59,    91,   119,    94,   178,   180,    95,   127,   134,
     155,   112,   119,   174,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    60,   156,    61,   157,    62,   113,
     114,   115,   116,   117,   161,   162,   118,   163,   169,   171,
     119,   173,   170,   172,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    31,   179,   175,   181,    25,    32,
      83,    33,    34,     0,    35,    36,    37,   112,    38,   113,
     114,   115,     0,   105,     0,   132,   118,    39,     0,     0,
     119,     0,   112,     3,     0,   113,   114,   115,   116,   117,
     133,     0,   118,     0,     0,     0,   119,   112,     0,     0,
     113,   114,   115,   116,   117,   137,     0,   118,     0,   112,
       0,   119,     0,     0,     0,   113,   114,   115,   116,   117,
       0,     0,   118,   160,   112,     0,   119,   113,   114,   115,
     116,   117,   176,     0,   118,     0,   112,     0,   119,     0,
       0,     0,   113,   114,   115,   116,   117,     0,     0,   118,
       0,     0,     0,   119,   113,   114,   115,   116,   117,     0,
       0,   118,     0,     0,     0,   119
};

static const yytype_int16 yycheck[] =
{
      10,    30,    14,    14,     1,    34,    37,     1,     1,    37,
       1,     4,     5,    44,    26,     3,     1,    48,     4,     5,
       0,    15,     1,    34,    30,     4,     5,    24,    56,    57,
      24,    25,    26,    61,    28,    63,    64,    65,    66,    67,
      68,    32,    33,    36,    29,    31,     1,    32,    27,    24,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      88,    37,    38,    39,    35,    41,    27,    95,    44,    37,
       4,    32,    48,    28,     1,    50,    51,    52,    53,     1,
      48,    91,     4,     5,   112,   113,   114,   115,   116,   117,
     118,   119,    29,    32,    33,    32,   124,    24,    24,    26,
      27,    28,    31,   132,   133,    32,   134,    32,    33,    29,
      29,     1,    32,    32,    31,     4,     5,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    29,    26,    26,
      32,    24,    37,    38,    24,    25,    26,    24,    28,    44,
     168,     1,    26,    48,    10,   173,   175,    26,    24,    26,
      33,    19,    48,   163,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    24,    24,    26,    24,    28,    37,
      38,    39,    40,    41,    24,    27,    44,    32,    50,    52,
      48,    49,    51,    53,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     1,    24,     7,    33,    14,     6,
      37,     8,     9,    -1,    11,    12,    13,    19,    15,    37,
      38,    39,    -1,    62,    -1,    27,    44,    24,    -1,    -1,
      48,    -1,    19,    30,    -1,    37,    38,    39,    40,    41,
      27,    -1,    44,    -1,    -1,    -1,    48,    19,    -1,    -1,
      37,    38,    39,    40,    41,    27,    -1,    44,    -1,    19,
      -1,    48,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      -1,    -1,    44,    33,    19,    -1,    48,    37,    38,    39,
      40,    41,    27,    -1,    44,    -1,    19,    -1,    48,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    -1,    -1,    44,
      -1,    -1,    -1,    48,    37,    38,    39,    40,    41,    -1,
      -1,    44,    -1,    -1,    -1,    48
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    55,    30,    56,     0,    57,    35,    61,    62,
      58,     1,     4,     5,    63,    64,    67,    59,    67,    68,
      72,    73,    75,     4,    36,    64,    65,    24,    60,    31,
      74,     1,     6,     8,     9,    11,    12,    13,    15,    24,
      56,    76,    77,    78,    79,    88,    89,    90,    91,    92,
       1,    24,    66,    69,    56,    76,    26,    26,    76,     1,
      24,    26,    28,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    80,    81,    82,    83,    96,    97,    24,
      94,    24,    25,    79,    80,    95,    24,    14,    34,    32,
      33,    26,    80,    80,    10,    26,    80,    50,    51,    52,
      53,    84,    85,    86,    87,    94,    80,    80,    80,    80,
      80,    80,    19,    37,    38,    39,    40,    41,    44,    48,
      93,     1,    32,    33,    32,    33,    80,    24,     1,    67,
      70,    71,    27,    27,    26,    80,    98,    27,    29,    32,
      29,    32,    29,    32,    29,    32,    29,    80,    80,    80,
      80,    80,    80,    80,    80,    33,    24,    24,    25,    80,
      33,    24,    27,    32,    76,    76,    80,    27,    32,    50,
      51,    52,    53,    49,    67,     7,    27,    80,    80,    24,
      76,    33
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    57,    56,    58,    58,    60,    59,    62,
      61,    61,    63,    63,    65,    64,    64,    66,    66,    66,
      67,    67,    69,    68,    70,    70,    70,    71,    71,    72,
      72,    74,    73,    75,    73,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    77,    78,    79,    79,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      81,    81,    82,    82,    82,    82,    83,    83,    83,    83,
      84,    84,    85,    85,    86,    86,    87,    87,    88,    89,
      89,    90,    91,    93,    92,    94,    94,    94,    95,    95,
      95,    95,    95,    96,    97,    98,    98,    98
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     6,     2,     0,     0,     3,     0,
       4,     0,     2,     1,     0,     4,     1,     3,     1,     1,
       1,     2,     0,     6,     1,     0,     1,     2,     4,     1,
       0,     0,     3,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     5,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     4,     5,
       7,     5,     7,     0,     4,     3,     1,     3,     3,     3,
       1,     1,     1,     3,     4,     3,     1,     0
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
  case 3: /* $@1: %empty  */
#line 125 "src/esp_sint.y"
                   { TS_AddMark(); }
#line 1355 "src/esp_sint.tab.c"
    break;

  case 4: /* bloque: LLAVE_IZQ $@1 Declar_de_variables_locales Declar_de_subprogs Sentencia_opt LLAVE_DER  */
#line 131 "src/esp_sint.y"
                   { TS_ClearBlock(); }
#line 1361 "src/esp_sint.tab.c"
    break;

  case 7: /* $@2: %empty  */
#line 137 "src/esp_sint.y"
                                  { esFunc = 1; }
#line 1367 "src/esp_sint.tab.c"
    break;

  case 8: /* Declar_subprog: Cabecera_subprog $@2 bloque  */
#line 137 "src/esp_sint.y"
                                                         { esFunc = 0; }
#line 1373 "src/esp_sint.tab.c"
    break;

  case 9: /* $@3: %empty  */
#line 140 "src/esp_sint.y"
                                   { decVar = 1; }
#line 1379 "src/esp_sint.tab.c"
    break;

  case 10: /* Declar_de_variables_locales: IVAR $@3 decl_variables FVAR  */
#line 140 "src/esp_sint.y"
                                                                       { decVar = 0; }
#line 1385 "src/esp_sint.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 148 "src/esp_sint.y"
                       {setType(yyvsp[0]); }
#line 1391 "src/esp_sint.tab.c"
    break;

  case 17: /* lista_ident: lista_ident COMA IDENTIFICADOR  */
#line 152 "src/esp_sint.y"
                                             { VarList_Id(yyvsp[0], &yyval); }
#line 1397 "src/esp_sint.tab.c"
    break;

  case 18: /* lista_ident: IDENTIFICADOR  */
#line 153 "src/esp_sint.y"
                            { VarList_Id(yyvsp[0], &yyval); }
#line 1403 "src/esp_sint.tab.c"
    break;

  case 20: /* tipo: TIPO_PRIM  */
#line 157 "src/esp_sint.y"
                 { yyval.type = yyvsp[0].type; }
#line 1409 "src/esp_sint.tab.c"
    break;

  case 21: /* tipo: TIPO_LISTA TIPO_PRIM  */
#line 158 "src/esp_sint.y"
                            { yyval.type = getListType(yyvsp[0].type); }
#line 1415 "src/esp_sint.tab.c"
    break;

  case 22: /* $@5: %empty  */
#line 160 "src/esp_sint.y"
                                       { setType(yyvsp[-1]); decParam = 1; TS_AddFunction(yyvsp[0]); }
#line 1421 "src/esp_sint.tab.c"
    break;

  case 23: /* Cabecera_subprog: tipo IDENTIFICADOR $@5 PAR_IZQ lista_arg PAR_DER  */
#line 163 "src/esp_sint.y"
                          { decParam = 0; yyvsp[-2].nDim = 0; }
#line 1427 "src/esp_sint.tab.c"
    break;

  case 27: /* argumentos: tipo IDENTIFICADOR  */
#line 171 "src/esp_sint.y"
                                { setType(yyvsp[-1]); TS_AddParam(yyvsp[0]); }
#line 1433 "src/esp_sint.tab.c"
    break;

  case 28: /* argumentos: argumentos COMA tipo IDENTIFICADOR  */
#line 172 "src/esp_sint.y"
                                                { setType(yyvsp[-1]); TS_AddParam(yyvsp[0]); }
#line 1439 "src/esp_sint.tab.c"
    break;

  case 31: /* $@6: %empty  */
#line 181 "src/esp_sint.y"
                        {decVar = 2; }
#line 1445 "src/esp_sint.tab.c"
    break;

  case 33: /* $@7: %empty  */
#line 182 "src/esp_sint.y"
             { decVar = 2; }
#line 1451 "src/esp_sint.tab.c"
    break;

  case 47: /* sentencia_listas: LISTA_SENT_IZQ IDENTIFICADOR  */
#line 202 "src/esp_sint.y"
                                                 { Check_ListSentence(yyvsp[0]); }
#line 1457 "src/esp_sint.tab.c"
    break;

  case 48: /* sentencia_listas: IDENTIFICADOR LISTA_SENT_DER  */
#line 203 "src/esp_sint.y"
                                                { Check_ListSentence(yyvsp[-1]); }
#line 1463 "src/esp_sint.tab.c"
    break;

  case 49: /* expresion: OP_UN_NEG expresion  */
#line 208 "src/esp_sint.y"
                                { Check_OpUnaryNeg(yyvsp[-1], yyvsp[0], &yyval); }
#line 1469 "src/esp_sint.tab.c"
    break;

  case 50: /* expresion: OP_UN_SHARP expresion  */
#line 209 "src/esp_sint.y"
                                  { Check_OpUnaryCount(yyvsp[-1], yyvsp[0], &yyval); }
#line 1475 "src/esp_sint.tab.c"
    break;

  case 51: /* expresion: OP_UN_QUEST expresion  */
#line 210 "src/esp_sint.y"
                                  { Check_OpUnaryQuest(yyvsp[-1], yyvsp[0], &yyval); }
#line 1481 "src/esp_sint.tab.c"
    break;

  case 52: /* expresion: OP_MAS_MAS expresion  */
#line 211 "src/esp_sint.y"
                                 { Check_IncrementDecrement(yyvsp[-1], yyvsp[0], &yyval); }
#line 1487 "src/esp_sint.tab.c"
    break;

  case 53: /* expresion: OP_MENOS_MENOS expresion  */
#line 212 "src/esp_sint.y"
                                     { Check_IncrementDecrement(yyvsp[-1], yyvsp[0], &yyval); }
#line 1493 "src/esp_sint.tab.c"
    break;

  case 54: /* expresion: expresion OP_MAS_MENOS expresion  */
#line 213 "src/esp_sint.y"
                                             { Check_PlusMinusBinary(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1499 "src/esp_sint.tab.c"
    break;

  case 55: /* expresion: OP_MAS_MENOS expresion  */
#line 214 "src/esp_sint.y"
                                                    { Check_PlusMinus(yyvsp[-1], yyvsp[0], &yyval); }
#line 1505 "src/esp_sint.tab.c"
    break;

  case 56: /* expresion: expresion OP_BIN_MULTDIV expresion  */
#line 215 "src/esp_sint.y"
                                               { Check_OpBinaryMul(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1511 "src/esp_sint.tab.c"
    break;

  case 57: /* expresion: expresion OP_LOGICOS_AND expresion  */
#line 216 "src/esp_sint.y"
                                               { Check_OpBinaryAndOr(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1517 "src/esp_sint.tab.c"
    break;

  case 58: /* expresion: expresion OP_LOGICOS_OR expresion  */
#line 217 "src/esp_sint.y"
                                              { Check_OpBinaryAndOr(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1523 "src/esp_sint.tab.c"
    break;

  case 59: /* expresion: expresion OP_RELACION expresion  */
#line 218 "src/esp_sint.y"
                                            { Check_OpBinaryRel(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1529 "src/esp_sint.tab.c"
    break;

  case 60: /* expresion: expresion OP_IGUALDAD expresion  */
#line 219 "src/esp_sint.y"
                                            { Check_OpBinaryEq(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1535 "src/esp_sint.tab.c"
    break;

  case 61: /* expresion: expresion OP_BIN_TERN_PRIM expresion  */
#line 220 "src/esp_sint.y"
                                                 {Check_At(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1541 "src/esp_sint.tab.c"
    break;

  case 62: /* expresion: expresion OP_MENOS_MENOS expresion  */
#line 221 "src/esp_sint.y"
                                               { Check_MinusMinus(yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1547 "src/esp_sint.tab.c"
    break;

  case 63: /* expresion: expresion OP_BIN_TERN_PRIM expresion OP_MAS_MAS expresion  */
#line 222 "src/esp_sint.y"
                                                                      { Check_ListTernary(yyvsp[-4], yyvsp[-3], yyvsp[-2], yyvsp[-1], yyvsp[0], &yyval); }
#line 1553 "src/esp_sint.tab.c"
    break;

  case 64: /* expresion: IDENTIFICADOR  */
#line 223 "src/esp_sint.y"
                           { yyval.type = TS_GetType(yyvsp[0]); yyval.nDim = TS_GetNDim(yyvsp[0]); decVar= 0;}
#line 1559 "src/esp_sint.tab.c"
    break;

  case 65: /* expresion: constante  */
#line 224 "src/esp_sint.y"
                      { yyval.type = yyvsp[0].type; yyval.nDim = yyvsp[0].nDim;}
#line 1565 "src/esp_sint.tab.c"
    break;

  case 67: /* expresion: llamada_funcion  */
#line 226 "src/esp_sint.y"
                            { yyval.type = yyvsp[0].type; yyval.nDim = yyvsp[0].nDim; currentFunction = -1; }
#line 1571 "src/esp_sint.tab.c"
    break;

  case 68: /* expresion: PAR_IZQ expresion PAR_DER  */
#line 227 "src/esp_sint.y"
                                      { yyval.type = yyvsp[-1].type; yyval.nDim = yyvsp[-1].nDim; }
#line 1577 "src/esp_sint.tab.c"
    break;

  case 72: /* constante_base: CONST_INT  */
#line 234 "src/esp_sint.y"
                           { yyval.type = ENTERO; }
#line 1583 "src/esp_sint.tab.c"
    break;

  case 73: /* constante_base: CONST_FLOAT  */
#line 235 "src/esp_sint.y"
                             { yyval.type = REAL; }
#line 1589 "src/esp_sint.tab.c"
    break;

  case 74: /* constante_base: CONST_BOOL  */
#line 236 "src/esp_sint.y"
                            { yyval.type = BOOLEANO; }
#line 1595 "src/esp_sint.tab.c"
    break;

  case 75: /* constante_base: CONST_CHAR  */
#line 237 "src/esp_sint.y"
                            { yyval.type = CARACTER; }
#line 1601 "src/esp_sint.tab.c"
    break;

  case 76: /* constante_lista: CORCH_IZQ constante_lista_int CORCH_DER  */
#line 239 "src/esp_sint.y"
                                                          { yyval.type = LISTA_ENTERO; yyval.nDim = yyvsp[-1].nDim; }
#line 1607 "src/esp_sint.tab.c"
    break;

  case 77: /* constante_lista: CORCH_IZQ constante_lista_float CORCH_DER  */
#line 240 "src/esp_sint.y"
                                                            { yyval.type = LISTA_REAL; yyval.nDim = yyvsp[-1].nDim; }
#line 1613 "src/esp_sint.tab.c"
    break;

  case 78: /* constante_lista: CORCH_IZQ constante_lista_bool CORCH_DER  */
#line 241 "src/esp_sint.y"
                                                           { yyval.type = LISTA_BOOLEANO; yyval.nDim = yyvsp[-1].nDim; }
#line 1619 "src/esp_sint.tab.c"
    break;

  case 79: /* constante_lista: CORCH_IZQ constante_lista_char CORCH_DER  */
#line 242 "src/esp_sint.y"
                                                           { yyval.type = LISTA_CARACTER; yyval.nDim = yyvsp[-1].nDim; }
#line 1625 "src/esp_sint.tab.c"
    break;

  case 88: /* sentencia_asignacion: IDENTIFICADOR ASIGN expresion PYC  */
#line 255 "src/esp_sint.y"
                                                         { Check_Assign(yyvsp[-3], yyvsp[-1]); }
#line 1631 "src/esp_sint.tab.c"
    break;

  case 89: /* sentencia_if: ID_IF PAR_IZQ expresion PAR_DER Sentencia  */
#line 257 "src/esp_sint.y"
                                                         { Check_Boolean(yyvsp[-2]); }
#line 1637 "src/esp_sint.tab.c"
    break;

  case 90: /* sentencia_if: ID_IF PAR_IZQ expresion PAR_DER Sentencia ID_ELSE Sentencia  */
#line 258 "src/esp_sint.y"
                                                                           { Check_Boolean(yyvsp[-4]); }
#line 1643 "src/esp_sint.tab.c"
    break;

  case 91: /* sentencia_while: ID_WHILE PAR_IZQ expresion PAR_DER Sentencia  */
#line 260 "src/esp_sint.y"
                                                               { Check_Boolean(yyvsp[-2]); }
#line 1649 "src/esp_sint.tab.c"
    break;

  case 92: /* sentencia_repeat: ID_REPEAT Sentencia ID_UNTIL PAR_IZQ expresion PAR_DER PYC  */
#line 261 "src/esp_sint.y"
                                                                              { Check_Boolean(yyvsp[-2]); }
#line 1655 "src/esp_sint.tab.c"
    break;

  case 93: /* @8: %empty  */
#line 262 "src/esp_sint.y"
                                       { TS_CheckReturn(yyvsp[0], &yyval); }
#line 1661 "src/esp_sint.tab.c"
    break;

  case 95: /* lista_variables_entrada: lista_variables_entrada COMA IDENTIFICADOR  */
#line 265 "src/esp_sint.y"
                                                                     { VarList_Id(yyvsp[0], &yyval); }
#line 1667 "src/esp_sint.tab.c"
    break;

  case 96: /* lista_variables_entrada: IDENTIFICADOR  */
#line 267 "src/esp_sint.y"
                                { VarList_Id(yyvsp[0], &yyval); }
#line 1673 "src/esp_sint.tab.c"
    break;

  case 98: /* lista_expresiones_o_cadena: lista_expresiones_o_cadena COMA expresion  */
#line 273 "src/esp_sint.y"
                                                                       { nParams++; TS_CheckParam(yyvsp[-2]); }
#line 1679 "src/esp_sint.tab.c"
    break;

  case 99: /* lista_expresiones_o_cadena: lista_expresiones_o_cadena COMA CADENA  */
#line 274 "src/esp_sint.y"
                                                                    { nParams++; TS_CheckParam(yyvsp[-2]); }
#line 1685 "src/esp_sint.tab.c"
    break;

  case 100: /* lista_expresiones_o_cadena: expresion  */
#line 275 "src/esp_sint.y"
                                       { nParams=1; TS_CheckParam(yyvsp[0]); }
#line 1691 "src/esp_sint.tab.c"
    break;

  case 102: /* lista_expresiones_o_cadena: CADENA  */
#line 277 "src/esp_sint.y"
                                    { nParams=1; TS_CheckParam(yyvsp[0]); }
#line 1697 "src/esp_sint.tab.c"
    break;

  case 104: /* llamada_funcion: IDENTIFICADOR PAR_IZQ lista_expresiones PAR_DER  */
#line 284 "src/esp_sint.y"
                                                                  { Check_FunctionCall(yyvsp[-3]); TS_FunctionCall(&yyval); }
#line 1703 "src/esp_sint.tab.c"
    break;

  case 105: /* lista_expresiones: lista_expresiones COMA expresion  */
#line 287 "src/esp_sint.y"
                                                     { /*nParams++;*/ TS_CheckParam(yyvsp[-2]); }
#line 1709 "src/esp_sint.tab.c"
    break;

  case 106: /* lista_expresiones: expresion  */
#line 288 "src/esp_sint.y"
                              { /* WIP correct? -> */ checkParams = 0; TS_CheckParam(yyvsp[0]); }
#line 1715 "src/esp_sint.tab.c"
    break;


#line 1719 "src/esp_sint.tab.c"

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

#line 292 "src/esp_sint.y"

/** aqui incluimos el fichero generado por el 'lex '
*** que implementa la funcion 'yylex '
**/

#include "lex.yy.c"



void yyerror ( const char * msg )
{
     fprintf ( stderr ,"[ Error Sintactico. Linea %d]: %s\n", yylineno , msg ) ;
}
