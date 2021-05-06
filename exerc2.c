/*Escreva um programa, contendo uma função, e que dado o raio (r) de uma circunferência, 
devolva seu perímetro (2⋅π⋅r), seu diâmetro (2⋅r ) e sua área ( π⋅r⋅2 ).*/

#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
void circuferencia (float raio, float *perimetro, float *diametro, float *area);

int main(void)
{
    float raio, perimetro, diametro, area;

    puts("\n\tCalculo de Medidas de um Circunferencia\n");

    puts("Digite o valor do raio: ");
    fflush(stdin);
    scanf("%f", &raio);

    circuferencia(raio, &perimetro, &diametro, &area);

    printf("Um circuferencia de raio: %6.4f tem as seguintes medidas:\n", raio);
    printf("Perimetro de: %7.4f;\n", perimetro);
    printf("Diametro de: %7.4f;\n", diametro);
    printf("Area de: %7.4f;\n", area);
    
    puts("");
    return 0;
}

void circuferencia (float raio, float *perimetro, float *diametro, float *area)
{
    *perimetro = 2 * PI * raio;
    *diametro = 2 * raio;
    *area = PI * raio * raio;
    return;
}