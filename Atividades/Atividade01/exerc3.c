//Escrever um programa em C que converta um valor em Gigabytes em bytes (1Gb = 1024^3 bytes).

#include<stdio.h>

int main(){

    double numero_giga;
    
    printf("Qual o numero em Giga ?\n");
    scanf("%lf",&numero_giga);

    double num_convertido = numero_giga*0.125;

    printf("%lf\n",num_convertido);

    return 0;
}