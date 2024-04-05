#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>
#include <unistd.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int idade, salario, codigo, habitantes;
	int somaSalario = 0, mulherSalario = 0;
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
				printf("Digite seu salário: ");
				scanf("%i", &salario);
				somaSalario++;
				printf("Escolha seu código (1 ou 2): ");
				scanf("%i", &codigo);
				system("cls");
				break;
			case 2:
				fflush(stdin);
				system("cls");
				break;
		} 
	} while (codigo == 1 || codigo == 2);
	
	if(sexo == 'F' && salario >= 5000){
		mulherSalario++;
	}
	
	mediaSalario = salario / (float) habitantes;
	
	return 0;
}
