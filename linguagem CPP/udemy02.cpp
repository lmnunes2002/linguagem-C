#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	string nome_Um, nome_Dois;
	int idade_Um, idade_Dois;
	double media;
	
	cout << "Dados da primeira pessoa: " << endl;
	cout << "Nome: ";
	getline(cin, nome_Um);
	cout << "Idade: ";
	cin >> idade_Um;
	
	cout << "Dados da segunda pessoa: " << endl;
	cout << "Nome: ";
	cin.ignore(INT_MAX, '\n');
	getline(cin, nome_Dois);
	cout << "Idade: ";
	cin >> idade_Dois;
	
	media = (idade_Um + idade_Dois) / 2.0;
	cout << fixed << setprecision(1);
	cout << "A idade media de " << nome_Um << " e " << nome_Dois << " e de " << media << " anos.";
	
	return 0;
}
