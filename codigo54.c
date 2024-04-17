#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declara��o de vari�veis.
	int notasUm[2], notasDois[2];
	int incrementoUm = 0, incrementoDois = 0;
	int somaUm, somaDois;
	int i, j;
	
	//Defini��o de vari�veis.
	printf("==== Pedindo notas ====\n");
	for(i = 0; i < 3; i++){
		printf("Digite aqui a %i� nota: ", i+1);
		scanf("%i", &notasUm[i]);
		somaUm += notasUm[i];
		incrementoUm++;
	}
	
	printf("\n");
	
	for(j = 0; j < 3; j++){
		printf("Digite aqui a %i� nota: ", j+1);
		scanf("%i", &notasDois[j]);
		somaDois += notasDois[j];
		incrementoDois++;
	}
	
	system("cls");
	
	//Exibindo informa��es.
	printf("=== Valor das notas ===");
	printf("\n.Notas de Maria Silva: ");
	for(i = 0; i < 3; i++){
		printf("\n -%i� nota: %i", i+1, notasUm[i]);
	}
	printf("\n -M�dia: %.2f", (somaUm) / (float) incrementoUm);
	
	printf("\n\n.Notas de Jo�o Santos: ");
	for(j = 0; j < 3; j++){
		printf("\n -%i� nota: %i", j+1, notasDois[j]);
	}
	printf("\n -M�dia: %.2f", (somaDois) / (float) incrementoDois);
	
	return 0;
}
