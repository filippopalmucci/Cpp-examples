#include <iostream>   
#include <stdlib.h>    
#include <time.h>      
#include <vector>      
#include <algorithm>   
using namespace std;

int main () {
	int calcolatrice() {
   int scelta;
   int programma;
   cout << "Seleziona tipo di operazione" << endl;
   cout <<"1.somma" << endl  << "2.sottrazione" << endl << "3.moltiplicazione" << endl << "4.divisione" << endl;
   cin >> scelta;
    if(scelta == 1){

        int addendo_1;
        int addendo_2;
        int somma;
        cout << "addendo 1:" << endl;
        cin >> addendo_1;
        cout << "addendo 2" << endl;
        cin>> addendo_2;
        somma = addendo_1 + addendo_2;
        cout << "Risulato: " << somma << endl;

    } else if(scelta == 2) {

        int minuendo;
        int sottraendo;
        int differenza;
        cout << "minuendo:" << endl;
        cin >> minuendo;
        cout << "sottraendo" << endl;
        cin>> sottraendo;
        differenza = minuendo - sottraendo;
        cout << "Risulato: " << differenza << endl;

    } else if(scelta == 3) {

        int fattore_1;
        int fattore_2;
        int prodotto;
        cout << "fattore 1: " << endl;
        cin >> fattore_1;
        cout << "fattore 2 " << endl;
        cin>> fattore_2;
        prodotto= fattore_1 * fattore_2;
        cout << "Risultato: " << prodotto << endl;

    } else if(scelta == 4) {

        int dividendo;
        int divisore;
        int quoziente;
        cout << "dividendo: " << endl;
        cin >> dividendo;
        cout << "divisore " << endl;
        cin>> divisore;
        quoziente= dividendo / divisore;
        cout << "Risultato: " << quoziente << endl;

    }
    
    cout << "Vuoi uscire o ricominciare?" << endl;
    cout << "1.termina il programma" << endl;
    cout << "2.riavviare il programma" << endl;
    cin >> programma;
    while (programma = 2) {
	}
    if(scelta == 1){
    	system("PAUSE");
	}
}
}
	
