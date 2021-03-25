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


int main()
{
    int i, codigo;
    Pessoa contato[Tamanho_da_agenda];

    // Inserir
    printf("Insercao dos contatos: \n\n");
    for (i = 0; i < Tamanho_da_agenda; i++)
    {
        printf("Contato %d:\n", i + 1);
        printf("Digite o codigo: ");
        scanf("%i", &contato[i].code);
        printf("Digite o nome: ");
        scanf("%s", contato[i].nome);
        printf("Digite a data: ");
        scanf("%s", contato[i].data);
        printf("Digite o fone: ");
        scanf("%s", contato[i].fone);
        printf("Digite o email: ");
        scanf("%s", contato[i].email);
        printf("Digite a observacao: ");
        scanf("%s", contato[i].observacao);
        printf("\n\n");
    }

    //listar
    printf("Lista dos contatos inseridos: \n\n");
    for (i = 0; i < Tamanho_da_agenda; i++)
    {
        printf("codigo: %d\n", contato[i].code);
        printf("nome: %s\n", contato[i].nome);
        printf("data: %s\n", contato[i].data);
        printf("fone: %s\n", contato[i].fone);
        printf("email: %s\n", contato[i].email);
        printf("obs: %s\n\n", contato[i].observacao);
    }


    //Buscar pelo codigo

    printf("\nDigite o codigo do contato a ser buscado:");
    scanf("%i", &codigo);

    for (i = 0; i < Tamanho_da_agenda; i++)
    {
        if (contato[i].code == codigo)
        {
            printf("\nContato encontrado: \n");
            printf("codigo: %d\n", contato[i].code);
            printf("nome: %s\n", contato[i].nome);
            printf("data: %s\n", contato[i].data);
            printf("fone: %s\n", contato[i].fone);
            printf("email: %s\n", contato[i].email);
            printf("obs: %s\n\n", contato[i].observacao);
            break;
        }
    }

    if (i == Tamanho_da_agenda)
    {
        printf("O contato nao foi encontrado.\n");
    }
    else
    {
        printf("Fim do programa.\n");
    }

}