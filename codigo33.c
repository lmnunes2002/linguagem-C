#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float numeroPositivo, soma, media;
	int contador = 0;
	
	printf("Digite aqui seu numero: ");
	scanf("%f", &numeroPositivo);
	
	fflush(stdin);
	sleep(2);
	system("cls");
	
	soma+= numeroPositivo;
	contador++;
	
	while(numeroPositivo >= 0){
		printf("Digite aqui seu numero: ");
		scanf("%f", &numeroPositivo);
		
		fflush(stdin);
		sleep(2);
		system("cls");
	
		soma+= numeroPositivo;
		contador++;
	}
	
	media = soma / contador;
	
	printf("= Exibindo Resultados =\n");
	printf("Média: %.2f", media);
	
	return 0;
}
