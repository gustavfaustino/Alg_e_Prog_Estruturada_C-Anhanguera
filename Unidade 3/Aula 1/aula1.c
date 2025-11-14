#include <stdio.h>
#include <locale.h>

/*Ler e armazena 5 numeros em um vetor.
em seguida, imprime em ordem reversa os elementos do vetor*/

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i, num[5];

    for (i = 0; i < 5; i++)
    {
        printf("Digite a posição %d: ", i);
        scanf("%d", &num[i]);
    }

    for (i = 4; i >= 0; i--)
        printf("%d ", num[i]);
    
    printf("\n\n\n ");
    return 0;
}