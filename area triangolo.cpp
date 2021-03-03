#include <iostream>
using namespace std;

int main () {
    float base = 0;
    float altezza = 0;
    float area = 0;

    cout << "Inserire il valore della base:" << endl;
    cin >> base;
    cout << "Inserire il valore dell'altezza:" << endl;
    cin >> altezza;

    area = base * altezza;
    area = area / 2;

    cout << "L'area e':" << endl;
    cout << area << endl;
}