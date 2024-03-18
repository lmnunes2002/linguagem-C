#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
//Linguagem.
setlocale(LC_ALL, "Portuguese");

//Declaração de variáveis.
char nome[50];
int idade;
float notaUm, notaDois, notaTres;

//Definição de variáveis.
printf("Digite o nome do aluno: ");
scanf("%s",&nome);
printf("Digite a idade do aluno: ");
scanf("%i",&idade);
printf("Digite as notas do aluno: ");
scanf("%f %f %f", &notaUm, &notaDois, &notaTres);

system("cls");

//Calculadora.
float media = (notaUm + notaDois + notaTres) / 3;

//Exibindo variáveis.
printf("Nome do aluno: %s", nome);
printf("\nIdade do aluno: %i anos", idade);
printf("\nMedia do aluno: %f", media);

//Condicional.
if (media >= 7.0){
	printf("Parabéns, você foi aprovado(a)");
} else {
	printf("Você foi reprovado(a)");
}

return 0;
}
