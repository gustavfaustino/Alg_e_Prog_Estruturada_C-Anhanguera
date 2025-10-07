// Você está trabalhando em uma empresa que está desenvolvendo um software para uma loja de eletrodomésticos. Nesse sistema, temos a necessidade de calcular o preço final de um produto com base no preço de venda e na incidência de taxas fixas de impostos e descontos aplicáveis. Por exemplo, suponha que o preço de venda de um televisor seja de R$ 1500.00. Vamos considerar que a taxa de imposto aplicável seja de 10%, e que haja um desconto padrão de 5% para esse produto em particular.

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "pt_BR.UTF-8"); // função que altera o local do programa, nesse caso, para português do Brasil com suporte a UTF-8.

    // Definindo variaveis e constantes
    // preço_produto, preço_final, taxa_fixa, desconto.
    char produto_numero;
    float preco_produto, preco_final, valor_imposto, valor_desconto;
    const float taxa_imposto = 0.10;
    const float desconto = 0.05;

    // Array de produtos
    const char *produtos[] = {
        // *produtos[] é um array de ponteiros para char, ou seja, um array de strings. Ele tem '*' antes do nome para indicar que é um array de ponteiros.

        // Ponteiros para char são usados para armazenar strings em C, pois uma string é basicamente uma sequência de caracteres terminada por um caractere nulo ('\0').
        // Cada elemento do array produtos[] é um ponteiro que aponta para o primeiro caractere de uma string. Sendo assim, podemos armazenar várias strings (nomes de produtos) em um único array.
        "Televisor",
        "Geladeira",
        "Micro-ondas",
        "Máquina de Lavar",
        "Liquidificador"};
    int i;

    printf("Olá, seja bem-vindo(a)!\n");
    printf("Escolha um dos produtos abaixo digitando o número correspondente:\n");
    printf("---------------------------\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d - %s\n", i + 1, produtos[i]);
        // %s é o especificador de formato usado para imprimir strings em C. Ele indica que o argumento correspondente deve ser tratado como uma sequência de caracteres (string) e será substituído pelo valor da string durante a impressão.
    }
    printf("---------------------------\n");
    printf("Digite o número do produto: ");
    scanf("%hhd", &produto_numero);
    // %hhd é usado para ler um valor do tipo char (8 bits) como um número decimal com sinal. O 'hh' indica que o argumento é um ponteiro para um char, e o 'd' indica que o valor deve ser interpretado como um inteiro decimal com sinal.

    // Verifica o produto
    if (produto_numero < 1 || produto_numero > 5)
    {
        printf("Número de produto inválido. Por favor, execute o programa novamente e escolha um número entre 1 e 5.\n");
        return 1; // Sai do programa com código de erro
    }
    else
    {
        printf("Agora, digite o valor do produto:");
        scanf("%f", &preco_produto);
        printf("---------------------------\n");

        // Verifica se é o produto 1 (TV) para aplicar o desconto
        if (produto_numero == 1)
        {
            // faz o caluclo
            // preco do imposto = 1500x0.10 (precoporduto x taxa)
            // desconto = se tv > precoproduto x desconto
            // preco final = preco+oimposto-desconto
            // (1500+(1500x0.10))-(1500-0.05)
            valor_imposto = preco_produto * taxa_imposto;
            valor_desconto = preco_produto * desconto;

            preco_final = preco_produto + valor_imposto - valor_desconto;
            printf("O preço da %s é R$ %.2f com desconto de R$ %.2f\n", produtos[produto_numero - 1], preco_final, valor_desconto);
        }
        else
        {
            valor_imposto = preco_produto * taxa_imposto;

            preco_final = preco_produto + valor_imposto - valor_desconto;
            printf("O preço da %s é R$ %.2f\n", produtos[produto_numero - 1], preco_final);
        }
    }
    printf("Obrigado por comprar conosco!\n");
    return 0;
}