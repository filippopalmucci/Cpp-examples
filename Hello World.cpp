#include <iostream>
using namespace std;

int main () {
	int conta = 0;
	int somma = 0;
	int numero = 0;
	int n = 0;
	cout << "Quanti numeri vuoi inserire?" << endl;
	cin >> n;
	while (conta < n) {
		cout << "Inserisci un numero: " << endl;
		cin >> numero;
		media = media + numero;
		conta = conta + 1;
	}
	media = media / conta;
	cout << "La tua media è:" << endl;
	cout << media;
	system("PAUSE");
}
