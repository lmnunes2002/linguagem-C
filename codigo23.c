#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, valor, somaPar, somaImpar;
	
	for(i = 1; i <=5; i++){
		printf("Digite aqui os %i valores: ", i);
		scanf("%i", &valor);
			
		if (valor % 2 == 0){
			somaPar += valor;
		} else if (valor % 2 == 1){
			somaImpar += valor;
		} else {
			printf("Valor inv�lido");
		}
	}
	
	system("cls");
	
	printf("Soma dos valores pares: %i", somaPar);
	printf("\nSoma dos valores �mpares: %i", somaImpar);
	
	return 0;
		
}
