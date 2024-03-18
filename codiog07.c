#include <stdio.h>
#include <stdlib.h>

int main(){
	//Declarção de variável.
	int valorQualquer;
	
	//Definição de variável.
	printf("Digite aqui um valor qualquer: ");
	scanf("%i", &valorQualquer);
	
	//Calculadora.
	valorQualquer *= 0.9;
	
	//Display.
	printf("Valor com reajuste: %i", valorQualquer);
	
	return 0;
}
