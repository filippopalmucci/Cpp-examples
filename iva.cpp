#include <iostream>
using namespace std;

int main () {
    float prezzoI = 0;
    float prezzoF = 0;
    float iva = 0;
    
    cout << "Benvenuto, questo e' un programma che calcola l'IVA." << endl;
    cout << "(se si vogliono inserire prezzi decimali utilizzare il punto = .)" << endl;

    cout << "Inserisci un prezzo" << endl;
    cin >> prezzoI;

    iva = prezzoI * 22 / 100;
    prezzoF = prezzoI + iva;

    cout << "Il prezzo finale e':" << endl;
    cout << prezzoF << endl;

    cout << "L'IVA da importare e':" << endl;
    cout << iva << endl;
}