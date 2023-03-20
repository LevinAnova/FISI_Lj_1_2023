// Grundlagenrechner.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;
int main()
{
	//Variablendeklaration
	double zahl1 = 0;
	double zahl2 = 0;
	double ergebnis = 0;	//Summe
	double ergebnis2 = 0;	//Quotient
	double ergebnis3 = 0;	//Produkt
	double ergebnis4 = 0;	//Differenz

	//Begrüßung
	cout << "Hallo, in diesem Programm werden ihre Angegebenen Zahlen auf 4 verschiedenen Arten berechnet";
	//Dateneingabe
	cout << endl;
	cout << "Bitte die erste Zahl angeben: ";
	cin >> zahl1;
	cout << "Bitte die zweite Zahl angeben: ";
	cin >> zahl2;
	//Berechnung
	cout << endl;
	ergebnis = zahl1 + zahl2;
	cout << "Das Ergebnis der Addition ist: " << ergebnis << endl << endl;
	ergebnis2 = zahl1 / zahl2;
	cout << "++++++++++++++++++++++++++++++++++++ " << endl << endl;
	cout << "Das Ergebnis der Division ist: " << ergebnis2 << endl << endl;
	ergebnis3 = zahl1 * zahl2;
	cout << "++++++++++++++++++++++++++++++++++++" << endl << endl;
	cout << "Das Ergebnis der Multiplikation ist: " << ergebnis3 << endl << endl;
	ergebnis4 = zahl1 - zahl2;
	cout << "++++++++++++++++++++++++++++++++++++" << endl << endl;
	cout << "Das Ergebnis der Subtraktion ist: " << ergebnis4 << endl << endl;
	cout << "++++++++++++++++++++++++++++++++++++" << endl << endl;
}

