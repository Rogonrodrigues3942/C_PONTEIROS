#include <stdio.h>
#include <stdlib.h>

void somas(int n, int *n10, int *n20, int *n30);

int main (void)
{
    int n, n10, n20, n30;

    puts("Digite um valor: ");
    scanf("%d", &n);

    somas( n, &n10, &n20, &n30);

    printf("Valor de entrada: %d.\n\nSoma com 10: %d. \n\nSoma com 20: %d. \n\nSoma com 30: %d", n, n10, n20, n30);

    system ("pause  >> null");

    return 0;
}

void somas(int n, int *n10, int *n20, int *n30)
{
    *n10 = n + 10;
    *n20 = n + 20;
    *n30 = n + 30;

    return;
}