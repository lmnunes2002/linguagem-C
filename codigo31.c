#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"portuguese");
	
	float nota, soma, media;
	int contador = 0;
	char resposta;
	
	do{
		printf("Digite aqui sua nota: ");
		scanf("%f", &nota);
		
		fflush(stdin);
		
		printf("Deseja inserir mais uma nota: ");
		scanf("%c", &resposta);
		resposta = toupper(resposta);
		
		soma += nota;
		contador++;
		
	} while (resposta != 'N');
	
	media = soma / contador;
	
	printf("\n=== Exibindo Resultados ===\n");
	printf("Média: %.1f", media);
	
	return 0;
}
