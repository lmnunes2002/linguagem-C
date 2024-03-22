#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");

	//Definição de variáveis.
	int dividendo, resto;

	//Declaração de variável.
	printf("Digite aqui sua variável: ");
	scanf("%i", dividendo);

	//Calculadora.
	resto = dividendo % 2;
	if (resto == 0){
		printf("O número é par");
	} else if (resto == 1) {
		printf("O número é ímpar");
	} else {
 		printf("Digite um valor inteiro");
 	}
 	
 	return 0;
}
