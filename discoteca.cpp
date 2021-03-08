//Dati in ingresso il numero dei maschi e delle femmine che entrano in discoteca, calcola e mostra il prezzo totale sapendo che i primi pagano 12 euro e le seconde 10 euro
#include <iostream>
using namespace std;

int main () {
    int maschi = 0;
    int femmine = 0;
    int costoTOT = 0;
    int costoM = 0;
    int costoF = 0;

    cout << "Quanti maschi entrano in discoteca?" << endl;
    cin >> maschi;
    cout << "Quante femmine entrano in discoteca?" << endl;
    cin >> femmine;

    costoM = maschi * 12;
    costoF = femmine * 10;
    costoTOT = costoM + costoF;

    cout << "Il costo totale dei biglietti per i maschi e' di:" << endl;
    cout << costoM << " euro" << endl;
    cout << "Il costo totale dei biglirtti per le femmine e' di:" << endl;
    cout << costoF << " euro" << endl;
    cout << "Il costo totale dei biglietti dei maschi e delle femmine e' di:" << endl;
    cout << costoTOT << " euro" << endl;
}