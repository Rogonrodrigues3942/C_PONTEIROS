/*Página 7 do PDF */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num = 20;
    int *Pont_num = &num;

    printf("O valor da varial num = %d.", num);
    printf("\nO valor contido no endereco da variavel num: %x. \n", &num);
    printf("O valor contido no ponteiro *Pont_num: %d. \n", *Pont_num);
    printf("O valor contido no endereço de memoria: %x. \n", &Pont_num);


    return 0;
}