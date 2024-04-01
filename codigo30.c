#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	//Linguagem.
	setlocale(LC_ALL, "portuguese");
	
	//Declarando variáveis.
	float notaUm, notaDois, media, nota, somaNota = 0.0, contador = 0.0;
	char resposta;
	int i, numeroNotas = 0;
	
	//Definindo variáveis.
	printf("Digite a primeira nota: ");
	scanf(" %f", &notaUm);
	
	printf("Digite a segunda nota: ");
	scanf(" %f", &notaDois);
	
	fflush(stdin);
	
	printf("Você deseja inserir mais notas (s ou n)? ");
	scanf(" %c", &resposta);
	
	if (resposta == 's'){
		printf("Quantas notas vc deseja inserir: ");
		scanf(" %i", &numeroNotas);
		for(i = 1; i <= numeroNotas; i++){
			printf("Digite sua nota extra: ");
			scanf(" %f", &nota);
			somaNota += nota;
		} 
	} else {
		printf("Prosseguindo...\n");
	}
	
	media = (notaUm + notaDois + somaNota) / (2.0 + numeroNotas);
	
	//Exibindo resultados.
	printf("\n===== Resultados =====");
	printf("\nMédia aritmética: %.2f", media);
	printf("\nQuantidade de notas extras: %i", numeroNotas);
	
	return 0;
}
