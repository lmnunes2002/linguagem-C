#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<limits.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int codigo, idade, habitantes, mulherSalario, maiorNumero = INT_MIN, menorNumero = INT_MAX;
	float salario, mediaGrupo, somaSalario;
	char sexo;
	
	printf("Código |  Descrição\n");
	printf("   1   | Adicionar pessoa\n");
	printf("   2   | Exibir resultados e sair\n");
	printf("\nEscolha seu código: ");
	scanf("%i", &codigo);
	
	if(codigo != 1 && codigo != 2){
		printf("Digite um código válido: \n");
		scanf("%i", &codigo);
	} 
	
	system("cls");
	fflush(stdin);
	
	do{
		printf("Digite seu sexo (M ou F): ");
		scanf("%c", &sexo);
		sexo = toupper(sexo);

		printf("Digite sua idade: ");
		scanf("%i", &idade);
	
		printf("Digite seu salário: ");
		scanf("%f", &salario);
		
		somaSalario += salario;
		habitantes++;
		
		if(idade > maiorNumero){
			maiorNumero = idade;
		}
		
		if(idade < menorNumero){
			menorNumero = idade;
		}
		
		if(sexo == 'F' && salario > 5.000){
			mulherSalario++;
		}
		
		mediaGrupo = somaSalario / (float) habitantes;
		
		printf("Escolha seu código: ");
		scanf("%i", &codigo);
	} while (codigo == 1);
	
	
	printf("\n===== Exibindo Resultados =====");
	printf("\nMédia de sálario do grupo: %.2f", mediaGrupo);
	printf("\nMaior idade do grupo: %i", maiorNumero);
	printf("\nMenor idade do grupo: %i", menorNumero);
	printf("\nMulheres com salário alto: %i", mulherSalario);
	
	return 0;
}
