#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <unistd.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float nota, media = 0.0, soma = 0.0;
	int contador = 0;
	char resposta;
	
	do{
		printf("Digite aqui sua nota: ");
		scanf("%f", &nota);
		
		fflush(stdin);
		
		system("cls");
		printf("Escolha uma das opções abaixo\n");
		printf("S - Inserir mais uma nota\n");
		printf("P - Ver quantidade de notas inseridas\n");
		printf("N - Calcular a média aritmética\n");
		printf("Digite aqui a opção desejada: ");
		scanf("%c", &resposta);
		resposta = toupper(resposta);
		
		soma += nota;
		contador++;

		switch(resposta){
			case 'S' :
				system("cls");
				break;
			case 'P' :
				printf("Quantidade de notas inseridas: %i", contador);
				sleep(5);
				system("cls");
				break;
			case 'N' :
				system("cls");
				break;
			default:
				printf("Digite uma opção válida");
				sleep(5);
				system("cls");	
		}		
	}while (resposta != 'N');

	media = soma / contador;
	printf("=== Exibindo média ===\n");
	printf("Média: %.1f", media);
	
	return 0;
}
