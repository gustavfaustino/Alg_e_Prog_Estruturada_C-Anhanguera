// calcule a média da quantidade de produtos vendidos anualmente por uma empresa de varejo com base nos dados apresentados na Tabela 1. Qual é a média de produtos vendidos em 2020, 2021 e 2022 ? É possível identificar qual ano teve a média mais alta ? Há alguma outra abordagem para comparar os dados ? Certifique - se de apresentar o programa resultante para toda a equipe.

// Tabela:
// Tipo        Produtos Vendidos e Ano
//             2020    2021    2022
// tv         800    950    750
// notebook   650   550     750
// smartphone  1500  1800   2100

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8"); // função que altera o local do programa, nesse caso, para português do Brasil com suporte a UTF-8.

    const int tv_2020 = 800, tv_2021 = 950, tv_2022 = 750;
    const int notebook_2020 = 650, notebook_2021 = 550, notebook_2022 = 750;
    const int smartphone_2020 = 1500, smartphone_2021 = 1800, smartphone_2022 = 2100;

    float media_2020, media_2021, media_2022;

    char maior_media_ano[5] = "";

    // Problematicas: Calcular média dos produtos nos anos; Qual ano teve a média mais alta.

    media_2020 = (tv_2020 + notebook_2020 + smartphone_2020) / 3.0;
    media_2021 = (tv_2021 + notebook_2021 + smartphone_2021) / 3.0;
    media_2022 = (tv_2022 + notebook_2022 + smartphone_2022) / 3.0;
    

    if (media_2020 > media_2021 && media_2020 > media_2022)
    {
        sprintf(maior_media_ano, "2020");
    }
    else if (media_2021 > media_2020 && media_2021 > media_2022)
    {
        sprintf(maior_media_ano, "2021");
    }
    else
    {
        sprintf(maior_media_ano, "2022");
        // sprintf stands for “String print”. Instead of printing on console, it store output on char buffer which are specified in sprintf.
    }

    printf("Média de produtos vendidos em 2020: %.2f\n", media_2020);
    printf("Média de produtos vendidos em 2021: %.2f\n", media_2021);
    printf("Média de produtos vendidos em 2022: %.2f\n", media_2022);
    printf("---------------------------\n");
    printf("O ano que teve a maior média foi: %s\n", maior_media_ano);
    return 0;
}