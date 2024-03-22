#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//linguagem.
	setlocale(LC_ALL, "portuguese");

	//Declarando variáveis.
	float maca, valorFinal;
	int quantidade;

	//Definição de variáveis.
	printf("Digite quantas maçãs você deseja: ");
	scanf("%i", quantidade);
	
	system("cls");
	
	//Condicional.
	if (quantidade < 12){
		maca = 1.30;
		valorFinal = maca * quantidade;
		printf("Quantidade de maçãs: %f", quantidade);
		printf("Valor final: %f", valorFinal);
	} else if (quantidade >= 12) {
		maca = 1.00;
		valorFinal = maca * quantidade;
		printf("Quantidade de maçãs: %f", quantidade);
		printf("Valor final: %f", quantidade);
	} else {
		printf("Digite um valor válido");
	}

return 0;
}
