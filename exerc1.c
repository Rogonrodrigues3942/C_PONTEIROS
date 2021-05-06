/*Escreva um programa contendo uma função que receba 
como parâmetro uma distância em metros e devolva, também através de seus parâmetros, 
essa distância em polegadas, jardas e milhas.
metro = 1  - polegadas+ 39,37 - jardas = 1,0936 - milhas 0,00062*/

#include <stdio.h>
#include <stdlib.h>

void conversao (float metro, float *polegada, float *jarda, float * milha);

int main (void){

    float metro, polegada, jarda, milha;

    puts("\n\tConversor de distancia\n");
    printf("Digite em metros a distancia para conversao: ");
    fflush(stdin);
    scanf("%f", &metro);

    conversao(metro, &polegada, &jarda, &milha);

    printf("A distancia em %6.4f metro(s) equivale a : ", metro);
    printf("\n%6.4f polegada(s);", polegada);
    printf("\n%6.4f jarda(s);", jarda);
    printf("\n%6.4f milhas(s);", milha);
    puts("");

    return 0;
}

void conversao (float metro, float *polegada, float *jarda, float * milha)
{
    *polegada = metro * 39.3701;
    *jarda = metro * 1.0936;
    *milha = metro * 0.00062;

    return;
}
