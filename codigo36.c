#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<limits.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int codigo, idade, habitantes, mulherSalario = 0, maiorNumero = INT_MIN, menorNumero = INT_MAX;
	float salario, mediaGrupo, somaSalario;
	char sexo;
	
	printf("Código |  Descrição\n");
	printf("   1   | Adicionar pessoa\n");
	printf("   2   | Exibir resultados e sair\n");
	printf("\nEscolha seu código: ");
	scanf("%i", &codigo);

	if(codigo != 1 && codigo != 2){
		printf("\nDigite um código válido: ");
		scanf("%i", &codigo);
	}
	
	if(codigo == 2){
		printf("Encerrando sistema...\n");
	}
	
	while(codigo == 1){
		system("cls");
		fflush(stdin);
		
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
		} else if(idade == 0){
			maiorNumero = 0;
		}
		
		if(idade < menorNumero){
			menorNumero = idade;
		}

		if(sexo == 'F' && salario >= 5.000){
			mulherSalario++;
		}
		
		mediaGrupo = somaSalario / (float) habitantes;
		
		printf("Escolha seu código: ");
		scanf("%i", &codigo);
	}
	
	printf("\n===== Exibindo Resultados =====");
	printf("\nMédia de sálario do grupo: %.2f", mediaGrupo);
	printf("\nMaior idade do grupo: %i", maiorNumero);
	printf("\nMenor idade do grupo: %i", menorNumero);
	printf("\nMulheres com salário alto: %i", mulherSalario);
	
	return 0;
}
