#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b, fact = 1;
    for (b = a; b > 1; b--)
    {
        fact = fact * b;
    }
    printf("El factorial de %d = %d\n", a, fact);

    return 0;
}


