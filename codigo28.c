#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float media, nota, soma;
	
	do{
		printf("Digite aqui sua nota: ");
		scanf("%f", &nota);
		soma += nota;
	} while (nota < 0.0 || nota > 10.0);
	
	do{	
		printf("Digite aqui sua nota: ");
		scanf("%f", &nota);
		soma += nota;	
	} while (nota < 0.0 || nota > 10.0);
	
	//Calculadora.
	media = soma / 2;
	
	//Exibindo resultados.
	printf("\n=== Média ===\n");
	printf("Média: %.2f", media);
	
	return 0;
}
