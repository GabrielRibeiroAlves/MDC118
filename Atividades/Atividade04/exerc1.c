//Escrever um programa em C que leia dois números inteiros e determine qual é o menor

#include<stdio.h>

int main(){
    int primeiro_numero;
    int segundo_numero;

    scanf("%d",&primeiro_numero);
    scanf("%d",&segundo_numero);

    if(primeiro_numero<segundo_numero){
        printf("primeiro numero menor\n");    
    }else{
        printf("segundo numero menor\n");
    }

    return 0;
}
