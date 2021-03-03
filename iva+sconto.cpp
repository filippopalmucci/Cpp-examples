//inserito il prezzo, se supera 100, ha uno sconto del 35% e gli venga applicata l'iva al 22% e restituisca l'importo finito.
#include <iostream>
using namespace std;

int main () {
    float prezzo = 0;
    float prezzoF = 0;
    float sconto = 0;
    float iva = 0;

    cout << "Inserisci il prezzo:" << endl;
    cin >> prezzo;
    if (prezzo > 100) {
        prezzo = prezzo * 65;
        prezzo = prezzo / 100;
        prezzo = prezzo * 122;
        prezzoF = prezzo / 100;
    }
    else {
        prezzo = prezzo * 122;
        prezzoF = prezzo / 100;
    }
    cout << "Il prezzo finale e':" << endl;
    cout << prezzoF;
}