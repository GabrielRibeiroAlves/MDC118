#include<stdio.h>

int main(){

    int matriz[10];
    int i,x,y,maior,menor;
    for(i=0;i<10;i++){
        scanf("%d",&matriz[i]);
    }

    maior = matriz[0];

    for(x=0;x<10;x++){
        if(matriz[x]>maior){
            maior=matriz[x];
        }
    }
    menor = matriz[0];

    for(y=0;y<10;y++){
        if(matriz[y]<menor){
            menor=matriz[y];
        }
    }

    printf("%d maior %d menor",maior,menor);
    printf("\n");

    return 0;
}
