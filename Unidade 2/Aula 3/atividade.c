
#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int linhas, espacos, asteriscos;

    printf("Insira o tamanho do seu triângulo: ");
    scanf("%d", &linhas);

    for (int i = 1; i <= linhas; i++)
    {
        for (espacos = 1; espacos <= linhas - i; espacos++)
        {
            printf(" ");
        }

        for (asteriscos = 1; asteriscos <= 2 * i - 1; asteriscos++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}