#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

struct informacao_contato
{
    char nome[250];
    char telefone[250];
    char email[250];
};

void procurarContato(struct informacao_contato *contatos, char contato[])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        if (strcmp(contatos[i].nome, contato) == 0)
        {
            printf("Nome: %s\n", contatos[i].nome);
            printf("Telefone: %s\n", contatos[i].telefone);
            return;
        }
    }

    printf("\nContato nao identificado!\n");
}
int main()
{

    setlocale(LC_ALL, "portuguese");

    struct informacao_contato contatos[3];
    char contato[250];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Digite informações do %dº contato\n", i + 1);
        printf("Nome: ");
        gets(contatos[i].nome);

        printf("Telefone: ");
        gets(contatos[i].telefone);

        printf("E-mail: ");
        gets(contatos[i].email);

        fflush(stdin);

        printf("\n");
    }

    system("cls || clear");

    printf("Informe o nome que deseja procurar: ");
    gets(contato);

    procurarContato(contatos, contato);

    return 0;
}