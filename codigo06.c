#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Declara��o de vari�veis.
	float salarioMinimo = 1412.00;
	float salarioAtual, quantidadeSalario;
	
	//Defini��o de vari�veis.
	printf("Digite aqui seu sal�rio atual: R$ ");
	scanf("%f", &salarioAtual);
	
	//Calculadora.
	quantidadeSalario = salarioAtual / salarioMinimo;
	
	//Display.
	printf("Sal�rio informado: R$ %.2f\n", salarioAtual);
	printf("Valor atual do sal�rio min�mo: R$ %.2f\n", salarioMinimo);
	printf("Seu sal�rio atual equivale a %.1f s�lario min�mos", quantidadeSalario);
	
	return 0;
}
