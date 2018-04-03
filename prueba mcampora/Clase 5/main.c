#include <stdio.h>
#include <stdlib.h>
#define TAM 5 //busca y reemplaza por el valor dado a tam en el codigo.

int main()
{
    int vector [TAM];
    int i;
    int maximo;

  //  printf("DIR: %d\n\n", &vector[0]); // muestra la direccion de memoria.



    for(i=0; i<TAM; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }
     for(i=0; i<TAM; i++)

    {
        printf("%d\n", vector[i]);
    }
    {
        printf("Listado inverso\n", vector[i]);
    }
    for(i=TAM-1; i>=0; i--)
    {
        printf("%d\n", vector[i]);
    }
    for(i=0; i<TAM; i++)
    {
        if(vector[i]%2 == 0)
            printf("Ingrese un numero: ");
            scanf("%d", &vector[i]);
    }

    maximo = vector[0];

    for(i=1; i<TAM; i++)
    {
        if(vector[i]>maximo)
        {
            maximo = vector[i];
        }
    }
    printf("El maximo es: %d\n", maximo);

    for (i=0; i<TAM; i++)
    {
        if (vector[i] == maximo)
        {
            printf("%d\n", i+1);

        }
    }
return 0;
}


