#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declara��o de vari�veis.
	int valores[TAM];
	int i;
	
	//Defini��o de vari�veis.
	printf("=== Pedindo informa��es ===\n");
	for(i = 0; i < TAM; i++){
		printf("Digite aqui seu %i� valor: ", i+1);
		scanf("%i", &valores[i]);
		
		if(valores[i] < 0){
			valores[i] = 0;
		}
	}
	
	system("cls");
	
	//Exibindo resultados.
	printf("=== Exibindo informa��es ===");
	for(i = 0; i < TAM; i++){
		printf("\n%i� valor: %i", i+1, valores[i]);
	}
	
	return 0;
}
