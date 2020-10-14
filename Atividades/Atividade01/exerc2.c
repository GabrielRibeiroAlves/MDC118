/*Escrever um programa em C que converta um número x 
de segundos em horas, minutos e segundos.
*/

#include<stdio.h>

int main(){

    int num_covertido;
    int valor_segundos;

    printf("Qual o valor em segundos ?\n");
    scanf("%d",&valor_segundos);

    int valor_em_hora = valor_segundos/3600;
    int valor_em_minuto = valor_em_hora*60;
    int valor_em_segundos = valor_em_minuto*60;
    
    printf("Em hora:\n""%d\n",valor_em_hora);
    printf("Em minuto:\n""%d\n",valor_em_minuto);
    printf("Em segundos:\n""%d\n",valor_em_segundos);
    printf("\n");

    return 0;
}