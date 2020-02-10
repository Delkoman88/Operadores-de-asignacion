#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Reto 2: \n \n");

    int x;

    printf("Ingresa un numero entero: ");
    scanf("%i", &x);

    x %= 5;

    printf("\n Resultado del modulo del valor ingresado usando 5 y sumando 1 con operadores de asignacion: %i \n", ++x);


    return 0;
}
