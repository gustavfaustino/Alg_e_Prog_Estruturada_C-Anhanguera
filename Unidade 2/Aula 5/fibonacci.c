#include <stdio.h>
#include <locale.h>
int main(void)
{

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;

    int primeiro = 0, segundo = 1, proximo;

    printf("Digite o número de termos da sequência de Fibonacci que você deseja calcular: ");

    scanf("%d", &n);

    printf("Sequência de Fibonacci até o termo %d:\n", n);

    for (int i = 0; i < n; i++)
    {

        if (i <= 1)
        {

            proximo = i;
        }
        else
        {

            proximo = primeiro + segundo;

            primeiro = segundo;

            segundo = proximo;
        }

        printf("%d ", proximo);
    }

    return 0;
}