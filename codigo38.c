#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char login[50], loginVerificacao[50];
	char senha[50], senhaVerificacao[50];
	
	printf("Digite aqui seu login: ");
	scanf("%s", &login);
	
	printf("Digite aqui sua senha: ");
	scanf("%s", &login);
	
	system("cls");
	
	printf("Confirme aqui seu login: ");
	scanf("%s", &loginVerificacao);
	
	printf("Confirme sua senha: ");
	scanf("%s", &senhaVerificacao);
	
	system("cls");
	
	if(strcmp(login, loginVerificacao) == 0 && strcmp(senha, senhaVerificacao) == 0){
		printf("Seja bem vindo!");
	} 
	
	while(strcmp(login, loginVerificacao) != 0 || strcmp(senha, senhaVerificacao) != 0){
		printf("Digite aqui seu login: ");
		scanf("%s", &login);
		
		printf("Digite aqui sua senha: ");
		scanf("%s", &senha);
		
		system("cls");
		
		printf("Confirme aqui seu login: ");
		scanf("%s", &loginVerificacao);
		
		printf("Confirme sua senha: ");
		scanf("%s", &senhaVerificacao);
			
		system("cls");
		
		if(strcmp(login, loginVerificacao) == 0 && strcmp(senha, senhaVerificacao) == 0){
			printf("Seja bem vindo!");
		} 
	}
	
	return 0;
}
