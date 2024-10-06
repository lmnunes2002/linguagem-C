#include <iostream>
using namespace std;

int main(){
	int X, Y;
	
	cout << "Digite dois numeros: " <<endl;
	 cin >> X;
	 cin >> Y;
	 
	 if(X > Y){
	 	cout << "DECRESCENTE!" << endl;
	 } else if (X < Y) {
	 	cout << "CRESCENTE!" <<endl;
	 }
	 
	do{
	 cout << "Digite outros dois numeros: " <<endl;
	 cin >> X;
	 cin >> Y;
	 
	 if(X > Y){
	 	cout << "DECRESCENTE!" << endl;
	 } else if (X < Y) {
	 	cout << "CRESCENTE!" << endl;
	 }
	} while (X != Y);
	
}
