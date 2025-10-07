#include <stdio.h>

// Interessante definir constantes depois das libs e antes da main
#define varconst 100

int main() {
    const varconst2 = 200;
    int x;
    scanf("%d", &x);
    printf("Hello, World! x = %d", &x);
    
    // Fazer da maneira abaixo me dá um erro, "O operador & (address-of) exige um lvalue — algo com endereço (uma variável). Um literal numérico como 100 não é um lvalue."
    // está tentando obter o endereço de uma expressão que não é variável/objetivo de memória. 
    //printf("constante = %d", &varconst);

    // Mas essa forma funciona
    printf("constante const = %d", &varconst2);
    // E essa também:
    int c = varconst;
    printf("constante define = %d", &c);

    return 0;
}