#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declara��o de vari�veis.
	int numerosTotais = 0, numerosPositivos = 0, numerosNegativos = 0, numerosPares = 0, numerosImpares = 0, numerosZero = 0;
	int i;
	
	//Defini��o de vari�veis.
	printf("=== Pedindo informa��es ===\n");
	do{
		printf("Digite aqui seu valor: ");
		scanf("%i", &i);
		numerosTotais++;
		
		if(i > 0){
			numerosPositivos++;
		} else if(i < 0){
			numerosNegativos++;
		}
		
		if(i % 2 == 0){
			numerosPares++;
		} else if(i % 2 == 1 || i % 2 == -1){
			numerosImpares++;
		}
	} while (i != 0);
	
	
	system("cls");
	
	//Exibindo resultados.
	printf("=== Exibindo informa��es ===");
	printf("\n\nN�meros totais: %i", numerosTotais);
	printf("\nN�meros positivos: %i", numerosPositivos);
	printf("\nN�meros negativos: %i", numerosNegativos);
	printf("\nN�meros pares: %i", numerosPares);
	printf("\nN�meros �mpares: %i", numerosImpares);
	
	return 0;
}
