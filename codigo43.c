#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int nota[TAM], i, soma = 0;
	float media;
	
	for(i = 0; i < TAM; i++){
		printf("Digite aqui sua %iª nota: ", i+1);
		scanf("%i", &nota[i]);
		soma += nota[i];
	}
	
	system("cls");
	
	media = (soma) / (float) TAM;
	
	printf("Exibindo resultados: \n");
	for(i = 0; i < TAM; i++){
		printf("%iª nota: %i\n", i+1, nota[i]);
	}
	printf("Média: %.1f", media);
	
	return 0;
}
