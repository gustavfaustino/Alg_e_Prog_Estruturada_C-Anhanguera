/* Faça um programa que calcule a idade média de um grupo de pessoas.
A finalização da entrada deve ser dada por um 0.
Sem números negativos.*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int idade, soma = 0, contPessoas = 0;

    while (1) /* 1 === true */
    {
        printf("Por favor, digite a idade (ou 0 para encerrar): ");
        scanf("%d", &idade);

        if (idade == 0)
        {
            break;
        }

        if (idade < 0)
        {
            printf("\nIdade inválida! Por favor digite somente NÚMEROS INTEIROS.\n");
            continue;
        }

        if (idade > 1)
        {
            soma += idade;
            contPessoas++;
        }
    }

    printf("A soma das idades é: %d\n", soma);
    if (contPessoas > 0)
    {
        float media = (float) /*isso se chama CAST*/ soma / contPessoas;
        printf("A média de idade do grupo é: %.2f\n", media);
    }
    else
    {
        printf("Nenhuma idade válida foi inserida.\n");
    }

    return 0;
}