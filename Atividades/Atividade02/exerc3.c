//Escrever um programa em C que associe um valor quantitativo a uma nota qualitativa conforme a tabela: 
//1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom e 5 = Ótimo

#include<stdio.h>

int main(){

    int valor;
    scanf("%d",&valor);
    
    switch (valor){
        case 1:
            printf("ruim\n");
            break;
        case 2:
            printf("Insuficiente\n");
            break;
        case 3:
            printf("Suficiente\n");
            break;
        case 4:
            printf("Bom\n");
            break;
        case 5:
            printf("Ótimo\n");
            break;
    }
    return 0;
}