#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
//Linguagem
setlocale("LC_ALL", "portuguese");

//Declaração de variáveis.
char login[50], senha[50], loginIdentificao[50], senhaIdentificacao[50];

//Cadastro.
printf("Cadastre aqui seu login: ");
scanf("%s", login);
printf("\nCadaste aqui sua senha: ");
scanf("%s", senha);

system("cls");

//Login.
printf("Digite seu login: ");
scanf("%s", loginIdentificao);

printf("Digite sua senha: ");
scanf("%s", senhaIdentificacao);

system("cls");

/*if(login == loginIdentificao && senha == senhaIdentificao){
	printf("\nBem vindo!");
} else {
	printf("Aceso negado");
} errado(X)*/

//Condicional.
if (strcmp(login, loginIdentificao) == 0 && strcmp(senha, senhaIdentificacao) == 0){
	printf("Bem vindo!");
} else {
	printf("Acesso negado");
}

return 0;
}
