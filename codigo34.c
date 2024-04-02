#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int numero, resto, numerosPares = 0, numerosImpares = 0, somaPares = 0, somaImpares = 0; 
	float mediaPares = 0, mediaImpares = 0, mediaGeral = 0, somaGeral = 0, numerosGeral = 0;
	
	printf("Digite aqui seu n�mero: ");
	scanf("%i", &numero);
	
	resto = numero % 2;
	
	if (resto == 0 && numero != 0){
		somaPares += numero;
		numerosPares++;
		mediaPares = somaPares / (float)numerosPares;
	} else if (resto == 1){
		somaImpares += numero;
		numerosImpares++;
		mediaImpares = somaImpares / (float)numerosImpares;
	} 
	
	somaGeral = somaPares + somaImpares;
	numerosGeral = numerosPares + numerosImpares;
	mediaGeral = somaGeral / numerosGeral;
	
	system("cls");
	
	while(numero != 0 ){
		printf("Digite aqui seu n�mero: ");
		scanf("%i", &numero);
	
		resto = numero % 2;
		
		if (resto == 0 && numero != 0){
			somaPares += numero;
			numerosPares++;
			mediaPares = somaPares / numerosPares;
		} else if (resto == 1){
			somaImpares += numero;
			numerosImpares++;
			mediaImpares = somaImpares / numerosImpares;
		} 
		
		somaGeral = somaPares + somaImpares;
		numerosGeral = numerosPares + numerosImpares;
		mediaGeral = somaGeral / numerosGeral;
		
		system("cls");
	}
	
	printf("\n===== Exibindo Resultados =====");
	printf("\nQuantidade de n�meros pares: %i", numerosPares);
	printf("\nQuantidade de n�meros �mpares: %i", numerosImpares);
	printf("\nM�dia de n�meros pares: %.2f", mediaPares);
	printf("\nM�dia de n�meros �mpares: %.2f", mediaImpares);
	printf("\nM�dia geral dos n�meros: %.2f", mediaGeral);
	
	return 0;
}
