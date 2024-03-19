#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declaração de variáveis.
	int numeroUm, numeroDois, media, soma, produto, divisao;

	//Definição de variáveis.
	printf("Digite aqui a primeira variável: ");
	scanf("%i", &numeroUm);

	printf("Digite aqui a segunda variável: ");
	scanf("%i", &numeroDois);

	system("cls");

	//Calculadora.
	soma = numeroUm + numeroDois;
	produto = numeroUm * numeroDois;
	media = (numeroUm + numeroDois) / 2.0;

	//Exibindo variáveis.
	printf("Variável um: %i", numeroUm);
	printf("\nVariável dois: %i", numeroDois);
	printf("\nSoma das variáveis: %i", soma);
	printf("\nProduto das variáveis: %i", produto);

	//Condicional.
	if (numeroUm == numeroDois){
		printf("\nAs variáveis são iguais");
	} else if (numeroUm > numeroDois){
		printf("\nA variável um é maior que a variável dois");
	} else {
		printf("\nA variável dois é maior que a variável um");
	}

	return 0;
}
