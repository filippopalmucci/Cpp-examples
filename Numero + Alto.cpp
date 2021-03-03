#include <iostream>
using namespace std;

int main () {
	int numero = 0;
	int index = 0;
	int n = 0;
	int valore = 0;
	cout << "Inserire il numero di valori: ";
	cin >> numero;
	while (index < numero) {
		cout << "Inserire il valore: ";
		cin >> valore;
		if (valore > n) {
			n = valore;
		}
		index++;
	}
	cout << "Il valore più alto tra quelli inseriti e': " << n << endl;
	system("PAUSE");
}
