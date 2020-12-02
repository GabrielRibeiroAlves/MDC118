#include <stdio.h>

struct data_t{
    int dia,mes,ano;
};


int main()
{
    struct data_t calendario;

    printf("Dia:\n");
    scanf("%d", &calendario.dia);

    printf("Mes:\n");
    scanf("%d", &calendario.mes);

    printf("Ano:\n");
    scanf("%d", &calendario.ano);

    printf("Formato BR: ");
    printf("%d/ %d/ %d ", calendario.dia,calendario.mes,calendario.ano);
    printf("\n");

    printf("Formato USA: ");
    printf("%d/ %d/ %d ", calendario.mes,calendario.dia,calendario.ano);
    printf("\n");

    return 0;

}
