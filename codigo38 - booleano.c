#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declarando variáveis.
	char loginSalvo[50] = "Lukas";
	char senhaSalvo[50] = "senha123";
	char login[50], senha[50];
	bool loginCorreto, senhaCorreto;
	
	do{
		printf("Digite o login: ");
		scanf("%s", &login);
		
		printf("Digite a senha: ");
		scanf("%s", &senha);
		
		loginCorreto = strcmp(login, loginSalvo) == 0;
		senhaCorreto = strcmp(senha, senhaSalvo) == 0;	
		
		system("cls");
	} while (!loginCorreto && !senhaCorreto);
	
	printf("Acesso autorizado. \n");
	
	return 0;
}
