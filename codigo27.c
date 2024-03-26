#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
	float nota;
	
	do{
		printf("Insira aqui sua nota: ");
		scanf("%f", &nota);
	} while (nota > 0.0 || nota <= 10.0);
	
	printf("\n=== Exibindo Nota ===\n");
	printf("Nota: %.2f", nota);
	
	return 0;
}
