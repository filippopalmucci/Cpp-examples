//realizzare un algoritmo che inseriti n numeri, calcoli il minore e restituisca la posizione.
#include <iostream>
using namespace std;

int main () {
    int numeri = 0;
    int conta2 = 0;
    int numero = 0;
    int ultimo = 0;

    cout << "Quanti numeri vuoi inserire?" << endl;
    cin >> numeri;

    for (int conta1 = 0; conta1 < numeri; conta1++) {
        cout << "Inserisci il numero:" << endl;
        cin >> numero;
        if (ultimo == 0) ultimo = numero;
        else if (numero < ultimo) {
            ultimo = numero;
            conta2 = conta1 + 1;
        }
    }
    cout << "Il numero piu' basso e':" << endl;
    cout << ultimo << endl;
    cout << "Ed e' il " << conta2 << " numero che hai inserito" << endl;
}