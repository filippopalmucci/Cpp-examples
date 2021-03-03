#include <iostream>
using namespace std;

int main () {
	int conta = 0;
	int somma = 0;
	int n = 0;
	int numero = 0;
	cout << "Quanti numeri vuoi inserire?" << endl;
	cin >> n;
	
	while (conta < n) {
		cout << "Inserire il numero: " << endl;
		cin >> numero;
		conta = conta + 1;
		somma = somma + numero;
	}
	cout << "La somma e': " << endl;
	cout << somma;
}
