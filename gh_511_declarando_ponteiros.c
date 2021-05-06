/*511 DECLARANDO VARIÁVEIS PONTEIRO - PÁGINA 282 - 05/05/2021*/

#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    int *iptr;  //DECLARANDO A VARIÁVEL PONTEIRO
    int conta = 1;

    iptr = &conta;

    printf("\n\nValor de iptr %x valor da conta %d endereco da conta %x\n", iptr, conta, &conta);

    system("pause");

    return;
}