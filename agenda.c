#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

#define Tamanho_da_agenda 2 

typedef struct Pessoa {
    int code;
    char nome[50];
    char data[8];
    char fone[19];
    char email[50];
    char observacao[100];
} Pessoa;


main()
{
    int i;
    Pessoa contato[Tamanho_da_agenda];

    for (i = 0; i < Tamanho_da_agenda; i++)
    {
        scanf("%i", &contato[i].code);

        scanf("%s", contato[i].nome);

        scanf("%s", contato[i].data);

        scanf("%s", contato[i].fone);

        scanf("%s", contato[i].email);

        scanf("%s", contato[i].observacao);
    }

    //listar

    for (i = 0; i < Tamanho_da_agenda; i++)
    {
        printf("%i", &contato[i].code);

        printf("%s", contato[i].nome);

        printf("%s", contato[i].data);

        printf("%s", contato[i].fone);

        printf("%s", contato[i].email);

        printf("%s", contato[i].observacao);
    }

}