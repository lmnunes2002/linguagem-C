#include <stdio.h>

int main(){
	int i, num;
	float soma, media;
	
	printf("Quantos numeros voce vai digitar: ");
	scanf("%d", &num);
	
	float vet[num];
	soma = 0;
	media = 0;
	
	for(i = 0; i < num; i++) {
		printf("Digite um numero: ");
		scanf("%f", &vet[i]);
		soma += vet[i];
	}
	
	media = soma / num;
	
	printf("\n");
	printf("Valores: ");
	for(i = 0; i < num; i++){
		printf("%.1f ", vet[i]);
	}
	
	printf("\nSoma: %.1f", soma);
	printf("\nMedia: %.1f", media);
}
