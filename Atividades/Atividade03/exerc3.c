//Escrever um programa em C que calcule o fatorial de um número inteiro.

#include<stdio.h>

int main(){

    int numero;
    int fatorial = 1;
    scanf("%d",&numero);

    for(numero;numero>=1;--numero){  
        fatorial = fatorial * numero;
    }
    
    printf("%d\n",fatorial);
    
    return 0;
}