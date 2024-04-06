#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>
#include <unistd.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int idade, salario, codigo;
	int habitantes = 0, somaSalario = 0, mulherSalario = 0;
	int maiorInteiro = INT_MIN, menorInteiro = INT_MAX;
	float mediaSalario;
	char sexo;
	
	printf("Código|  Descrição");
	printf("\n  1   |  Adicionar pessoa");
	printf("\n  2   |  Exibir resultados e sair");
	printf("\nEscolha seu código: ");
	scanf("%i", &codigo);
	
	system("cls");
	
	do{
		switch (codigo){
			case 1:
				fflush(stdin);
				habitantes++;
				printf("Digite seu sexo (M ou F): ");
				scanf("%c", &sexo);
				sexo = toupper(sexo);
				printf("Digite sua idade: ");
				scanf("%i", &idade);
				printf("Digite seu salário: ");
				scanf("%i", &salario);
				somaSalario += salario;
				printf("Escolha seu código (1 ou 2): ");
				scanf("%i", &codigo);
				system("cls");
				
				if(idade > maiorInteiro){
					maiorInteiro = idade;
				}
				
				if(idade < menorInteiro){
					menorInteiro = idade;
				}
				
				if(sexo == 'F' && salario >= 5000){
					mulherSalario++;
				}
				
				break;
			case 2:
				fflush(stdin);
				system("cls");
				break;
		} 
	} while (codigo == 1);
	
	mediaSalario = somaSalario / (float) habitantes;
	
	printf("==== Exibindo Resultados ====");
	printf("\nMédia de salário: %.2f", mediaSalario);
	printf("\nMulheres com salário alto: %i", mulherSalario);
	printf("\nMaior idade: %i", maiorInteiro);
	printf("\nMenor idade: %i", menorInteiro);
	
	return 0;
}
