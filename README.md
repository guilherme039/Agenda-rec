# Agenda-rec #include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Tamanho_Vetor_Pessoa 2 //definindo o tamanho ddo vetor

typedef struct Agenda//criando a lista e já definindo novo dado como agenda 
{
    char nome[50];
    int numero;
} Agenda; // criando a lista para entrada dos numeros e nomes

void menu(); //menu feito 
void cadastro();

int main(void) // programa principala ser trabalhado 
{
    int op = 1;

    while (op != 0)
    {
        menu();
        printf("\n\nEscolha uma opcao: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            cadastro();
            break;
        case 0:
            printf("Obrigado por utilizar nosso sistema!");
            break;

        default:
            printf("Opcao invalida!\n");
            break;
        }
    }

    return 0;
}



void menu() //menu meia boca 
{
    printf("*** Agenda **\n\n");
    printf(">>>>>>>>>>>MENU<<<<<<<<\n\n");
    printf("1 - Cadastro\n");
    printf("2 - Consulta\n");
    printf("3 - Excluir\n");
    printf("0 - Sair \n");
    printf(">>>>>>>>>>>>>><<<<<<<<<<<<\n");
}

void cadastro()//cadrando os nomes
{
    Agenda agenda[Tamanho_Vetor_Pessoa];

    for (int i = 0; i < Tamanho_Vetor_Pessoa; i++)
    {
        printf("Digite o nome: ");
        scanf("%s", agenda[i]. nome);

        printf("Digite o numero: ");
        scanf("%d", &agenda[i]. numero);
    }

}
