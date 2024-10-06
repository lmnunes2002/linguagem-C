#include <iostream>
using namespace std;

int main() {
	int x, y;
	int maior, menor;
	int soma_Impares = 0;
	
	cout << "Digite dois numeros: " << endl;
	
	cin >> x;
	
	cin >> y;
	
	if (x > y){
		maior = x;
		menor = y;
	} else if (x < y){
		maior = y;
		menor = x;
	} else {
		maior = 0;
		menor = 0;
	}
	
	int vet[maior];
	
	vet[0] = menor;
	
	for(int i = 1; i < maior - menor;i++){
		vet[i] = vet[i-1] + 1;
	}
	
	for(int i = 0; i < maior - menor;i++){
		if(vet[i] % 2 == 1){
			soma_Impares += vet[i];
		}
	}
	
	cout << "SOMA DOS IMPARES: " << soma_Impares << endl;
} 
