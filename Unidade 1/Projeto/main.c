/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/*
  Programa: Calculadora de Três Valores
  Objetivo: Demonstrar o uso de operadores aritméticos, relacionais e lógicos
			em C, aplicando conceitos de funções e estruturas de controle.
  Disciplina: Algoritmos e Programação Estruturada - Aula 4
  Autor: Gustavo Gabriel Faustino de Oliveira
*/

#include <stdio.h>	// Biblioteca padrão para entrada e saída de dados
#include <locale.h> // Biblioteca para suporte a acentuação e idioma local

int main(void)
{
	setlocale(LC_ALL, "pt_BR.UTF-8");
	// Configura o idioma e codificação do programa para português do Brasil, permitindo exibir acentuação corretamente.

	int num_1, num_2, num_3; // Armazenam os três números inteiros informados pelo usuário
	short int escolha;		 // Guarda a opção de operação escolhida no menu

	// Função que realiza a soma de três números inteiros
	int soma_3(int num1, int num2, int num3)
	{
		int resultado = num1 + num2 + num3;
		return resultado;
	}

	// Função que realiza a subtração de três números inteiros
	int sub_3(int num1, int num2, int num3)
	{
		int resultado = num1 - num2 - num3;
		return resultado;
	}

	// Função que realiza a multiplicação de três números inteiros
	float multi_3(int num1, int num2, int num3)
	{
		float resultado = num1 * num2 * num3;
		return resultado;
	}

	// Função que realiza a divisão entre três números inteiros (convertendo para float)
	float div_3(int num1, int num2, int num3)
	{
		float resultado = (float)num1 / num2 / num3;
		return resultado;
	}

	printf("Olá e bem-vindo a calculadora de 3 valores!\nEntre abaixo em sequência os três valores INTEIROS para executarmos as operações:\n");
	// Solicita três números inteiros ao usuário
	scanf("%d", &num_1);
	scanf("%d", &num_2);
	scanf("%d", &num_3);

	printf("---------------------------\n");

	while (escolha != 5)
	{
		printf("Qual operação deseja executar?\n");
		printf("1 - SOMA\n2 - SUBTRAÇÃO\n3 - MULTIPLICAÇÃO\n4 - DIVISÃO\n5 - SAIR\n");
		scanf("%hd", &escolha);

		if (escolha == 1)
		{
			printf("\nRESULTADO da SOMA: %d\n", soma_3(num_1, num_2, num_3));
		}
		else if (escolha == 2)
		{
			printf("\nRESULTADO da SUBTRAÇÃO: %d\n", sub_3(num_1, num_2, num_3));
		}
		else if (escolha == 3)
		{
			printf("\nRESULTADO da MULTIPLICAÇÃO: %.2f\n", multi_3(num_1, num_2, num_3));
		}
		else if (escolha == 4)
		{
			printf("\nRESULTADO da DIVISÃO: %.4f\n", div_3(num_1, num_2, num_3));
		}
		else if (escolha > 5 || escolha < 1)
		{
			printf("OPÇÃO INVÁLIDA, SELECIONE SOMENTE DE 1 à 5!\n");
		}
		printf("---------------------------\n");
	}

	printf("Mais informações:\n");
	
	// Verifica se o primeiro número é maior que o segundo
	if (num_1 > num_2)
	{
		printf("O primeiro número (%d) é MAIOR que o segundo número (%d)!\n", num_1, num_2);
	}

	// Verifica se o segundo número é maior que o terceiro
	if (num_2 > num_3)
	{
		printf("O segundo número (%d) é MAIOR que o terceiro número (%d)!\n", num_2, num_3);
	}

	// Exemplo de uso combinado de operadores lógicos (AND) e aritméticos (módulo)
	if (num_1 > 0 && num_2 % 2 == 0)
	{
		printf("Como as condições são verdadeiras, preciso dizer...\nTHE CAKE IS A LIE!\n");
	}

	return 0;
}
