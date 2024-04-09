#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
//Linguagem.
setlocale(LC_ALL, "portuguese");

//Declarando variáveis.	
	int numeros[5];
	int i;

//Recebendo valor no vetor.	
	for(i = 0; i < 5; i++){
		printf("Digite o seu %d° valor: ", i +1);
		scanf("%i", &numeros[i]);
	}
	
system("cls");
	
//Exibindo valor do vetor.
	for(i = 0; i < 5; i++){
		printf("%i° elemento: %i\n", i + 1, numeros[i]);
	}

return 0;
}
