//Escrever um programa em C que calcula o desconto sobre um valor com base na escala: 
//até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%

#include<stdio.h>

int main(){

    float valor,resultado;

    printf("Digite o valor\n");
    scanf("%f",&valor);
    
    float um_porcento = 0.99;
    float cinco_porcento = 0.95;
    float dez_porcento = 0.9;


    if(valor<=100.00){
        resultado= valor * um_porcento;
    }else{
        if(valor>=100.01 && valor<=500.00){
            resultado= valor * cinco_porcento;
        }else{
            if(valor>500.00){
                resultado=valor * dez_porcento;
            }
        }
    }

    printf("%.2f",resultado);
    printf("\n");

    return 0;
}

