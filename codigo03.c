#include <stdio.h>

int main(){
	
	//Declarando vari�veis.
	char nome[200]; //Cadeia
	char sexo; // Caracter
	int idade; // Inteiro
	float peso; // Real
	
	//Defini��o vari�veis.
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	
	fflush(stdin); //Limpa o cache de input.
	
	printf("Digite seu sexo - M ou F: ");
	scanf("%c",&sexo);
	
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	//Exibindo vari�veis.
	printf("\n=== Exibindo resultados ===\n");
	printf("Nome: %s \n", nome); // %s -> cadeia -> string
	printf("Sexo: %c \n", sexo); // %c -> caracter -> character
	printf("Idade: %i \n", idade); // %i -> real -> integer
	printf("Peso: %f \n", peso); // %f -> real -> float
	
	return 0;
}
