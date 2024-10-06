#include <stdio.h>

int main(){
	int i, num;
	
	printf("Deseja a tabuda ppara qual valor: ");
	scanf("%d", &num);
	
	for (i = 0; i < 10; i++) {
		printf("%d x %d = %d\n", num, i+1, num * (i+1));
	} 
}
