#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declara��o de vari�veis.
	int idade;
	
	//Defini��o de vari�veis.
	printf("Digite aqui sua idade: ");
	scanf("%i", idade);
	
	//Condicional.
	if (idade >= 16 && idade < 18 || idade > 65){
		printf("Seu voto � facultativo");
	} else if (idade >= 18 && idade < 65){
		printf("Seu voto � obrigat�rio");	
	} else {
		printf("Voc� � muito jovem para votar");
	}
	
return 0;
}
