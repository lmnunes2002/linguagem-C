#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i, j;
	
	printf("\n=== Tábuada de 2 ===\n");
	for(i = 1; i <=10; i++){
		printf("Número %i: %i x %i = %i\n", i, 2, i, i * 2);
	}
	
	printf("\n");
	
	printf("\n=== Tábuade de 3 ===\n");
	for(i = 1; i <= 10; i++){
		printf("Número %i: %i x %i = %i\n", i, 3, i, i * 3);
	}
	
	printf("\n");
	
	printf("\n=== Tábuada de 5 ===\n");
	for(i = 1; i <= 10; i++){
		printf("Número %i: %i x %i = %i\n", i, 5, i, i * 5);
	}
}
