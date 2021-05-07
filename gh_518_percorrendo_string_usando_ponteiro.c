/*DICA 518 - PERCORRENDO UMA STRING USANDO PONTEIRO - PÁGINA 285*/

#include <stdlib.h>
#include <stdio.h>

void exibe_string(char *string)
{
    while(*string)
        putchar(*string++);
}


void main (void)
{
    exibe_string("Bibli do Programador C/C++");
}