#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declara��o de vari�veis.
	float numeroPositivo, soma, media;
	int contador = 0;
	
	//Defini��o de vari�veis.
	printf("Digite aqui seu numero: ");
	scanf("%f", &numeroPositivo);
	
	fflush(stdin);
	sleep(2);
	system("cls");
	
	soma+= numeroPositivo;
	contador++;
	
	//La�o de repeti��o.
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
	
	//Exibi��o de vari�veis.
	printf("==== Exibindo Resultados ====\n");
	printf("M�dia de n�meros positivos: %.1f", media);
	
	return 0;
}
