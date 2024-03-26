#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Linguagem.
	setlocale (LC_ALL, "portuguese");
	
	//Declarando variáveis.
	float nota, soma, media;
	int i;
	
	//Laço de repetição.
	for(i = 1; i <=3; i++){
		printf("Digite aqui sua %iª nota: ", i);
		scanf("%f", &nota);	
		soma += nota;
	}
	
	//Calculadora.
	media = soma / 3.0;
	
	//Condicional.
	if(media >= 7){
		printf("Parabéns sua média foi de %.2f, você está aprovado(a)", media);
	} else {
		printf("Sua média foi de %.2f, você foi reprovado(a)", media);
	}
	
	return 0;
}
