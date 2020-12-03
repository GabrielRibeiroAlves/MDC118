#include <stdio.h>

int main(){
    
    enum meses{ janeiro=1,
                feveiro=2,
                marco=3,
                abril=4,
                maio=5,
                junho=6,
                julho=7,
                agosto=8,
                setembro=9,
                outubro=10,
                novembro=11,
                dezembro=12};
    int mes;

    printf("Qual e o mes:\n");
    scanf("%d", &mes);

    if(mes == janeiro){
        printf("janeiro");
    }else if(mes == feveiro){
        printf("feveiro");
    }else if(mes == marco){
        printf("marco");
    }else if(mes == abril){
        printf("abril");
    }else if(mes == maio){
        printf("maio");
    }else if(mes == junho){
        printf("junho");
    }else if(mes == julho){
        printf("julho");
    }else if(mes == agosto){
        printf("agosto");
    }else if(mes == setembro){
        printf("setembro");
    }else if(mes == outubro){
        printf("outubro");
    }else if(mes == novembro){
        printf("novembro");
    }else if(mes == dezembro){
        printf("dezembro");
    }else{
        printf("mes nao confere\n");
    }
    return 0; 
}
