#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declara��o de vari�veis.
	int numeroUm, numeroDois, media, soma, produto, divisao;

	//Defini��o de vari�veis.
	printf("Digite aqui a primeira vari�vel: ");
	scanf("%i", &numeroUm);

	printf("Digite aqui a segunda vari�vel: ");
	scanf("%i", &numeroDois);

	system("cls");

	//Calculadora.
	soma = numeroUm + numeroDois;
	produto = numeroUm * numeroDois;
	media = (numeroUm + numeroDois) / 2;

	//Exibindo vari�veis.
	printf("Vari�vel um: %i", numeroUm);
	printf("\nVari�vel dois: %i", numeroDois);
	printf("\nSoma das vari�veis: %i", soma);
	printf("\nProduto das vari�veis: %i", produto);

	//Condicional.
	if (numeroUm == numeroDois){
		printf("\nAs vari�veis s�o iguais");
	} else if (numeroUm > numeroDois){
		printf("\nA vari�vel um � maior que a vari�vel dois");
	} else {
		printf("\nA vari�vel dois � maior que a vari�vel um");
	}

	return 0;
}
