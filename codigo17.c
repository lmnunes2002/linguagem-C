#include <stdio.h>
#include <stdlib.h>

int main(){
    
	int i;
	int j;
	
	for(i = 1; i <= 10; i++){
		printf("Número: %i, ", i);
	}
	
	printf("\n");
	
	for(j = 10; j >= 1; j--){
	    printf("Número: %i, ", j);
	}
	return 0;
}

