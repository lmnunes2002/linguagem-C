#include <stdio.h>

int main(){
	float largura, comprimento, metro_quadrado;
	float area, preco_terreno;
	
	printf("Digite a largura do terreno: ");
	scanf("%f", &largura);
	
	printf("Digite o comprimento do terreno: ");
	scanf("%f", &comprimento);
	
	printf("Digite o valor do metro quadrado: ");
	scanf("%f", &metro_quadrado);
	
	area = largura * comprimento;
	preco_terreno = area * metro_quadrado;
	
	printf("Area do terreno: %.2f\n", area);
	printf("Preco do terreno: %.2f", preco_terreno);
	
	return 0;
}
