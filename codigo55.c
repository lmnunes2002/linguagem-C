#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declara��o de vari�veis.
	char nomeDaDisciplina[3][50];
	float notas[3][2], media[3];
	float somaNotas = 0;
	int i, j;
	
	//Pedindo informa��es.
	/*printf("====== Nome da disciplina ======\n\n");
	for(i = 0; i < 3; i++){
		printf("Digite aqui o nome da disciplina: ");
		fgets(nomeDaDisciplina[i], 50, stdin);
	}*/
	
	system("cls");
	
	printf("====== Pedindo notas ======\n");
	for(i = 0; i < 3; i++){
		printf("\nDigite aqui o nome da %i� disciplina: ", i+1);
		fgets(nomeDaDisciplina[i], 50, stdin);
		for(j = 0; j < 2; j++){
			printf("%i� nota da %i� mat�ria: ", j+1, i+1);
			scanf("%f", &notas[i][j]);
			fflush(stdin);
			somaNotas += notas[i][j];
		}
		media[i] = somaNotas / (float) 2;
		somaNotas = 0;	 
	}
	
	system("cls");
	
	//Exibindo informa��es.
	printf("===== Exibindo notas e m�dias =====\n\n");
	for(i = 0; i < 3; i++){
			printf("Nome da disciplina: %s", nomeDaDisciplina[i]);
	for(j = 0; j < 2; j++){
		printf("Nota da %i� linha e %i� coluna: %.2f\n", i+1, j+1, notas[i][j]);
	}
	printf("M�dia: %.2f\n\n", media[i]);
	}
	
	return 0;	
}
