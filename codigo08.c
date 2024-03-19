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
scanf("%.1f %.1f %.1f", &notaUm, &notaDois, &notaTres);

system("cls");

//Calculadora.
float media = (notaUm + notaDois + notaTres) / 3;
float soma = notaUm + notaDois + notaTres;

//Exibindo variáveis.
printf("Nome do aluno: %s", nome);
printf("\nIdade do aluno: %i anos", idade);
printf("\nSoma das notas: %.1f", soma);
printf("\nMedia do aluno: %.1f", media);

//Condicional.
if (media >= 7.0 && media <= 10.0){
	printf("Parabéns, você foi aprovado(a)");
} else if (media >= 0.0 && media < 7.0) {
	printf("Você foi reprovado(a)");
} else {
	printf("Digite um valor de nota válido");
}

return 0;
}
