//Escrever um programa em C que liste todos os múltiplos de 3, entre 1 e 100

#include<stdio.h>

int main(){

    for(int i=0; i<=100;i++){
        if(i%3==0){
            printf("%d ",i);
        }
    }


    return 0;
}