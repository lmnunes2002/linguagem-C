#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float notaUm, notaDois, media, nota, somaNota = 0.0, contador = 0.0;
	char resposta;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &notaUm);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &notaDois);
	
	do{
		printf("Você deseja inserir mais notas: ");
		scanf ("%c", &resposta);
		somaNota += nota;
		contador + 1.0;
	} while (resposta == 'n');
	
	media = (notaUm + notaDois + somaNota) / 2.0 + contador;
	
	//Exibindo resultados.
	printf("\n=== Resultados ===");
	printf("\nMédia aritmética: %.2f", media);
	printf("\nQuantidade de notas extras: %.f", contador);
	
	return 0;
}
