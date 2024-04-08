#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
//Linguagem
setlocale(LC_ALL, "portuguese");

//Declaração de variáveis.
int i;
char login[50], senha[50], loginVerificacao[50], senhaVerificacao[50];

//Cadastro.
printf("Cadastre aqui seu login: ");
scanf("%s", login);
printf("Cadaste aqui sua senha: ");
scanf("%s", senha);

system("cls");

//Login.
printf("Digite seu login: ");
scanf("%s", loginVerificacao);

printf("Digite sua senha: ");
scanf("%s", senhaVerificacao);

system("cls");

if (strcmp(login, loginVerificacao) == 0 && strcmp(senha, senhaVerificacao) == 0){
	printf("Bem vindo!");
} else if(strcmp(login, loginVerificacao) != 0 || strcmp(senha, senhaVerificacao) != 0){
		for(i = 0; i <= 3; i++){
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
}

return 0;
}
