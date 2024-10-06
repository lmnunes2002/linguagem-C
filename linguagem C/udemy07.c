#include <stdio.h>

int main(){
	int x, y;
	
	do {
		printf("Digite dois numeros: \n");
		scanf("%d", &x);
		scanf("%d", &y);
		
		if (x > y){
			printf("Decrescente!\n");
		} else if (x < y) {
			printf("Crescente!\n");
		}
	} while (x != y);
}
