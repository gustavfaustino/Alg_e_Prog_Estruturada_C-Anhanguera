// O objetivo aqui é escrever um programa que calcule a média de dois valores

#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float num1, num2, media;

    printf("Olá, aqui calcularemos a média de dois valores que você me fornecer.\n\nDigite o primeiro valor:");
    scanf("%f", &num1);

    printf("Digite o segundo valor:");
    scanf("%f", &num2);

    media = (num1 + num2)/2;

    printf("---------------------------------------------\nA média de %.2f e %.2f é: %.2f", num1, num2, media); // achei a formatação semelhante ao do java, ".2f", útil pra lembrar
}