#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

struct dados_aluno
{
    char nome[250];
    char data_nascimento[250];
    float notas[2];
    float media;
};

void calcularMedia(struct dados_aluno *aluno, float soma)
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            soma += aluno[i].notas[j];
        }
        aluno[i].media = soma / 2;
        soma = 0;
    }

    for (i = 0; i < 5; i++)
    {
        printf("\n%d� Aluno\n", i + 1);
        printf("Nome: %s\n", aluno[i].nome);
        for (j = 0; j < 2; j++)
        {
            printf("%d� nota : %f\n", j + 1, aluno[i].notas[j]);
        }
        printf("M�dia: %f\n", aluno[i].media);
    }
}

int main()
{

    setlocale(LC_ALL, "portuguese");

    struct dados_aluno aluno[5];
    int i, j;
    float soma;

    for (i = 0; i < 5; i++)
    {
        printf("Informe o seu nome: ");
        gets(aluno[i].nome);

        fflush(stdin);

        printf("Informe a sua data de nascimento: ");
        gets(aluno[i].data_nascimento);

        for (j = 0; j < 2; j++)
        {
            printf("Informe a %d� nota: ", j + 1);
            scanf("%f", &aluno[i].notas[j]);
        }

        fflush(stdin);
    }

    calcularMedia(aluno, soma);

    return 0;
}
