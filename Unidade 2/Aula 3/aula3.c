#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Escreva um algortimo que receba dois valores, x e z, e calcula e retorna X^z
    // (sem utilizar funcoes ou operadores de potencia).

    int x, z;
    long int res = 1;

    printf("Digite o valor de X (INTEIRO): ");
    scanf("%d", &x);

    printf("Digite o valor de Z (INTEIRO): ");
    scanf("%d", &z);

    for(int i = 0; i < z; i++){
        res *= x;
    }

    printf("%d elevado a %d é igual a: %ld", x, z, res);

    return 0;
}
