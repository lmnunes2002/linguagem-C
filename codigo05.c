#include <stdio.h>
#include <stdlib.h>

int main(){

//Declaração de variáveis.
char nome[50];
int idade;
float notaUm, notaDois, notaTres, notaQuatro;

//Definição de variáveis.
printf("Digite o nome do aluno: ");
scanf("%s",&nome);
printf("Digite a idade do aluno: ");
scanf("%i",&idade);
printf("Digite as notas do aluno: ");
scanf("%f %f %f %f", &notaUm, &notaDois, &notaTres, &notaQuatro);

system("cls");

//Calculadora.
float media = (notaUm + notaDois + notaTres + notaQuatro) / 4;

//Exibindo variáveis.
printf("Nome do aluno: %s", nome);
printf("\nIdade do aluno: %i anos", idade);
printf("\nMedia do aluno: %f", media);
}
