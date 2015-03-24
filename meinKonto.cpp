#include "Konto.h"

using namespace std;


Konto::Konto(){
	Kontostand = 0;
	Limit = 0;
};

void Konto::Einzahlen(double &Betrag){
	Kontostand = Kontostand + Betrag;
};

void Konto::Abholen(double &Betrag){
	if (Betrag >= (Limit + Kontostand)){
		cout << "Vorgang nicht möglich" << endl;
	}
	else{
		Kontostand = Kontostand - Betrag;
	}
	
};
