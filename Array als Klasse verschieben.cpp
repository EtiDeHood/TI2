//Ab hier Header Datei "Array.h"
#include <iostream>
using namespace std;

class Array{
public:
	Array(int a, int b, int c, int d);
	void Verschieben(int v);
	int Neu(int n);
	void Auskunft();
private:
	int Werte[4];
};

//Ab hier Datei "meinArray.cpp"
#include "Array.h"

Array::Array(int a, int b, int c, int d){
	Werte[0] = a;
	Werte[1] = b;
	Werte[2] = c;
	Werte[3] = d;

	cout << endl << "Das Array wurde erstellt und sieht wie folgt aus:" << endl;
	for (int i = 0; i < 4; i++){
		cout << Werte[i] << "  ";

	}
	cout << endl << endl;
};

void Array::Verschieben(int v){
	int veff = v % sizeof(Werte);
	int help[4];
	for (int i = 0; i < 4; i++){
		help[i] = Werte[i];
	}
	for (int i = 0; i < 4; i++){
		Werte[i] = help[(i + veff) % 4];
	}
}; 

int Array::Neu(int n){
	int help[4];
	for (int i = 0; i < 4; i++){
		help[i] = Werte[i];
			}
	Werte[0] = n;
	for (int i = 1; i < 4; i++){
		Werte[i] = help[(i-1)];
	}
	return help[3];

};

void Array::Auskunft(){
	cout << endl << "Das Array beinhaltet nun folgende Zahlen:" << endl;
	for (int i = 0; i < 4; i++){
		cout << Werte[i] << "  ";
	}
	cout << endl;
};

//Ab hier Datei "Main.cpp"
#include "Array.h"

void main(void){
	int aa, bb, cc, dd;
	int vv = 0;
	int nn = 0;
	int rr = 0;
	int ToDo=0;

	cout << "Geben Sie vier Intecher in das Array ein:" << endl;
	cin >> aa >> bb >> cc >> dd;
	Array meinArray(aa, bb, cc, dd);

	
	do{
		cout << "Zum Verschieben: 1" << endl << "Zum Hinzufügen eines neuen Wertes: 2" << endl << "Zum Anzeigen des Arrays: 3" << endl << "Zum Beenden: 0" << endl;
		cin >> ToDo;
		if (ToDo == 1){
			cout << "Um wie viel Stellen soll das Array verschoben werden?" << endl;
			cin >> vv;
			meinArray.Verschieben(vv);
		}
		else if (ToDo == 2){
			cout << "Welchen Wert möchten Sie dem Array hinzufügen?" << endl;
			cin >> nn;
			rr = meinArray.Neu(nn);
			cout << endl << "Aus dem Array fällt folgendes heraus: " << rr << endl << endl;
		}
		else if (ToDo == 3){
			meinArray.Auskunft();
		}
	} while (ToDo != 0);

}
