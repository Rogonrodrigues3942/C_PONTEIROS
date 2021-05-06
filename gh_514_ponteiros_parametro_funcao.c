/*DICA 514 - PÁGINA 283 BÍBLIA C/C++ - USANDO PONTEIROS COMO PARÂMETROS DE FUNÇÃO.*/

#include <stdio.h>
#include <stdlib.h>

void troca_valores(int *a, int *b)
{
    int temp;

    temp = *a;      //ARMAZENA TEMPORARIAMENTE O VALOR APONTADO PARA a
    *a = *b;        //ATRIBUI o VALOR DE *b A *A
    *b = temp;      //ATRIBUI O VALOR DE *a A *b
}

void main(void)
{
    int um = 1, dois =2;

    printf("\n\num contem %d, dois contem %d.\n\n", um, dois);

    troca_valores(&um, &dois);

    printf("um contem %d, dois contem %d.\n\n", um, dois);

    system("pause");
    return;
}