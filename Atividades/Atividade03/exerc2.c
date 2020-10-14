//Escrever um programa em C que liste os 10 primeiros números 
//da série de Fibonacci (o próximo é a soma dos dois anteriores).

#include<stdio.h>

int main(){
    int i = 0;
    int x=-1;
    int y=1;

    while(i<10){
        int z = x+y;
        x=y;
        y=z;
        i++;
        printf("%d ",z); 
    }   

    
    return 0;
}