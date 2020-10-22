//Escrever um programa em C que leia uma tecla e determine 
//se ela é uma letra, um dígito ou um caractere especial

#include<stdio.h>

int main(){
    char tecla;

    printf("Digite uma tecla\n");
    scanf("%c",&tecla);
    
    if(tecla >='0' && tecla <='9'){
        printf("Digito\n");
    }else{
        if(tecla >='a' && tecla <='z'||tecla >='A' && tecla<= 'Z'){
           printf("Letra\n");
        }else{
            printf("caractere especial\n");
        }

    }
        
    return 0;
}
