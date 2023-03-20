#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	// Deklaration
	double Fallbeschleunigung = 9.81; // Fallbeschleunigung
	double Anfangsgeschwindigkeit = 0; // Anfangsgeschwindigkeit
	double Hoehe = 0; // Fallhöhe

	// Deklaration Ergebnisse
	double Zusammenhang0 = 0;
	double Zusammenhang1 = 0;
	double Zusammenhang2 = 0;
	double Zusammenhang3 = 0;

	// Deklaration Zeiten
	double Zeit0 = 0;
	double Zeit1 = 1;
	double Zeit2 = 2;
	double Zeit3 = 3;

	//Eingabe von Werten
	cout << "Bitte eine Anfangsgeschwindigkeit angeben: ";
	cin >> Anfangsgeschwindigkeit;
	cout << "Bitte eine Starthoehe angeben: ";
	cin >> Hoehe;

	// Berechnung
	cout << "Mit diesem Programm können wird der Zusammenhang zwischen Zeit und Höhe eines Gegenstands berechnen" << endl << endl;

	Zusammenhang0 = -0.5 * Fallbeschleunigung * pow(Zeit0, 2) + Anfangsgeschwindigkeit * Zeit0 + Hoehe;
	Zusammenhang1 = -0.5 * Fallbeschleunigung * pow(Zeit1, 2) + Anfangsgeschwindigkeit * Zeit1 + Hoehe;
	Zusammenhang2 = -0.5 * Fallbeschleunigung * pow(Zeit2, 2) + Anfangsgeschwindigkeit * Zeit2 + Hoehe;
	Zusammenhang3 = -0.5 * Fallbeschleunigung * pow(Zeit3, 2) + Anfangsgeschwindigkeit * Zeit3 + Hoehe;

	// Ergebnisausgabe
	cout << "Die Formel dafuer lautet wie folgt: " << endl;
	cout << "h(t) = -0.5*g*t^2+v0*t+h0" << endl << endl;

	cout << "Daraus ergibt sich: " << endl << endl;

	cout << "Die Hoehe des Gegenstandes nach " << Zeit0 << " Sekunden: " << Zusammenhang0 << endl;
	cout << "Die Hoehe des Gegenstandes nach " << Zeit1 << " Sekunden: " << Zusammenhang1 << endl;
	cout << "Die Hoehe des Gegenstandes nach " << Zeit2 << " Sekunden: " << Zusammenhang2 << endl;
	cout << "Die Hoehe des Gegenstandes nach " << Zeit3 << " Sekunden: " << Zusammenhang3 << endl;
	cout << endl;
	return 0;
}