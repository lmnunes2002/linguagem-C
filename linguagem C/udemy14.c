#include <stdio.h>

int main(){
	int N, negativos;
	
	negativos = 0;
	
	pritnf("Qual a ordem da matriz? ");
	scanf("%d", &N);
	int mat[N][N];
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			printf("Elemento [%d][%d]", i+1, j+1);
			scanf("%d", &mat[i][j]);
			
			if(mat[i][j] < 0){
				negativos++;
			}
		}
	}
	
	pritnf("DIAGONAL PRINCIPAL: \n");
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if(i == j){
				printf("%d ",mat[i][j]);
			}
		}
	}
	
	printf("\nQUANTIDADE DE NEGATIVOS: %d\n", negativos);

}
