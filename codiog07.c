#include <stdio.h>
#include <stdlib.h>

int main(){
	//Declar��o de vari�vel.
	int valorQualquer;
	
	//Defini��o de vari�vel.
	printf("Digite aqui um valor qualquer: ");
	scanf("%i", &valorQualquer);
	
	//Calculadora.
	valorQualquer *= 0.9;
	
	//Display.
	printf("Valor com reajuste: %i", valorQualquer);
	
	return 0;
}
