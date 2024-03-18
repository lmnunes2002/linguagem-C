#include <stdio.h>
#include <stdlib.h>

int main(){
	//Declarção de variável.
	int valorQualquer, desconto;
	
	//Definição de variável.
	printf("Digite aqui um valor qualquer: ");
	scanf("%i", &valorQualquer);
	
	//Calculadora.
	valorQualquer *= 0.9;
	desconto = valorQualquer * 0.1
	
	//Display.
	printf("Valor com reajuste: %i", valorQualquer);
	printf("Valor do desconto: %i", desconto);
	
	return 0;
}
