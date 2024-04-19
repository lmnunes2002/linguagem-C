#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declaração de variáveis.
	char estado[50], nomeDaDisciplina[3][50];
	float notas[3][2], media[3];
	float somaNotas = 0;
	int i, j;
	
	system("cls");
	
	printf("====== Pedindo notas ======\n");
	for(i = 0; i < 3; i++){
		printf("\nDigite aqui o nome da %iª disciplina: ", i+1);
		fgets(nomeDaDisciplina[i], 50, stdin);
		for(j = 0; j < 2; j++){
			printf("%iª nota da %iª matéria: ", j+1, i+1);
			scanf("%f", &notas[i][j]);
			fflush(stdin);
			somaNotas += notas[i][j];
		}
		media[i] = somaNotas / (float) 2;
		somaNotas = 0;	 
	}
	
	system("cls");
	
	//Exibindo informações.
	printf("===== Exibindo notas e médias =====\n\n");
	for(i = 0; i < 3; i++){
			printf("Nome da disciplina: %s", nomeDaDisciplina[i]);
	for(j = 0; j < 2; j++){
		printf("Nota da %iª linha e %iª coluna: %.2f\n", i+1, j+1, notas[i][j]);
	}
	
	if(media[i] >= 7.0){
		strcpy(estado, "Aprovado!");
	} else if(media[i] >= 5.0 && media[i] < 7.0){
		strcpy(estado, "Recuperação");
	} else if(media[i] < 5.0){
		strcpy(estado, "Reprovado");
	}
	
	printf("Média: %.2f\n", media[i]);
	printf("Resultado final: %s\n\n", estado);
	}
	
	return 0;	
}
