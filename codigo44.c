#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 4

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i, nota, notas[TAM];
	float media;
	char aprovacao[50];
	
	for(i = 0; i < TAM; i++){
		printf("Digite aqui a %i� nota: ", i+1);
		scanf("%i", &notas[i]);
		nota += notas[i];
	}
	
	system("cls");
	
	media = nota / (float) TAM;
	
	if(media >= 7.0){
		strcpy(aprovacao, "Aprovado");
	} else if (media >= 5.0){
		strcpy(aprovacao, "Recupera��o");
	} else {
		strcpy(aprovacao, "Reprovado");
	}
	
	
	printf("Exibindo resultados: \n");
	for(i = 0; i < TAM; i++){
		printf("%i� nota: %i\n", i+1, notas[i]);
	}
	printf("Situa��o: %s", aprovacao);
	
	return 0;
}
