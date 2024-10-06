#include <stdio.h>

int main(){
	int i, X, Y, soma;
	
	soma = 0;
	
	printf("Digite dois numeros: \n");
	scanf("%d", &X);
	scanf("%d", &Y);
	
	for(i = X; i < Y; i++) {
		if (i % 2 != 0){
			soma += i;
		}
	}
	
	printf("Soma dos impares: %d", soma);
}
