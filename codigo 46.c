#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define TAM 5

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char nome[TAM][50], notas[TAM];
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Digite aqui o nome do %iº aluno: ", i+1);
		scanf("%s", &nome[i]);
	}
	
	system("cls");
	
	for(i = 0; i < TAM; i++){
		printf("Digite aqui a %iª nota: ", i+1);
		scanf("%i", &notas[i]);
	}
	
	system("cls");
	
	printf("=== Exibindo Resultados ===");
	for(i = 0; i < TAM; i++){
		printf("\n%iº aluno: %s \t %iª nota: %i", i+1, nome[i], i+1, notas[i]);
	}
	
	return 0;
}
