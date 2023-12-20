#include <stdio.h>
#include <stdlib.h>
#include "semantica.h"

extern FILE *yyin;
extern int yylineno;

int yyparse (void);

/** se debe implementar la funcion yyerror . En este caso
*** simplemente escribimos el mensaje de error en pantalla
**/


/* ********************************************************************** */

FILE *abrir_entrada(int argc, char *argv[])
{
    FILE *f = NULL;
    if (argc > 1)
    {
        f = fopen(argv[1], "r");
        if (f == NULL)
        {
            fprintf(stderr, " Error : Archivo ' %s' no encontrado \n", argv[1]);
            exit(1);
        }
        else
            printf("\nLeyendo fichero ' %s '\n", argv[1]);
    }
    else
        printf("\nLeyendo entrada standard .\n");
    return (f);
}
/* ********************************************************************** */
int main(int argc, char *argv[])
{
    yyin = abrir_entrada(argc, argv);
    return yyparse();
}