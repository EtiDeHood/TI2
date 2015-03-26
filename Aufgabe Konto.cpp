//Ab hier Header Datei
#include <iostream>
class Konto
{
public:
	Konto(int &a, int &b);
	void Einzahlen(double &Betrag);
	void Abholen(double &Betrag);
	void Abfrage();
private:
	double Kontostand;
	double Limit;
};

//Ab hier die Datei "MeinKonto.cpp"
#include "Konto.h"
using namespace std;
Konto::Konto(int &a, int &b){
	Kontostand = a;
	Limit = b;
};
void Konto::Einzahlen(double &Betrag){
	Kontostand = Kontostand + Betrag;
	cout << "Buchung durchgeführt." << endl;
};
void Konto::Abholen(double &Betrag){
	if (Betrag >= (Limit + Kontostand)){
		cout << "Vorgang nicht möglich" << endl;
	}
	else{
		Kontostand = Kontostand - Betrag;
		cout << "Buchung durchgeführt." << endl;
	}
};
void Konto::Abfrage(){
	cout << "Der Kontostand beträgt: " << Kontostand << endl << endl << endl;
}

//Ab hier die Datei "Main.cpp"
#include "Konto.h"
using namespace std;
void main(){
	int aa = 0;
	int bb = 0;

	cout << "Geben Sie den Start-Kontostand an:" << endl;
	cin >> aa;
	cout << "Geben Sie das Dispo Limit an:" << endl;
	cin >> bb;

	Konto meinKontoA(aa, bb);
	double x = 0;
	int EinAus = 0;
	do{
		cout << "Zum Einzahlen: 1" << endl << "Zum Auszahlen: 2" << endl << "Zum Kontostand Anzeigen: 3" << endl << "Zum Beenden: 0" << endl;
		cin >> EinAus;
		if (EinAus == 1){
			cout << endl << "Wie viel wollen Sie Einzahlen?" << endl;
			cin >> x;
			meinKontoA.Einzahlen(x);
		}
		else if (EinAus == 2){
			cout << endl << "Wie viel wollen Sie Abheben?" << endl;
			cin >> x;
			meinKontoA.Abholen(x);
		}
		else if (EinAus == 3){
			cout << endl;
			meinKontoA.Abfrage();
		}
		else{
		}
	} while (EinAus != 0);
}
