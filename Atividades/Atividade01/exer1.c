/*Escrever um programa em C que calcule o perímetro 
de uma circunferência (p = 2 x pi x raio, considerendo pi = 3.1416).
*/

#include<stdio.h>


int main(){

    float perimetro_circ;
    float valor_raio;

    printf("Qual o valor do raio?\n");
    scanf("%f",&valor_raio);

    perimetro_circ = 2*3.1416*valor_raio;

    printf("%.2f\n",perimetro_circ);
    printf("\n");

    return 0;
}