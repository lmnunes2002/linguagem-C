#include <stdio.h>

int main() {
    int n, i, countMenos16 = 0;
    float alturaTotal = 0.0;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char nomes[n][100]; 
    int idades[n];      
    float alturas[n];   

    for (i = 0; i < n; i++) {
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        scanf("%s", nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%f", &alturas[i]);

        alturaTotal += alturas[i]; 
        if (idades[i] < 16) {
            countMenos16++; 
        }
    }

    float alturaMedia = alturaTotal / n;
    float porcentagemMenos16 = (countMenos16 * 100.0) / n;

    printf("Altura media: %.2f\n", alturaMedia);
    printf("Pessoas com menos de 16 anos: %.1f%%\n", porcentagemMenos16);

    for (i = 0; i < n; i++) {
        if (idades[i] < 16) {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}

