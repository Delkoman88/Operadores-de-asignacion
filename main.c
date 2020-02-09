#include <stdio.h>
#include <stdlib.h>
//Operadores de incremento y decremento
int main()
{
    printf("Operadores de incremento y decremento: \n \n");

    int value, res;

    value = 25;

    res = value++;

    printf("Resultado: %i \n", res);
    printf("Value: %i \n", value);

    value = 25;

    res = ++value;

    printf("Resultado: %i \n", res);
    printf("Value: %i \n", value);

    value = 25;

    res = value--;

    printf("Resultado: %i \n", res);
    printf("Value: %i \n", value);

    value = 25;

    res = --value;

    printf("Resultado: %i \n", res);
    printf("Value: %i \n", value);

    return 0;
}
