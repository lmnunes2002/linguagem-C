#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int i;
	float nota, soma, media;
	
	for(i = 1; i <= 4; i++){
		printf("Digite aqui a %iª nota: ", i);
		scanf("%f", &nota);
		
		soma += nota;
	}
	
	system("cls");
	media = soma / 4;
	
	printf("Média final: %f", media);
	return 0;
}
