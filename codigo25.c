#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Linguagem.
	setlocale (LC_ALL, "portuguese");
	
	//Declarando vari�veis.
	float nota, soma, media;
	int i;
	
	//La�o de repeti��o.
	for(i = 1; i <=3; i++){
		printf("Digite aqui sua %i� nota: ", i);
		scanf("%f", &nota);	
		soma += nota;
	}
	
	//Calculadora.
	media = soma / 3.0;
	
	//Condicional.
	if(media >= 7){
		printf("Parab�ns sua m�dia foi de %.2f, voc� est� aprovado(a)", media);
	} else {
		printf("Sua m�dia foi de %.2f, voc� foi reprovado(a)", media);
	}
	
	return 0;
}
