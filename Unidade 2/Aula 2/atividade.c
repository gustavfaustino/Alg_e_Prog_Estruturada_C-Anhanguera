#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include <locale.h>

int main()
{

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int avalia, cont = 0, soma = 0;

    char letra;

    float media;

    do
    {

        printf("Digite uma nota para avaliação: \n");

        scanf("%d", &avalia);

        fflush(stdin); // limpa o buffer de entrada

        cont++;

        soma = soma + avalia;

        printf("Digite qualquer letra para continuar ou 's' para encerrar: \n");

    } while ((letra = getchar()) != 's');

    printf("\n \nQuantidade de avaliação = %d e soma das notas = %d. \n", cont, soma);

    media = soma / cont;

    system("PAUSE");

    return 0;
}