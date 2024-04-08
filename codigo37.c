#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

int main(){
	int salario, filhos, codigo;
	int somaFilhos = 0, somaSalario = 0, totalFamilias = 0, maiorSalario = INT_MIN, menorSalario = INT_MAX;
	float mediaSalario, mediaFilhos;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("C�digo |  Descri��o");
	printf("\n   1   |  Adicionar fam�lia");
	printf("\n   2   |  Sair e exibir resultados");
	printf("\n\nDigite aqui seu c�digo: ");
	scanf("%i", &codigo);
	
	system("cls");
	
	if(codigo != 1 && codigo != 2){
		printf("Digite um c�digo v�lido: ");
		scanf("%i", &codigo);
	}
	
	system("cls");
	
	while(codigo == 1){
		totalFamilias++;
		printf("Digite aqui o sal�rio da fam�lia: ");
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
		
		printf("Digite aqui seu c�digo: ");
		scanf("%i", &codigo);
		
		if(codigo != 1 && codigo != 2){
			printf("Digite um c�digo v�lido: ");
			scanf("%i", &codigo);	
		}
		
		system("cls");
	}
	
	if(salario == 0){
		maiorSalario = 0;
		menorSalario = 0;
	}
	
	printf("=== Exibindo Resultados ===");
	printf("\nTotal de fam�lias: %i", totalFamilias);
	printf("\nM�dia do sal�rio: %.2f", mediaSalario);
	printf("\nM�dia de filhos: %.1f", mediaFilhos);
	printf("\nMaior sal�rio: %i", maiorSalario);
	printf("\nMenor sal�rio: %i", menorSalario);
	
	return 0;
}
