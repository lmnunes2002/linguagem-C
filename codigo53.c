#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
//Linguagem.
setlocale(LC_ALL, "portuguese");

//Declarando vari�veis.
char nomeAluno[2][50];
float notas[2][3];
int i, j;

//Definindo vari�veis.
printf("==== Pedindo notas ====\n");
for (i = 0; i < 2; i++){
	printf("\nDigite o nome do aluno: ");
	fgets(nomeAluno[i], 50, stdin);
  for(j = 0; j < 3; j++){
  	  printf("Digite aqui a %i� nota: ", j+1);
  	  scanf("%f", &notas[i][j]);
  }
  fflush(stdin);
}

system("cls");

//Exibindo resultados.
printf("==== Exibindo resultados ====\n");
for (i = 0; i < 2; i++){
	printf("\nNome do aluno: %s", nomeAluno[i]);
  for(j = 0; j < 3; j++){
  	printf(" -%i� nota: %.2f\n", j+1, notas[i][j]);
  }
  fflush(stdin);
}

return 0;
}
