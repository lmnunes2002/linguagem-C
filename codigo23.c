#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i, valor, numeroPar = 0, numeroImpar = 0, somaPar = 0, somaImpar = 0;
	
	for(i = 1; i <=5; i++){
		printf("Digite aqui os %i valores: ", i);
		scanf("%i", &valor);
			
		if (valor % 2 == 0){
			somaPar += valor;
			numeroPar++;
		} else if (valor % 2 == 1){
			somaImpar += valor;
			numeroImpar++;
		} else {
			printf("Valor inválido");
		}
	}
	
	system("cls");
	
	printf("=== Quantidade de números ===");
	printf("\nQuantidade de números pares: %i", numeroPar);
	printf("\nQuantidade de números ímpares: %i", numeroImpar);
	
	printf("\n\n=== Soma de números ===");
	printf("\nSoma dos valores pares: %i", somaPar);
	printf("\nSoma dos valores ímpares: %i", somaImpar);
	
	return 0;	
}
