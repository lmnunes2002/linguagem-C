#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 6

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declara��o de vari�veis.
	int pares = 0, impares = 0;
	int i, numero, vetor[TAM];
	
	//Recebendo valor no vetor.
	for(i = 0; i < TAM; i++){
		printf("Digite seu %i� valor: ", i+1);
		scanf("%i", &vetor[i]);
		
		numero = vetor[i];
		
		if(numero % 2 == 0){
			pares++;
		}
		
		if(numero % 2 == 1){
			impares++;
		}
	}
	
	system("cls");
	
	//Exibindo valor no vetor.
	printf("Exibindo resultados");
	for(i = 0; i < TAM; i++){
		printf("\n%i� valor: %i", i+1, vetor[i]);
	}
	printf("\nN�mero de pares: %i", pares);
	printf("\nN�mero de �mpares: %i", impares);
	
	return 0;
}
