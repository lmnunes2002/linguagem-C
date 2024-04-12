#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float numeros[TAM];
	int somaPositivos = 0, numerosNegativos = 0;
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Digit aqui seu %iº número real: ", i+1);
		scanf("%f", &numeros[i]);
		
		if(numeros[i] > 0.0){
			somaPositivos += numeros[i]; 
		} else if (numeros[i] < 0.0){
			numerosNegativos++;
		} else {
			printf("Digite um valor válido");
		}
	}
	
	system("cls");
	
	printf("====== Exibindo resultados ======");
	printf("\nSoma dos números positivos: %i", somaPositivos);
	printf("\nQuantidade de números negativos: %i", numerosNegativos);
	
	return 0;
}
