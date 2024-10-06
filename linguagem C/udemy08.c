#include <stdio.h>

int main(){
	int cont, idade, soma;
	double media;
	
	soma = 0;
	cont = 0;
	
	printf("Digite as idades: \n");
	scanf("%d", &idade);
		
	if (idade > 0){
		soma += idade;
		cont += 1;
	} 

	while (idade > 0) {
		scanf("%d", &idade);
		
		if (idade > 0){
			soma += idade;
			cont += 1;
		}
	} 
	
	if (cont == 0){
		printf("Impossivel calcular.\n");
	} else {
		media = (double) soma/cont;
		printf("Media: %.2lf", media);
	}
}
