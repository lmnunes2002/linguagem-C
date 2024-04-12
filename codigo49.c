#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 6

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int numerosOriginal[TAM], numerosInvert[TAM];
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Digite aqui o %iº elemento: ", i+1);
		scanf("%i", &numerosOriginal[i]);
	}
	
	system("cls");
	
	for(i = 0; i <= TAM; i++){
		numerosInvert[i] = numerosOriginal[TAM - 1];
	}
	
	printf("==== Exibindo Resultados ====");
	for(i = 0; i < TAM; i++){
		printf("\n%iº valor invertido: %i", i+1, numerosInvert[i]);
	}
	
	return 0;
}
