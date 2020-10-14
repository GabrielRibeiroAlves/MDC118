//Escrever um programa em C que determine se um número é par ou impar

#include<stdio.h>

int main(){

    int numero;

    scanf("%d",&numero);

    if(numero%2==0){
        printf("numero par\n");
    }else{
        printf("numero impa\n");
    }

    return 0;
}