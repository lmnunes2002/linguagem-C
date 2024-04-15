#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 6

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declaração de variáveis.
	int valorOriginal[TAM];
	int i;
	
	//Definição de variáveis.
	printf("=== Pedindo informações ===\n");
	for(i = 0; i < TAM; i++){
		do{
			printf("Digite o %iº valor: ", i+1);
			scanf("%i", &valorOriginal[i]);
		} while (valorOriginal[i] < 0 || valorOriginal[i] % 2 == 1);
	}
	
	//system("cls");
	
	//Exibindo Informações
	printf("=== Exibindo informações ===\n");
	for(i = TAM - 1; i >= 0; i--){
		printf("%iº número: %i \n", i+1, valorOriginal[i]);
	}
	
	return 0;
}
