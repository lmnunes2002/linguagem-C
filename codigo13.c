#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Defini��o de vari�veis
	int numeroUm, numeroDois, resultado;
	char op;
	
	//Declara��o de vari�veis.
	printf("Digite aqui sua opera��o (+,-,*,/): ");
	scanf("%c", &op);
	printf("Digite aqui a vari�vel um: ");
	scanf("%i", &numeroUm);
	printf("Digite aqui a vari�vel dois: ");
	scanf("%i", &numeroDois);	
	
	system("cls");
	
	switch(op){
		case '+':
			resultado = numeroUm + numeroDois;
			printf("Resultado: %i", resultado);
			break;
		case '-':
			resultado = numeroUm - numeroDois;
			printf("Resultado: %i", resultado);
			break;
		case '*':
			resultado = numeroUm * numeroDois;
			printf("Resultado: %i", resultado);
			break;
		case '/':
			resultado = numeroUm / numeroDois;
			printf("Resultado: %i", resultado);
		default:
			printf("Valor inv�lido");
			break;	
	
	return 0;	
	}
}
