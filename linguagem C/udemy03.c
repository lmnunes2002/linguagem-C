#include <stdio.h>
#include <string.h>

int main(){
	char nome1[50], nome2[50];
	int idade1, idade2;
	double idadeMedia;
	
	printf("Dados da primeira pessoa: \n");
	printf("Nome: ");
	fgets(nome1, 50, stdin);
	nome1[strcspn(nome1, "\n")] = 0;
	printf("Idade: ");
	scanf("%d", &idade1);
	
	fflush(stdin);
	
	printf("Dados da segunda pessoa: \n");
	printf("Nome: ");
	fgets(nome2, 50, stdin);
	nome2[strcspn(nome2, "\n")] = 0;
	printf("Idade: ");
	scanf("%d", &idade2);
	
	idadeMedia = (double)(idade1 + idade2) / 2.0;
	 
	printf("A idade media de %s e %s e de %.1lf anos.", nome1, nome2, idadeMedia);
	return 0;
}
