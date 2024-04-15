#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 6

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declara��o de vari�veis.
	int valorOriginal[TAM];
	int i;
	
	//Defini��o de vari�veis.
	printf("=== Pedindo informa��es ===\n");
	for(i = 0; i < TAM; i++){
		do{
			printf("Digite o %i� valor: ", i+1);
			scanf("%i", &valorOriginal[i]);
		} while (valorOriginal[i] < 0 || valorOriginal[i] % 2 == 1);
	}
	
	//system("cls");
	
	//Exibindo Informa��es
	printf("=== Exibindo informa��es ===\n");
	for(i = TAM - 1; i >= 0; i--){
		printf("%i� n�mero: %i \n", i+1, valorOriginal[i]);
	}
	
	return 0;
}
