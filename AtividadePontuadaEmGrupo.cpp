#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>
#define TAM 5

//Lucas Moreira Nunes
//Caio Mateus Dantas Real
//Renan Joaquim Saturnino Braga
//Eliel Reinan Dos Reis Santos 

int main(){
	//Linguagem.
	setlocale(LC_ALL, "");
	
	//Declaração de variáveis.
	int somaPares = 0, somaImpares = 0, somaTotal = 0;
	int numerosTotais = 0, numerosPares = 0, numerosImpares = 0, numerosPositivos = 0, numerosNegativos =0;
	int numeroMaximo = INT_MIN, numeroMinimo = INT_MAX;
	int vetor[TAM]; 
	int i;
	
	//Definição de variáveis.
	printf("=== Pedindo informações ===\n");
	for(i = 0; i < TAM; i++){
		printf("Digite o %iº valor: ", i+1);
		scanf("%i", &vetor[i]);
		numerosTotais++;
		somaTotal += vetor[i];
		
 	 if (vetor[i] % 2 == 0) {
		numerosPares++;
		somaPares += vetor[i];
	} else {
		numerosImpares++;
		somaImpares += vetor[i];
	}
	
	 if ( vetor[i] > 0) {
	 	numerosPositivos++;
	} else if ( vetor[i] < 0) {
	 	numerosNegativos++;
	}
	 
	if (vetor[i] > numeroMaximo) {
	 	numeroMaximo = vetor[i];
	}
	
	if (vetor[i] < numeroMinimo) {
	 	numeroMinimo = vetor[i];
	}
	}
	system ("cls || clear");
	
	//Exibindo resultados.
	printf("==== Exibindo Resultados ====\n");
	printf("\nQuantidade de Impares: %i", numerosImpares);
	printf("\nQuantidade de Pares: %i", numerosPares);
	printf("\nQuantidade de Positivos: %i", numerosPositivos);
	printf("\nQuantidade de Negativos: %i", numerosNegativos);
	printf("\nQuantidade de Numeros Inseridos: %i", numerosTotais);
	printf("\nMenor Numero: %i", numeroMinimo);
	printf("\nMaior Numero: %i", numeroMaximo);
	printf("\nMedia de Impares: %.2f", somaImpares / (float) numerosImpares);
	printf("\nMedia de Pares: %.2f", somaPares / (float) numerosPares);
	printf("\nMedia de Todos os Numeros: %.2f\n", somaTotal / (float) numerosTotais);
	
	for (i=TAM - 1; i>=0; i--) {
		printf("\n%iº Valor: %i",i+1, vetor[i]);
	}
	
	return 0;
}
