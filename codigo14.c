#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//linguagem.
	setlocale(LC_ALL, "portuguese");

	//Declarando vari�veis.
	float maca, valorFinal;
	int quantidade;

	//Defini��o de vari�veis.
	printf("Digite quantas ma��s voc� deseja: ");
	scanf("%i", quantidade);
	
	system("cls");
	
	//Condicional.
	if (quantidade < 12){
		maca = 1.30;
		valorFinal = maca * quantidade;
		printf("Quantidade de ma��s: %f", quantidade);
		printf("Valor final: %f", valorFinal);
	} else if (quantidade >= 12) {
		maca = 1.00;
		valorFinal = maca * quantidade;
		printf("Quantidade de ma��s: %f", quantidade);
		printf("Valor final: %f", quantidade);
	} else {
		printf("Digite um valor v�lido");
	}

return 0;
}
