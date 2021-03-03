#include <iostream>
using namespace std;

int main () {
    float base = 0;
    float altezza = 0;
    float area = 0;

    cout << "Inserisci la base:" << endl;
    cin >> base;
    cout << "Inserire l'altezza:" << endl;
    cin >> altezza;

    area = base * altezza;
    cout << "La base e':" << endl;
    cout << area;
}