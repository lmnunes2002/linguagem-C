#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declara��o de vari�veis.
	int numerosTotais = 0, numerosPositivos = 0, numerosNegativos = 0, numerosPares = 0, numerosImpares = 0, numerosZero = 0;
	int numeros[TAM];
	int i;
	
	//Defini��o de vari�veis.
	printf("=== Pedindo informa��es ===\n");
	for(i = 0; i < TAM; i++){
		printf("Digite aqui o %i� valor: ", i+1);
		scanf("%i", &numeros[i]);
		numerosTotais++;
		
		if(numeros[i] > 0){
			numerosPositivos++;
		} else if(numeros[i] < 0){
			numerosNegativos++;
		} else if(numeros[i] == 0){
			numerosTotais--;
			break;
		}
		
		if(numeros[i] % 2 == 0){
			numerosPares++;
		} else if(numeros[i] % 2 == 1 || numeros[i] % 2 == -1){
			numerosImpares++;
		}
	}
	
	system("cls");
	
	//Exibindo resultados.
	printf("=== Exibindo informa��es ===");
	
	for(i = 0; i < TAM; i++){
		printf("\n%i� numero inserido: %i", i+1, numeros[i]);
	}
	
	printf("\n\nN�meros totais: %i", numerosTotais);
	printf("\nN�meros positivos: %i", numerosPositivos);
	printf("\nN�meros negativos: %i", numerosNegativos);
	printf("\nN�meros pares: %i", numerosPares);
	printf("\nN�meros �mpares: %i", numerosImpares);
	
	return 0;
}
