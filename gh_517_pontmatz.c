/*DICA 517 - PÁGINAS 284 E 285 - COMBINANDO UMA REFERÊNCIA E INCREMENTO DE PONTEIRO*/

#include <stdio.h>
#include <stdlib.h>

void main (void){

    int valores[5] = { 1, 2, 3, 4, 5};
    int *iptr;
    int i;

    iptr = valores;

    for(i = 0; i < 5; i++)
        printf("%d\n", *iptr++);

    system("pause");
    return;
}