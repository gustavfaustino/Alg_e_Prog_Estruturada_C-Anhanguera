#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int x;
    printf("Digite um número inteiro: ");
    scanf("%d", &x);
    printf("Olá, Mundo! Seu número, ó: %d", x);
    return 0;
}