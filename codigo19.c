#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j;
	
	printf("Digite a tabuada desejada: ");
	scanf("%i", &i);
	
	for(j = 1; j <= 10; j++){
		printf("%i x %i = %i\n", i, j, i * j);
	}
}
