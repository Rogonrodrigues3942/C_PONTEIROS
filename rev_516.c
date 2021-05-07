/*DICA 516 - INCREMENTANDO E DECREMENTANDO UM PONTEIRO - PÁGINA 284 - 06/05/2021.*/

#include <stdlib.h>
#include <stdio.h>

void main(void)
{
    int *iptr;
    int matriz[5] = { 1, 2, 3, 4, 5};
    int i;

    iptr = matriz;

    for(i = 0; i < 5; i++)
        printf("%d\n", *iptr++);


    system("pause");
    return;
}