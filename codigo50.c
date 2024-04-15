#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declaração de variáveis.
	int numerosTotais = 0, numerosPositivos = 0, numerosNegativos = 0, numerosPares = 0, numerosImpares = 0;
	int numeros[TAM];
	int i;
	
	//Definição de variáveis.
	printf("=== Pedindo informações ===\n");
	for(i = 0; i < TAM; i++){
		printf("Digite aqui o %iº valor: ", i+1);
		scanf("%i", &numeros[i]);
		numerosTotais++;
		
		if(numeros[i] > 0){
			numerosPositivos++;
		} else if(numeros[i] < 0){
			numerosNegativos++;
		}
		
		if(numeros[i] % 2 == 0){
			numerosPares++;
		} else if(numeros[i] % 2 == 1 || numeros[i] % 2 == -1){
			numerosImpares++;
		}
	}
	
	system("cls");
	
	//Exibindo resultados.
	printf("=== Exibindo informações ===");
	printf("\nNúmeros totais: %i", numerosTotais);
	printf("\nNúmeros positivos: %i", numerosPositivos);
	printf("\nNúmeros negativos: %i", numerosNegativos);
	printf("\nNúmeros pares: %i", numerosPares);
	printf("\nNúmeros ímpares: %i", numerosImpares);
	
	return 0;
}
