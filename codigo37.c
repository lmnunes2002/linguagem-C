#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

int main(){
	int salario, filhos, codigo;
	int somaFilhos = 0, somaSalario = 0, totalFamilias = 0, maiorSalario = INT_MIN, menorSalario = INT_MAX;
	float mediaSalario, mediaFilhos;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Código |  Descrição");
	printf("\n   1   |  Adicionar família");
	printf("\n   2   |  Sair e exibir resultados");
	printf("\n\nDigite aqui seu código: ");
	scanf("%i", &codigo);
	
	system("cls");
	
	if(codigo != 1 && codigo != 2){
		printf("Digite um código válido: ");
		scanf("%i", &codigo);
	}
	
	system("cls");
	
	while(codigo == 1){
		totalFamilias++;
		printf("Digite aqui o salário da família: ");
		scanf("%i", &salario);
		somaSalario += salario;
		
		printf("Digite a quantidade de filhos: ");
		scanf("%i", &filhos);
		somaFilhos += filhos;
		
		mediaSalario = somaSalario / (float) totalFamilias;
		mediaFilhos = somaFilhos / (float) totalFamilias;
		
		if(mediaSalario == 0.0){
			maiorSalario = 0;
			menorSalario = 0;
		}
		
		if(salario > maiorSalario){
			maiorSalario = salario;
		}
		
		if(salario < menorSalario){
			menorSalario = salario;
		}
		
		printf("Digite aqui seu código: ");
		scanf("%i", &codigo);
		
		if(codigo != 1 && codigo != 2){
			printf("Digite um código válido: ");
			scanf("%i", &codigo);	
		}
		
		system("cls");
	}
	
	if(salario == 0){
		maiorSalario = 0;
		menorSalario = 0;
	}
	
	printf("=== Exibindo Resultados ===");
	printf("\nTotal de famílias: %i", totalFamilias);
	printf("\nMédia do salário: %.2f", mediaSalario);
	printf("\nMédia de filhos: %.1f", mediaFilhos);
	printf("\nMaior salário: %i", maiorSalario);
	printf("\nMenor salário: %i", menorSalario);
	
	return 0;
}
