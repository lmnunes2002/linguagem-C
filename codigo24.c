#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i, nota, media = 0;
	
	for(i = 1; i <= 4; i++){
		printf("Digite aqui a %iª nota: ", i);
		scanf("%i", &nota);
		
		media = nota / 4;
	}
	
	printf("Média final: %i", media);
	return 0;
}
