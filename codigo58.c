#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	char peso, nomeDisciplina[3][50];
	float pesos, notas[3][3], media[3];
	int somaDosPesos = 0, somaDasNotas = 0;
	int i, j;
	
	printf("===== Pedindo informações =====\n");
	for ( i = 0; i < 3; i++){
		printf("Digite o nome da %iª matéria: ", i + 1);
		scanf("%s",&nomeDisciplina);
			for( j = 0; j < 3; j++){
				printf("Digite a %iª nota da %iª matéria: ", j + 1, i+1);
				scanf("%f",&notas[i][j]);
				somaDasNotas+= notas[i][j] * 1+j;
				/*somaDosPesos+= 
				denominador = somaDasNotas;
				divisor = somaDosPesos;
				media[i] = somaDasNotas / somaDosPesos 
				/*printf("Digite ao peso(1 - 5): ");
				scanf("%c", &peso);
				switch(peso){
					case
				}*/
			}
 	} 
 	
	 for(i = 0; i < 3; i++){
	 	printf("%.2f", media[i]);
	 }
	return 0;
}
