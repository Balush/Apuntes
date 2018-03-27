#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    /*int (%d)---float(%f)---char(%c)*/

    int numero1;
    float numero2;
    float suma;
    char letra;

   /* numero1 = 90;
    numero2 = 8;*/

//fflush(stdin) se utiliza para vaciar el buffer, mayormente para cuando va a leer caracteres osea letras.
//getch se utiliza para ingresar caracteres pero al ingresar la letra el ENTER es automatico.
// "&" para ubicar el espacio en memoria.

    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &numero2);
    printf("Ingrese una letra: ");
    fflush(stdin);
    letra = getchar();
    letra = toupper(getche); //toupper te enseña la letra ingresada en Mayuscula y tolower es para que te enseñe la letra ingresada en minuscula

    //scanf("%c", &letra);

    suma = numero1+numero2;

// \n se usa para darle un espacio enter entre textos (salto de linea). \t para tabular. \a para que suene un bip

    printf("E l resultado es: %.2f\n ", suma);

//%.2f el numero entre % y flotante representa la cantidad de decimales a mostrar.

    printf("El primer numero es: %d y el segundo numero es: %.2f\n", numero1, numero2);
    printf("La letra ingresada es: %c", letra);
    return 0;
}
