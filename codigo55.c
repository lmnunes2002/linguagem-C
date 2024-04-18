#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declaração de variáveis.
	char nomeDaDisciplina[3][50];
	float notas[3][2], media[3];
	float somaNotas = 0;
	int i, j;
	
	//Pedindo informações.
	printf("====== Nome da disciplina ======\n\n");
	for(i = 0; i < 3; i++){
		printf("Digite aqui o nome da disciplina: ");
		fgets(nomeDaDisciplina[i], 50, stdin);
	}
	
	system("cls");
	
	printf("====== Pedindo notas ======\n\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			printf("Nota da %iª linha e %iª coluna: ", i+1, j+1);
			scanf("%f", &notas[i][j]);
			somaNotas += notas[i][j];
		}
		media[i] = somaNotas / (float) 2;
		somaNotas = 0;	 
	}
	
	system("cls");
	
	//Exibindo informações.
	printf("===== Exibindo notas e médias =====");
	for(i = 0; i < 3; i++){
		printf("Nome da disciplina: %s", nomeDaDisciplina[i]);
	}
	
	for(i = 0; i < 3; i++){
	for(j = 0; j < 2; j++){
		printf("\nNota da %iª linha e %iª coluna: %.2f ", i+1, j+1, notas[i][j]);
	}
	printf("\nMédia: %.2f", media[i]);
	}
	
	return 0;	
}
