#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declaração de variáveis.
	int numeroUm, numeroDois;
	
	//Definição de variáveis.
	printf("Digite aqui suas variaveis: \n");
	scanf("%i %i", &numeroUm, &numeroDois);
	system("cls");
	
	//Calculadora.
	int Soma = numeroUm + numeroDois;
	int Subtracao = numeroUm - numeroDois;
	int Multiplicacao = numeroUm * numeroDois;
	int Divisao = numeroUm / numeroDois;
	
	//Display.
	
	printf("Valor da soma: %i.\n", Soma);
	printf("Valor da subtração: %i.\n", Subtracao);
	printf("Valor da multiplicação: %i.\n", Multiplicacao);
	printf("Valor da divisão: %i.\n", Divisao);
	return 0;
}
