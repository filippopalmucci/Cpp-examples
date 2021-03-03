//semplice algoritmo che calcola la media
#include <iostream>
using namespace std;

int main () {
    float numero = 0;
    float numeri = 0;
    float media = 0;
    float conta = 0;
    float somma = 0;

    cout << "Quanti numeri vuoi inserire?" << endl;
    cin >> numeri;
    while (conta < numeri) {
        cout << "Inserisci numero:" << endl;
        cin >> numero;
        somma = somma + numero;
        conta++;
    }
    media = somma / conta;
    cout << "La media e':" << endl;
    cout << media;
}