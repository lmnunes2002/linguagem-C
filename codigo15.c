#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Defini��o de vari�veis.
	char nomeAluno[50], aprovacao[50];
	char conceito;
	float notaUm, notaDois, media;
	
	//Declara�a� de vari�veis.
	printf("Digite aqui o nome do aluno: ");
	fgets(nomeAluno, 50, stdin);
	
	printf("Digite aqui a primeira nota: ");
	scanf("%f", &notaUm);
	
	printf("Digite aqui a segunda nota: ");
	scanf("%f", &notaDois);
	
	system("cls");
	
	//Calculadora.
	media = (notaUm + notaDois) / 2;
	
	//Condicional.
	if (media >= 9){
		strcpy (aprovacao, "Aprovado(a)");
		conceito = 'A';
	} else if(media <= 7.5 && media < 9){
		strcpy (aprovacao, "Aprovado(a)");
		conceito = 'B';
	}  else if(media >= 6.0 && media < 7.5){
		strcpy (aprovacao, "Aprovado(a)");
		conceito = 'C';
	} else if(media >= 4.0 && media < 6.0){
		strcpy (aprovacao, "Reprovado(a)");
		conceito = 'D';
	} else if(media < 4.0){
		strcpy (aprovacao, "Reprovado(a)");
		conceito = 'E';
	} else {
		printf("M�dia inv�lida");
	}
	
	//Exibindo vari�veis.
	printf("Nome do aluno: %s", nomeAluno);
	printf("\nNota um: %f", notaUm);
	printf("\nNota dois: %f", notaDois);
	printf("\nM�dia: %f", media);
	printf("\nAprova��o: %s", aprovacao);
	printf("\nConceito: %c", conceito);
	
	return 0;
}
