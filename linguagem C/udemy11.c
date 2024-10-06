#include <stdio.h>

int main(){
	int i, num;
	
	printf("Quanto numeros voce vai digitar: ");
	scanf("%d", &num);
	
	int vet[num];
	
	for(i = 0; i < num; i++){
		printf("Digite um numero: ");
		scanf("%d", &vet[i]);
	}
	
	printf("Numeros negativos: \n");
	for(i = 0; i < num; i++){
		if (vet[i] < 0) {
			printf("%d\n", vet[i]);
		}
	}
}
