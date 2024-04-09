#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int notas[TAM];
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Digite a sua %iª nota: ", i+1);
		scanf("%i", &notas[i]);
	}
	
	system("cls");
	
	printf("Exibindo resultados\n");
	for(i = 0; i < TAM; i++){
		printf("%iª nota: %i\n", i+1, notas[i]);
	}
	
	return 0;
}
