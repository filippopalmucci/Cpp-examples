//Dati in ingresso 5 valori diversi, l'algoritmo stampa a video il valore massimo (NB: non utilizzare tutti i confronti)
#include <iostream>
using namespace std;

int main () {
	int conta = 0;
	int alto = 0;
    for (int valore = 0; conta < 5;) {
        cout << "Inserisci il valore:" << endl;
        cin >> valore;
        if (valore > alto) {
            alto = valore;
        }
        conta++;
    }
    cout << "Il numero piu' alto e':" << endl;
    cout << alto << endl;
}