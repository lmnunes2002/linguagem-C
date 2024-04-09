#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 6

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declaração de variáveis.
	int pares = 0, impares = 0;
	int i, numero, vetor[TAM];
	
	//Recebendo valor no vetor.
	for(i = 0; i < TAM; i++){
		printf("Digite seu %i° valor: ", i+1);
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
		printf("\n%i° valor: %i", i+1, vetor[i]);
	}
	printf("\nNúmero de pares: %i", pares);
	printf("\nNúmero de ímpares: %i", impares);
	
	return 0;
}
