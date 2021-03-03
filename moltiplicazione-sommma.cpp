#include <iostream>
using namespace std;

int main () {
	int numero, moltiplicatore;
	int somma = 0;
	cout << "Inserisci il numero da moltiplicare: " << endl;
	cin >> numero;
	
	cout << "Inserici il moltiplicatore: " << endl;
	cin >> moltiplicatore;
	
	for(int index = 0; index < moltiplicatore; index++) {
		somma += numero;
	}
	cout << somma;
}
