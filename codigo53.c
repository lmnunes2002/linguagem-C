#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
//Linguagem.
setlocale(LC_ALL, "portuguese");

//Declarando vari�veis.
int notasUm [2];
int notasDois [2];
int i, j;

//Definindo vari�veis.
printf("==== Pedindo notas ====\n");
for (i = 0; i < 3; i++){
  printf("Digite aqui a %i� nota: ", i+1);
  scanf("%i", &notasUm[i]);
}

printf("\n");
  
for (j = 0; j < 3; j++){
  printf("Digite aqui a %i� nota: ", j+1);
  scanf("%i", &notasDois[j]);
}

system("cls");

//Exibindo resultados.
printf("=== Valor das notas ===");
printf("\n.Notas de Maria Silva: ");
for (i = 0; i < 3; i++){
  printf("\n -%i� nota: %i", i+1, notasUm[i]);
}

printf("\n\n.Notas de Jo�o Santos: ");
for (j = 0; j < 3; j++){
  printf("\n -%i� nota: %i", j+1, notasDois[j]);
}

return 0;
}
