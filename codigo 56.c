#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declarção de variáveis.
	char nomeDisciplina[3][50];
	float notas[3][3];
	int somaNotas = 0;
	int i, j;
	
	//Entrada de dados.
	printf("===== Pedindo informações =====\n");
	for(i = 0; i < 3; i++){
		printf("\nDigite o nome da %iª disciplina: ", i+1);
		fgets(nomeDisciplina[i], 50, stdin);
	for(j = 0; j <2; j++){
		printf("Digite aqui a %iª nota da %iª matéria: ", j+1, i+1);
		scanf("%f", &notas[i][j]);
		fflush(stdin);
		somaNotas += notas[i][j];
	}
	//notas[i][3] = somaNotas / (float) 2;
	somaNotas = 0;
	}
	
	system("cls");
	
	//Saída de dados.
	printf("===== Exibindo informações =====\n\n");
	for(i = 0; i < 3; i++){
		printf("Nome da disciplina: ", nomeDisciplina[i]);
	for(j = 0; j < 2; j++){
		printf("\n%iª nota da %iª matéria: %i", j+1, i+1, notas[i][j]);
	}
	//printf("\n%iª média: %i\n\n", i+1, notas[i][3]);	
	}
	
	return 0;
}
