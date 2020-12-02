#include <stdio.h>

int main(){
    
    struct contato_t{
        char nome[30];
        int telefone;
    };
    
    struct contato_t list_contatos[10];
    
    for(int i = 1; i < 11; i++ )
    {
        printf("Nome %d:\n", i);
        scanf("%[^\n]s", list_contatos[i].nome);
        getchar();
    }

    for(int i = 1; i < 11; i++ )
    {
        printf("Telefone %d:\n", i);
        scanf("%d", &list_contatos[i].telefone);
        getchar();
    }

    for(int i = 1; i < 11; i++ )
    {
        printf("%s - ", list_contatos[i].nome);
        printf("%d", list_contatos[i].telefone);
        printf("\n");
    }

    return 0;
    
}
