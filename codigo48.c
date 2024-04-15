#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declaração de variáveis.
	int valores[TAM];
	int i;
	
	//Definição de variáveis.
	printf("=== Pedindo informações ===\n");
	for(i = 0; i < TAM; i++){
		printf("Digite aqui seu %iº valor: ", i+1);
		scanf("%i", &valores[i]);
		
		if(valores[i] < 0){
			valores[i] = 0;
		}
	}
	
	system("cls");
	
	//Exibindo resultados.
	printf("=== Exibindo informações ===");
	for(i = 0; i < TAM; i++){
		printf("\n%iº valor: %i", i+1, valores[i]);
	}
	
	return 0;
}
