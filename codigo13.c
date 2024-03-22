#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Definição de variáveis
	int numeroUm, numeroDois, resultado;
	char op;
	
	//Declaração de variáveis.
	printf("Digite aqui sua operação (+,-,*,/): ");
	scanf("%c", &op);
	printf("Digite aqui a variável um: ");
	scanf("%i", &numeroUm);
	printf("Digite aqui a variável dois: ");
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
			printf("Valor inválido");
			break;	
	
	return 0;	
	}
}
