#include "funciones.h"
#include <stdio.h>
int pedirEntero(char texto [], int min, int max)
{
    int retorno;

    printf("%s", texto);
    scanf("%d", &retorno);
    retorno = validarEntero(retorno, min, max);

    while(retorno < min || retorno > max)
    {
        printf("Error !!\n %s", texto);
        scanf("%d", &retorno);
    }


    return retorno;
}

int validarEntero (int dato, int min, int max)
{
    while(dato < min || dato > max)
    {
        printf("Error Reingrese !!!");
        scanf("%d", &dato);
    }


}
