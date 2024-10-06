#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	int N;
	int adolescentes = 0;
	double soma_Alturas;
	double media_Alturas, media_Adolescentes;
	
	cout << "Quantas pessoas serao digitadas? ";
	cin >> N;
	
	string nomes[N];
	int idades[N];
	double alturas[N];
	
	for(int i = 0; i < N; i++){
		cout << "Dados da " << i + 1 << "a pessoa:" << endl;
		
		cout << "Nome: ";
		cin.ignore(INT_MAX, '\n');
		getline(cin, nomes[i]);
		
		cout << "Idade: ";
		cin >> idades[i];
		
		if(idades[i] < 16){
		   adolescentes++;	
		}
		
		cout << "Altura: ";
		cin >> alturas[i];
		
		soma_Alturas += alturas[i];	
	}
	
	media_Alturas = soma_Alturas / N;
	media_Adolescentes = adolescentes * 100.0 / N;
	
	cout << "Altura media: "<< fixed << setprecision(2) << media_Alturas << endl;
	cout << "Pessoas com menos de 16: "<< fixed << setprecision(2) << media_Adolescentes << "%" << endl;
	
	for(int i = 0; i < N; i++){
		if(idades[i] < 16){
			cout << nomes[i] << endl;
		}
	}
}
