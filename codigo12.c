#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");

	//Defini��o de vari�veis.
	int dividendo, resto;

	//Declara��o de vari�vel.
	printf("Digite aqui sua vari�vel: ");
	scanf("%i", dividendo);

	//Calculadora.
	resto = dividendo % 2;
	if (resto = 0){
		printf("O n�mero � par");
	} else if (resto = 1) {
		printf("O n�mero � �mpar");
	} else {
 		printf("Digite um valor inteiro");
 	}
 	
 	return 0;
}
