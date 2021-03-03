//semplice programma di conversione euro-lire, lire-euro
#include <iostream>
using namespace std;

int main () {
    float euro = 0;
    float lire = 0;
    float convertito = 0;
    int scelta;
    
    cout << "Vuoi convertire gli euro o le lire?" << endl;
    cout << "Inserire 1 per convertire gli euro" << endl;
    cout << "Inserire 2 per convertire le lire" << endl;
    cin >> scelta;
    if (scelta = 1) {
        cout << "Inserire gli euro da convertire:" << endl;
        cin >> euro;
        convertito = euro * 1936.27;
        cout << euro << " euro sono:" << endl;
        cout << convertito << " lire" << endl;
    }
    else if (scelta = 2) {
        cout << "Inserire le lire da convertire:" << endl;
        cin >> lire;
        convertito = lire / 1936.27;
        cout << lire << " lire sono:"<< endl;
        cout << convertito << " euro" << endl;
    }
}