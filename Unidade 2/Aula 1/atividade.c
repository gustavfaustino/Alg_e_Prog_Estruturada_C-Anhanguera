#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float salario, sal_liquido, inss, ir;

    // DESCONTOS INSS
    // sal < 1320: 7.5
    // sal >1320.01, <2571.29: 9
    // sal >2571.30, <3856.94: 12
    // sal >3856.95, <7507.49: 14

    // DESCONTOS IR
    // sal < 1903.98: 0
    // sal >1903.99, <2826.65: 7.5
    // sal >2826.66, <3751.05: 15
    // sal >3751.06, <4664.68: 22.5
    // sal >4664.69: 27.5

    printf("Calculo de Salario Liquido Com desconto do IR e INSS\n\n");
    printf("Digite o salário BRUTO do funcionário: R$ ");
    scanf("%f", &salario);

    // CALCULO INSS
    if (salario <= 1320.00)
    {
        inss = salario * 0.075;
    }
    else if (salario >= 1320.01 && salario <= 2571.29)
    {
        inss = salario * 0.09;
    }
    else if (salario >= 2571.30 && salario <= 3856.94)
    {
        inss = salario * 0.12;
    }
    else if (salario >= 3856.95 && salario <= 7507.49)
    {
        inss = salario * 0.14;
    }
    else
    {
        inss = 1051.04; // teto de contribuição
    }

    // CALCULO IR
    if (salario <= 1903.98)
    {
        ir = salario * 0;
    }
    else if (salario >= 1903.99 && salario <= 2826.65)
    {
        ir = salario * 0.075;
    }
    else if (salario >= 2826.66 && salario <= 3751.05)
    {
        ir = salario * 0.15;
    }
    else if (salario >= 3751.06 && salario <= 4664.68)
    {
        ir = salario * 0.225;
    }
    else if (salario >= 4664.69)
    {
        ir = salario * 0.275;
    }

    sal_liquido = (salario - inss) - ir;

    // MOSTRAR SALARIO BRUTO
    printf("\n-----------------\nSALARIO BRUTO:\n");
    printf("R$%.2f", salario);

    // MOSTRAR DESCONTOS
    printf("\n-----------------\nDESCONTOS:\n");
    printf("INSS:   -R$%.2f\n", inss);
    printf("IR:     -R$%.2f", ir);
    printf("\n-----------------");

    // MOSTRAR SALARIO LIQUIDO
    printf("\nSALARIO LIQUIDO:\n");
    printf("R$%.2f\n", sal_liquido);
    printf("-----------------\n");

    return 0;
}