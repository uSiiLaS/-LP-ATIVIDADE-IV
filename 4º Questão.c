#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

float saque(float saque)
{
    float resultado;

    resultado =

    return resultado;
}

float deposito()
{
}

struct contaBancaria
{
    char numeroConta[250];
    char nome[250];
    float saldo;
    char tipoConta[250];
};

int main()
{

    setlocale(LC_ALL, "portuguese");

    struct contaBancaria conta;
    int codigo;
    float saque;

    printf("Informe o número da conta: ");
    gets(conta.numeroConta);

    printf("Informe o seu nome: ");
    gets(conta.nome);

    printf("Informe o tipo de conta (POUPANÇA/CORRENTE): ");
    gets(conta.tipoConta);

    conta.saldo = 3000;

    system("cls || clear");

    printf("Número da conta: %s\n", conta.numeroConta);
    printf("Conta %s\n", conta.tipoConta);
    printf("Saldo: %.2f\n", conta.saldo);

    do
    {
        printf("\n\n1-Saque\n");
        printf("2-Deposito\n");
        printf("3-Imprimir saldo atual\n");
        printf("4-Sair\n\n");
        printf("Informe o código desejado: ");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 1:
            printf("Informe a quantidade que deseja sacar: ");
            scanf("%f", &saque);
            saque(saque);
            
            break;
        case 2:
            deposito(conta);
            break;
        case 3:
            break;
        }
    } while (codigo != 4);

    return 0;
}