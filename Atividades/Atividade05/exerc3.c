#include <stdio.h>

int main(){
    
    char caracteres[80];
    int i;
    printf("Digite os caracteres:\n");
    
    for(i=0;i<=80;i++){
        scanf("%c",&caracteres[i]);
        
    }
    for(i;i>=0;i--){
        printf("%c",caracteres[i]);
    }
    return 0;
}
