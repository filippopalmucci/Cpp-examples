#include <iostream>
using namespace std;

int main () {
    float lato = 0;
    float volume = 0;

    cout << "Inserire il valore del lato:" << endl;
    cin >> lato;
    volume = lato * lato * lato;
    cout << "Il volume e':" << endl;
    cout << volume;
}