#include <stdio.h>
#include <stdlib.h>

int main(){
	//Declara��o de vari�veis.
	int numeroUm, numeroDois;
	
	//Defini��o de vari�veis.
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
	printf("Valor da subtracao: %i.\n", Subtracao);
	printf("Valor da multiplicacao: %i.\n", Multiplicacao);
	printf("Valor da divisao: %i.\n", Divisao);
}
