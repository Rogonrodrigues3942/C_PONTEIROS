/*DICA 516 - INCREMENTANDO E DECREMENTANDO UM PONTEIRO - PÁGINA 284 - 06/05/2021.*/

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int valores[5] = {1, 2, 3, 4, 5};
    int contador;
    int *iptr;

    iptr = valores;

    for( contador = 0; contador < 5; contador++)
    {
        printf("%d ", *iptr);
        iptr++;
    }

    puts("");
    system("pause");
    return;
}