#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declaração de variáveis.
	float numeroPositivo, soma, media;
	int contador = 0;
	
	//Definição de variáveis.
	printf("Digite aqui seu numero: ");
	scanf("%f", &numeroPositivo);
	
	fflush(stdin);
	sleep(2);
	system("cls");
	
	soma+= numeroPositivo;
	contador++;
	
	//Laço de repetição.
	while(numeroPositivo >= 0){
		printf("Digite aqui seu numero: ");
		scanf("%f", &numeroPositivo);
		
		fflush(stdin);
		sleep(2);
		system("cls");
		
		if (numeroPositivo >= 0){
		soma+= numeroPositivo;
		contador++;
		}
	}
	
	//Calculadora.
	media = soma / contador;
	
	//Exibição de variáveis.
	printf("==== Exibindo Resultados ====\n");
	printf("Média de números positivos: %.1f", media);
	
	return 0;
}
