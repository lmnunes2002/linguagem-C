#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float notaUm, notaDois, notaTres, media;
	int i;
	
	do{
		printf("Digite sua primeira nota: ");
		scanf("%f", &notaUm);
		printf("Digite sua segunda nota: ");
		scanf("%f", &notaDois);
		printf("Digite sua terceira nota: ");
		scanf("%f", &notaTres);

		media = (notaUm + notaDois + notaTres) / 3;
	} while (media < 0.0 || media > 10.0);
	
	printf("\n=== Resultados ===");
	printf("\nNota um: %.1f", notaUm);
	printf("\nNota dois: %.1f", notaDois);
	printf("\nNota três: %.1f", notaTres);
	printf("\nMédia: %.1f", media);
}
