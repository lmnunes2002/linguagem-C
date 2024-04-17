#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declaração de variáveis.
	int notasUm[2], notasDois[2];
	int incrementoUm = 0, incrementoDois = 0;
	int somaUm, somaDois;
	int i, j;
	
	//Definição de variáveis.
	printf("==== Pedindo notas ====\n");
	for(i = 0; i < 3; i++){
		printf("Digite aqui a %iª nota: ", i+1);
		scanf("%i", &notasUm[i]);
		somaUm += notasUm[i];
		incrementoUm++;
	}
	
	printf("\n");
	
	for(j = 0; j < 3; j++){
		printf("Digite aqui a %iª nota: ", j+1);
		scanf("%i", &notasDois[j]);
		somaDois += notasDois[j];
		incrementoDois++;
	}
	
	system("cls");
	
	//Exibindo informações.
	printf("=== Valor das notas ===");
	printf("\n.Notas de Maria Silva: ");
	for(i = 0; i < 3; i++){
		printf("\n -%iª nota: %i", i+1, notasUm[i]);
	}
	printf("\n -Média: %.2f", (somaUm) / (float) incrementoUm);
	
	printf("\n\n.Notas de João Santos: ");
	for(j = 0; j < 3; j++){
		printf("\n -%iª nota: %i", j+1, notasDois[j]);
	}
	printf("\n -Média: %.2f", (somaDois) / (float) incrementoDois);
	
	return 0;
}
