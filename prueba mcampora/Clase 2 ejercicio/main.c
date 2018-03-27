#include <stdio.h>
#include <stdlib.h>
//casteo una conversion numerica

int main()
{
    char seguir ='s';
    int numero;
    int contpares = 0;
    int contimpares = 0;
    int contnumeros = 0;
    int acumulador = 0;
    float promedio;
    int max = 0;
    int min = 9999;

        while(seguir =='s')
    {
        printf("Ingrese un numero: \n");
        scanf("%d", &numero);

        while (numero <=0)
        {
            printf("Vuela a ingresar un numero positivo: \n");
            scanf("%d", &numero);
        }
        if(numero%2==0)
        {
            contpares++;
        }
       contnumeros++;
       acumulador+=numero;

       if(numero>max)
       {
           max=numero;
       }
       if(numero<min)
       {
           min=numero;
       }

        printf("Desea continuar? \n");
        seguir = getche();
    }
        promedio=(float)acumulador/contnumeros;

    printf("Cantidad de numeros pares: %d \n", contpares);
    printf("El promedio es: %f \n", promedio);
    printf("La suma de los numeros es %d \n", acumulador);
    printf("El numero maximo es: %d \n", max);
    printf("El numero minimo es: %d \n", min);


    return 0;



















}







