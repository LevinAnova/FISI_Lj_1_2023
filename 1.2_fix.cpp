
#include <iostream>
using namespace std;

int main()
{
	double Spannung = 220;
	double Widerstand = 100;
	double Stromstaerke = 0;

	Stromstaerke = Spannung / Widerstand;
	cout << endl;
	cout << "*****************************"<< endl << endl;
	cout << "Die Stromst" << char(132) << "rke betr" << char(132) << "gt: " << Stromstaerke << "A" << endl << endl;
	cout << "*****************************" << endl << endl;
	return 0;
}
