%{

#include <stdlib.h>
#include <string.h>

int lineno = 1; // initialize to 1
void yyerror();
%}



%option yylineno
%option noyywrap




%%


"principal"         { return CABECERA_PROGRAMA; }

"("                 { return PAR_IZQ; }
")"                 { return PAR_DER; }
"["                 { return CORCH_IZQ; }
"]"                 { return CORCH_DER; }
"{"                 { return LLAVE_IZQ; }
"}"                 { return LLAVE_DER; }
","                 { return COMA; }
";"                 { return PYC; }
"="                 { return ASIGN; }


"var"               { return IVAR; }
"finvar"            { return FVAR; }


"si"                { return ID_IF; }
"sino"              { return ID_ELSE; }
"mientras"          { return ID_WHILE; }
"repite"            { return ID_REPEAT; }
"hasta"             { return ID_UNTIL; }
"devuelve"          { return ID_RETURN; }
"cin >>>"           { return NOMB_ENTRADA; }
"cout <<<"          { return NOMB_SALIDA; }


">>"                { /*yylval.lex = strdup(yytext);*/ yylval.attr = 0; return LISTA_SENT_DER; }
"<<"                { /*yylval.lex = strdup(yytext);*/ yylval.attr = 1; return LISTA_SENT_DER; }
"$"                 { /*yylval.lex = strdup(yytext); yylval.attr = 2;*/ return LISTA_SENT_IZQ; }

"++"                { /*yylval.lex = strdup(yytext);*/ return OP_MAS_MAS; }
"--"                { yylval.attr = 0; return OP_MENOS_MENOS; }

"@"                 { /*yylval.lex = strdup(yytext);*/ return OP_BIN_TERN_PRIM; }
"~"                 { /*yylval.lex = strdup(yytext);*/ return OP_TER_LIST; } /*Operador para resolver conclicto*/

"%"                 { /*yylval.lex = strdup(yytext);*/ yylval.attr = 0; return OP_BIN_MULTDIV; }
"*"                 { /*yylval.lex = strdup(yytext);*/ yylval.attr = 1; return OP_BIN_MULTDIV; }
"/"                 { /*yylval.lex = strdup(yytext);*/ yylval.attr = 2; return OP_BIN_MULTDIV; }
"**"                { /*yylval.lex = strdup(yytext);*/ yylval.attr = 3; return OP_BIN_MULTDIV; }

"=="                { /*yylval.lex = strdup(yytext);*/ yylval.attr = 0; return OP_IGUALDAD; }
"!="                { /*yylval.lex = strdup(yytext);*/ yylval.attr = 1; return OP_IGUALDAD; }

"<"                 { /*yylval.lex = strdup(yytext);*/ yylval.attr = 0; return OP_RELACION; }
">"                 { /*yylval.lex = strdup(yytext);*/ yylval.attr = 1; return OP_RELACION; }
"<="                { /*yylval.lex = strdup(yytext);*/ yylval.attr = 2; return OP_RELACION; }
">="                { /*yylval.lex = strdup(yytext);*/ yylval.attr = 3; return OP_RELACION; }

"&&"                { /*yylval.lex = strdup(yytext);*/ return OP_LOGICOS_AND; }
"||"                { /*yylval.lex = strdup(yytext);*/ return OP_LOGICOS_OR; }/*

"^"                 { *//*yylval.lex = strdup(yytext);*/ /*yylval.attr = 0; return OP_BINARIO; } -------------------*/

"!"                 { /*yylval.lex = strdup(yytext);*/ yylval.attr = 2; return OP_UN_NEG; }/*

"—"                 { *//*yylval.lex = strdup(yytext);*/ /*yylval.attr = 1; return OP_UNARIO; } -------------------------*/

"?"                 { /*yylval.lex = strdup(yytext);*/ yylval.attr = 0; return OP_UN_QUEST; }
"#"                 { /*yylval.lex = strdup(yytext);*/ yylval.attr = 1; return OP_UN_SHARP; } /*//CAMBIOS "#"                 { return OP_UNARIO; }*/

"+"                 { /*yylval.lex = strdup(yytext);*/ yylval.attr = 0; return OP_MAS_MENOS; }
"-"                 { /*yylval.lex = strdup(yytext);*/ yylval.attr = 1; return OP_MAS_MENOS; }


"entero"            {yylval.type = ENTERO; return TIPO_PRIM; }    //{ yylval.lex = strdup(yytext); yylval.type = 0; return TIPO_PRIM; }
"real"              {yylval.type = REAL; return TIPO_PRIM; }    //{ yylval.lex = strdup(yytext); yylval.attr = 1; return TIPO_PRIM; }
"booleano"          {yylval.type = BOOLEANO; return TIPO_PRIM; }    //{ yylval.lex = strdup(yytext); yylval.attr = 2; return TIPO_PRIM; }
"caracter"          {yylval.type = CARACTER; return TIPO_PRIM; }    //{ yylval.lex = strdup(yytext); yylval.attr = 3; return TIPO_PRIM; }
"lista de"          {return TIPO_LISTA; }    //{ yylval.lex = strdup(yytext); return TIPO_LISTA; }

\"[^\"]*\"          {yylval.lex = strdup(yytext); return CADENA; }
([0-9]+)            {yylval.lex = strdup(yytext); return CONST_INT; }
([0-9]*\.[0-9]*)    {yylval.lex = strdup(yytext); return CONST_FLOAT; }
"verdadero"         {yylval.lex = strdup(yytext); yylval.attr = 0;  return CONST_BOOL; }
"falso"             {yylval.lex = strdup(yytext); yylval.attr = 1;  return CONST_BOOL; }
\'[^\']\'           {yylval.lex = strdup(yytext); return CONST_CHAR; }


[ \t]                               {;}
\n                                  {++line;}
[\n\r]                              {;}

[a-zA-Z]([a-zA-Z0-9_])* {yylval.lex = strdup(yytext); return IDENTIFICADOR; }
.                       { printf("Error en la línea %d. Lexema '%s' no reconocible.\n", yylineno, yytext); }
%%
