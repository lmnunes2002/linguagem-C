#include <stdio.h>
#include <stdlib.h>

int main(){
    
	int i;
	int j;
	
	for(i = 1; i <= 10; i++){
		printf("N�mero: %i, ", i);
	}
	
	printf("\n");
	
	for(j = 10; j >= 1; j--){
	    printf("N�mero: %i, ", j);
	}
	return 0;
}

