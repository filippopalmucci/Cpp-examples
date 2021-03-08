//L’algoritmo stampa a video i primi 50 numeri dispari partendo da 1
#include <iostream>
using namespace std;

int main () {
    int numero = 1;

    cout << "I primi 50 numeri dispari sono:" << endl;

    for (int conta = 0; conta < 50; conta++) {
        cout << numero << endl;;
        numero += 2;
    }
}