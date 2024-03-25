#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero, i;
	
	printf("Digite a tabuada desejada: ");
	scanf("%i", &numero);
	
	for(i = 1; i <= 10; i++){
		printf("%i x %i = %i\n", numero, i, numero * i);
	}
}
