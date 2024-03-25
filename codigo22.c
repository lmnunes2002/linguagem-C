#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, valor, somaTotal = 0;
	
	for(i = 1; i <= 5; i++){
		printf("%i.o valor: ", i);
		scanf("%i", &valor);
		somaTotal += valor;
	}
	
	printf("Soma total: %i", somaTotal);
	return 0;
}
