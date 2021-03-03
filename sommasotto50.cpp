//somma dei numeri inseriti, se minori di 50
#include <iostream>
using namespace std;

int main () {
    float numeri = 0;
    float numero = 0;
    float somma = 0;
    int conta = 0;

    cout << "Quanti numeri vuoi inserire?" << endl;
    cin >> numeri;
    while (conta < numeri) {
        cout << "Inserire il numero :" << endl;
        cin >> numero;
        if (numero < 50) {
            somma = somma + numero;
        }
        conta++;
    }
    cout << "La somma totale e':" << endl;
    cout << somma << endl;
}