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
			printf("Valor inv�lido");
		}
	}
	
	system("cls");
	
	printf("=== Quantidade de n�meros ===");
	printf("\nQuantidade de n�meros pares: %i", numeroPar);
	printf("\nQuantidade de n�meros �mpares: %i", numeroImpar);
	
	printf("\n\n=== Soma de n�meros ===");
	printf("\nSoma dos valores pares: %i", somaPar);
	printf("\nSoma dos valores �mpares: %i", somaImpar);
	
	return 0;	
}
