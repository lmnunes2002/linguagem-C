#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portugues");
	
	//Definição de variáveis.
	char nomeAluno[50], aprovacao[50];
	char conceito;
	float notaUm, notaDois, media;
	
	//Declaraçaõ de variáveis.
	printf("Digite aqui o nome do aluno: ");
	fgets(nomeAluno, 50, stdin);
	printf("Digite aqui a primeira nota: ");
	scanf("%f", &notaUm);
	printf("Digite aqui a segunda nota: ");
	scanf("%f", &notaDois);
	
	fflush(stdin);
	
	//Calculadora.
	media = (notaUm + notaDois) / 2;
	
	//Condicional.
	if (media >= 9.0){
		strcpy (aprovacao, "Aprovado(a)");
		conceito = 'A';
	} else if((media >= 7.5) && (media < 9.0)){
		strcpy (aprovacao, "Aprovado(a)");
		conceito = 'B';
	} else if((media >= 6.0) && (media < 7.5)){
		strcpy (aprovacao, "Aprovado(a)");
		conceito = 'C';
	} else if((media >= 4.0) && (media < 6.0)){
		strcpy (aprovacao, "Reprovado(a)");
		conceito = 'D';
	} else if(media < 4.0){
		strcpy (aprovacao, "Reprovado(a)");
		conceito = 'E';
	} else {
		printf("Média inválida");
	}
	
	//Exibindo variáveis.
	printf("\n=== Exibindo resultados ===\n");
	printf("\nNome do aluno: %s", nomeAluno);
	printf("\nNota um: %.2f", notaUm);
	printf("\nNota dois: %.2f", notaDois);
	printf("\nMédia: %.2f", media);
	printf("\nAprovação: %s", aprovacao);
	printf("\nConceito: %c", conceito);
	
	return 0;
}
