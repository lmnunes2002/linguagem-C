#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c;
	double delta, X1, X2;
	
	printf("Coeficiente a: ");
	scanf("%lf", &a);
	
	printf("Coeficiente b: ");
	scanf("%lf", &b);
	
	printf("Coeficiente c: ");
	scanf("%lf", &c);
	
	delta = pow(b, 2) - (4 * a * c);
	
	X1 =  (-b + sqrt(delta)) / (2 * a);
	X2 =  (-b - sqrt(delta)) / (2 * a);
	
	if (delta >= 0){
		printf("X1: %.4lf\n", X1);
		printf("X2: %.4lf", X2);
	} else if (delta < 0){
		printf("Esta equacao nao possui raizes reais");
	}

	return 0;
}
