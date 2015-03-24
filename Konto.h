#include <iostream>

class Konto
{
public:
	Konto();
	void Einzahlen(double &Betrag );
	void Abholen(double &Betrag);


private:
	double Kontostand;
	double Limit;

};
