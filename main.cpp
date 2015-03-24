#include "Konto.h"
using namespace std;

void main(){
	Konto meinKontoA;
	double *x = 0;
	int EinAus = 0;

	do{
		cout << "Zum Einzahlen: 1" << endl << "Zum Auszahlen: 2" << endl << "Zum Beenden: 0" << endl;
		cin >> EinAus;

		if (EinAus == 1){
			cout << endl << "Wie viel wollen Sie Einzahlen?" << endl;
			cin >> *x;
			meinKontoA.Einzahlen(*x);
		}

		else if (EinAus == 2){
			cout << endl << "Wie viel wollen Sie Abheben?" << endl;
			cin >> *x;
			meinKontoA.Abholen(*x);
		}

		else{

		}
	} while (EinAus != 0);
}
