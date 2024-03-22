#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Definição de variáveis.
	char sexo;
	float altura, pesoIdeal;
	
	//Definição de variáveis.
	printf("Digite aqui seu sexo (M ou F): ");
	scanf("%c", &sexo);
	printf("Digite aqui sua altura: ");
	scanf("%f", &altura);
	
	//Converte em maiúsculo.
	sexo = toupper(sexo);
	
	system("cls");
	
	//Escolha-caso.
	switch (sexo){
		case 'M':
			pesoIdeal = (72.7 * altura) - 58;
			printf("Seu peso ideal é %.2f", pesoIdeal);
			break;
		case 'F':
			pesoIdeal = (62.1 * altura) - 44.7;
			printf("Seu peso ideal é %.2f", pesoIdeal);
			break;
		default:
			printf("Digite uma altura válida");
	}
	
	return 0;
}
