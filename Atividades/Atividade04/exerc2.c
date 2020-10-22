//Escrever um programa em C que leia um ano e verifique se ele é bissexto 
//(é multiplo de 4 e não é multiplo de 100, ou é múltiplo de 400).

#include<stdio.h>

int main(){

    int ano;

    printf("Digite o ano\n");
    scanf("%d",&ano);

    if(ano%4==0){
        if(ano%100==0){
            if(ano%400==0){
                printf("ano bissexto\n");
            }else{
                printf("ano nao bissexto\n");
            }
        }else{
            printf("ano bissexto\n");
        }
    }


    return 0;
}
