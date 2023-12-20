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

#ifndef YY_YY_SRC_ESP_SINT_TAB_H_INCLUDED
# define YY_YY_SRC_ESP_SINT_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    CABECERA_PROGRAMA = 258,       /* CABECERA_PROGRAMA  */
    TIPO_PRIM = 259,               /* TIPO_PRIM  */
    TIPO_LISTA = 260,              /* TIPO_LISTA  */
    ID_IF = 261,                   /* ID_IF  */
    ID_ELSE = 262,                 /* ID_ELSE  */
    ID_WHILE = 263,                /* ID_WHILE  */
    ID_REPEAT = 264,               /* ID_REPEAT  */
    ID_UNTIL = 265,                /* ID_UNTIL  */
    ID_RETURN = 266,               /* ID_RETURN  */
    NOMB_ENTRADA = 267,            /* NOMB_ENTRADA  */
    NOMB_SALIDA = 268,             /* NOMB_SALIDA  */
    LISTA_SENT = 269,              /* LISTA_SENT  */
    EXPR_LISTA_IZQ = 270,          /* EXPR_LISTA_IZQ  */
    EXPR_LISTA_DER = 271,          /* EXPR_LISTA_DER  */
    OP_UN_DELANTE = 272,           /* OP_UN_DELANTE  */
    OP_BIN_TERN_PRIM = 273,        /* OP_BIN_TERN_PRIM  */
    OP_BIN_TERN_SEG = 274,         /* OP_BIN_TERN_SEG  */
    OP_BINARIO = 275,              /* OP_BINARIO  */
    OP_UNARIO = 276,               /* OP_UNARIO  */
    OP_UN_BIN = 277,               /* OP_UN_BIN  */
    IDENTIFICADOR = 278,           /* IDENTIFICADOR  */
    CADENA = 279,                  /* CADENA  */
    PAR_IZQ = 280,                 /* PAR_IZQ  */
    PAR_DER = 281,                 /* PAR_DER  */
    CORCH_IZQ = 282,               /* CORCH_IZQ  */
    CORCH_DER = 283,               /* CORCH_DER  */
    LLAVE_IZQ = 284,               /* LLAVE_IZQ  */
    LLAVE_DER = 285,               /* LLAVE_DER  */
    COMA = 286,                    /* COMA  */
    PYC = 287,                     /* PYC  */
    ASIGN = 288,                   /* ASIGN  */
    IVAR = 289,                    /* IVAR  */
    FVAR = 290,                    /* FVAR  */
    OP_MULTDIV = 291,              /* OP_MULTDIV  */
    OP_RELACION = 292,             /* OP_RELACION  */
    OP_IGUALDAD = 293,             /* OP_IGUALDAD  */
    OP_LOGICOS_OR = 294,           /* OP_LOGICOS_OR  */
    OP_LOGICOS_AND = 295,          /* OP_LOGICOS_AND  */
    OP_BINARIO_LISTAS = 296,       /* OP_BINARIO_LISTAS  */
    OP_TER_LIST = 297,             /* OP_TER_LIST  */
    CONST_INT = 298,               /* CONST_INT  */
    CONST_FLOAT = 299,             /* CONST_FLOAT  */
    CONST_BOOL = 300,              /* CONST_BOOL  */
    CONST_CHAR = 301               /* CONST_CHAR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SRC_ESP_SINT_TAB_H_INCLUDED  */
