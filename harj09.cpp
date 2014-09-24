/*****IIZO1010******
Ryhm‰: IIO14S2
Harjoitus 9
Kuvaus: K‰ytt‰j‰lt‰ kysyt‰‰n kaksi kokonaislukua,
jonka j‰lkeen ohjelma antaa valikon laskutoimituksista ja lopuksi tulostaa oikean vastauksen.
Tekij‰: Joel Kortelainen
Versio: 1.0
24.9.2014
*/
#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	int choice;

	cout << "Give n1 ";
	cin >> n1;
	cout << "Give n2 ";
	cin >> n2;

	system("cls");
	cout << "MENU " << endl;
	cout << "1. Sum " << endl;
	cout << "2. Substraction " << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. Remainder" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1: cout << n1 << " + " << n2 << " = " << n1 + n2 << " ";
		break;
	case 2: cout << n1 << " - " << n2 << " = " << n1 - n2 << " ";
		break;
	case 3:	cout << n1 << " * " << n2 << " = " << n1 * n2 << " ";
		break;
	case 4: cout << n1 << " / " << n2 << " = " << (float)n1 / n2 << " ";
		break;
	case 5: cout << n1 << " % " << n2 << " = " << n1 % n2 << " ";
		break;
	}

	return(0);
}