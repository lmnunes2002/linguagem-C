#include <stdio.h>

int main(){
	int contador = 0;
	char continua;
	
	do {
		printf("Repetindo....\n");
		contador = contador++;
		
		printf("Tecle 's' se deseja continuar\n");
		scanf("%c", continua);
		setbuf(stdin, 0);
	} while (continua == 's');
	
	printf("O bloco foi repetido %i vezes", contador);
	
	return 0;
}
