/*USANDO VALORES DE PONTEIRO - 513 - PÁGINA 513 - BÍBLIA C/C++*/

#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    int contador = 10;
    int *iptr;      //DECLARANDO VALOR DO PONTEIRO

    iptr = &contador;       //ATRIBUI O ENDEREÇO
    printf("\n\nEndereco em iptr %x Valor em *iptr %d\n\n", iptr, *iptr);

    *iptr = 25;     //ALTERADO O VALOR NA MEMÓRIA
    printf ("Valor de contador %d.\n\n", contador);

    system("pause");

    return;
}