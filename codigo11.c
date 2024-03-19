#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declaração de variáveis.
	int idade;
	
	//Definição de variáveis.
	printf("Digite aqui sua idade: ");
	scanf("%i", idade);
	
	//Condicional.
	if (idade >= 16 && idade < 18 || idade > 65){
		printf("Seu voto é facultativo");
	} else if (idade >= 18 && idade < 65){
		printf("Seu voto é obrigatório");	
	} else {
		printf("Você é muito jovem para votar");
	}
	
return 0;
}
