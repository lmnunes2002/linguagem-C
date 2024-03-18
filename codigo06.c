#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Declaração de variáveis.
	float salarioMinimo = 1412.00;
	float salarioAtual, quantidadeSalario;
	
	//Definição de variáveis.
	printf("Digite aqui seu salário atual: R$ ");
	scanf("%f", &salarioAtual);
	
	//Calculadora.
	quantidadeSalario = salarioAtual / salarioMinimo;
	
	//Display.
	printf("Salário informado: R$ %.2f\n", salarioAtual);
	printf("Valor atual do salário minímo: R$ %.2f\n", salarioMinimo);
	printf("Seu salário atual equivale a %.1f sálario minímos", quantidadeSalario);
	
	return 0;
}
