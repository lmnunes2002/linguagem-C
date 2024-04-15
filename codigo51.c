#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declaração de variáveis.
	int numerosTotais = 0, numerosPositivos = 0, numerosNegativos = 0, numerosPares = 0, numerosImpares = 0, numerosZero = 0;
	int i;
	
	//Definição de variáveis.
	printf("=== Pedindo informações ===\n");
	do{
		printf("Digite aqui seu valor: ");
		scanf("%i", &i);
		numerosTotais++;
		
		if(i > 0){
			numerosPositivos++;
		} else if(i < 0){
			numerosNegativos++;
		}
		
		if(i % 2 == 0){
			numerosPares++;
		} else if(i % 2 == 1 || i % 2 == -1){
			numerosImpares++;
		}
	} while (i != 0);
	
	
	system("cls");
	
	//Exibindo resultados.
	printf("=== Exibindo informações ===");
	printf("\n\nNúmeros totais: %i", numerosTotais);
	printf("\nNúmeros positivos: %i", numerosPositivos);
	printf("\nNúmeros negativos: %i", numerosNegativos);
	printf("\nNúmeros pares: %i", numerosPares);
	printf("\nNúmeros ímpares: %i", numerosImpares);
	
	return 0;
}
