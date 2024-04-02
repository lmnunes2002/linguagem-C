#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main() {
    setlocale(LC_ALL, "");
   
    int valor, somaGeral = 0, somaPares = 0, contadorGeral = 0;
    int pares = 0, impares = 0, maiorNumero = INT_MIN, menorNumero = INT_MAX;
    int maiorInteiro = INT_MAX, menorInteiro = INT_MIN;
    float mediaGeral, mediaPares;
   
    printf("Digite um n�mero: ");
    scanf("%i",&valor);
   
    while (valor != 0) {
        if (valor > 0) {
            contadorGeral++;
            somaGeral += valor;
           
            if (valor % 2 == 0) {
                // pares = pares + 1;
                pares++;
               
                //somaPares = somaPares + valor;
                somaPares += valor;
            } else {
                impares++;
            }
            
            if(valor > maiorNumero){
				maiorNumero = valor;	
			}
			
			if(valor < menorNumero){
				menorNumero = valor;
			}
        }        
            printf("Digite um n�mero: ");
            scanf("%i",&valor);
    }
   
    if (contadorGeral == 0) {
        printf("N�o foi informado um n�mero positivo.");
    } else {
        // cast
        // 2 -> 2.0
        mediaGeral = somaGeral / (float) contadorGeral;
        mediaPares = somaPares / (float) pares;
       
        printf("Quantidade de pares: %i \n", pares);
        printf("Quantidade de �mpares: %i \n", impares);
        printf("M�dia geral: %.1f \n", mediaGeral);
        printf("M�dia de n�meros pares: %.1f \n\n", mediaPares);
        printf("Maior valor: %i\n", maiorNumero);
        printf("Menor valor: %i\n", menorNumero);
        printf("Maior inteiro: %i\n", maiorInteiro);
        printf("Menor inteiro: %i\n", menorInteiro);
    }
   
    return 0;
}
