#include <stdio.h> //essa biblioteca é responsável pelas funções de entradas e saídas, como é o caso da função printf e scanf que vamos aprender mais à frente.
#include <locale.h> // usada pra alterar o local do programa, como o idioma, pra formatar os acentos corretamente.

int main() { //função principal do programa, onde a execução começa.
    setlocale(LC_ALL, "pt_BR.UTF-8"); //função que altera o local do programa, nesse caso, para português do Brasil com suporte a UTF-8.

    int x; //declaração de uma variável inteira chamada x.
    printf("Digite um número inteiro: "); //função que imprime uma mensagem na tela pedindo ao usuário para digitar um número inteiro.
    scanf("%d", &x); //função que lê a entrada do usuário e armazena o valor digitado na variável x. O & é usado para passar o endereço da variável.
    printf("Olá, Mundo! Seu número, ó: %d", x); //função que imprime uma mensagem na tela, incluindo o valor da variável x usando o especificador de formato %d para inteiros.

    // Declaração e inicialização de variáveis:
    int num;

    int num2 = 5;

    float num3;

    char caractere;

    num = 10;

    num3 = 2.5;

    caractere = 'a';

    return 0; //indica que o programa terminou com sucesso.
}