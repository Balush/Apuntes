#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
//float sumar (int numero1, int numero2) <-----Prototipo

/*int sumar (int numeroUno, int numeroDos)
int leerNumero(void);
void mostrar (void);
void pedirNumero(void);
int pedirYLeerNumero(void);
char pedirOperador(void);

float Calcular(int primerNumero, char op, int segundoNumero);


{
    int resultado;
        resultado = numeroUno + numeroDos;

        return resultado;

}
    void pedirnumero(void)
{
    printf("ingrese numero\n");

}
int main()
{
    int numero1;
    int numero2;
    char op;
    float resultado;
    int ope;
    int numeroUno;

    pedirnumero();
    numeroUno=leerNumero();

    //printf("Ingrese un numero: ");
    //scanf("%d", &numero1);


    printf("Ingrese una operacion: ");
    op=getche();
    printf("\nIngrese un numero: ");
    scanf("%d", &numero2);

/*
    if(op=='*')
    {
        result=numero1*numero2;
    }
    if(op=='/')
    {
        result=numero1/numero2;
    }
    if(op=='+')
    {
        result=numero1+numero2;
    }
    if(op=='-')
    {
        result=numero1-numero2;
    }
*/

 /*   switch(op)
    {
        case'-':
        //int resta = numero1-numero2;
        ope = sumar (numero1, numero2);
        printf("El resultado es: %d",ope);
        break;

        case'+':
        //int suma = numero1+numero2;
        ope=numero1+numero2;
        printf("El resultado es: %d", ope);
        break;

        case'/':
        //int div = numero1/numero2;
        ope=numero1/numero2;
        printf("El resultado es: %d", ope);
        break;

        case'*':
        //int multi = numero1*numero2;
        ope=numero1*numero2;
        printf("El resultado es: %d", ope);
        break;


    }
   // printf("El resultado de la operacion es: %d \n",op);

    return 0;
}
*/
/** \brief
 * realiza la suma de dos numeros
 * \param numero1 el primer numero entero
 * \param
 * \return el resultado de la suma de los dos
 *
 */


char pedirOperador(void)
{
    printf("Ingrese un numero: ");
    operacion=getche();
    while(operacion !='*'&&operacion !='+' && operacion !='/')


    }
{
    printf("operacion no soportada, ingrese otra operacion.");
    operacion=getche();

}



