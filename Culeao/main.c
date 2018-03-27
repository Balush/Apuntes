#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int par = 0;
    int prom = 0;
    int promfin = 0;
    int cont = 0;
    int max = 0;
    int min = 9999;


    printf("Ingrese un numero positivo o cero para salir ");
    scanf("%d",&numero);

    while(numero<0)
    {
     printf("Recuerde el numero debe ser positivo ");
     scanf("%d",&numero);
    }

    while(numero!=0)
    {
        if (numero<min)
        {
            min=numero;
        }

        if (numero>max)
        {
            max=numero;
        }
        if (numero%2==0)
        {
            par++;
        }
        prom = prom+numero;
        cont++;
        promfin=prom/cont;
        printf("\n****** Se ingreso ******\n");
        printf("\nIngrese otro numero o cero para salir ");
        scanf("%d",&numero);
        while(numero<0)
        {
            printf("Recuerde el numero debe ser positivo ");
            scanf("%d",&numero);
        }

    }
    printf("\nEl promedio es %d los pares son %d",promfin,par);
    printf("\nEl minimo es %d el maximo son %d\n",min,max);


}
/*
int flag = 0;
if(flag ==0 || numero > max)
{
    max = numero;
}
if(flag == 0 || numero<min)
{
    min = numero;
    flag=1;
}
*/
}
