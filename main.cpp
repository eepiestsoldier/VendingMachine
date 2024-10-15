#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
	int c;  //item number
	double n, k; //n = Nalichni ; k = dobavqne na pari
	
	cout << "Available items: \n";

	double a = 1.60;
	cout << "1. Soda - 1.60 lv.\n";
	double s = 2.60;
	cout << "2. Crossaint - 2.60 lv.\n";
	double d = 1.30;
	cout << "3. Orange Juice - 1.30 lv.\n";
	double f = 0.70;
	cout << "4. Water - 0.70 lv.\n";
	double g = 3.60;
	cout << "5. Red Bull - 3.60 lv.\n";
	double h = 2.20;
	cout << "6. Hell - 2.20 lv.\n";


	n = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "Insert money: ";
		cin >> k;

		bool v =(k != 0 && k != 0.01 && k != 0.02 && k != 0.05 && k!= 0.10 && 
			k != 0.20 && k != 0.50 && k != 1.00 && k != 2.00 && k != 5 && k != 10);
		
		if (v)
		{
			cout << "Invalid currency.\n";
			system("pause");
			return(1);
		}
		if (k == 0)
		{
			break;
		}
		
		n += k;
		cout << "Current money: " << n << fixed << setprecision(2) <<  " lv." << endl;

	}
	cout << "Item number: ";
	cin >> c;
	switch (c) {
	
	case 1: if ((n - a) < 0) { cout << "Not enough money\n"; break; }
			cout << "Soda \t" << "Cost: " << fixed << setprecision(2) << a << " lv." << endl;
			cout << "Change: " << fixed << setprecision(2) << n - a << " lv." << endl;
			break;
	
	case 2: if ((n - s) < 0) { cout << "Not enough money\n"; break; }
			cout << "Crossaint \t" << "Cost: " << fixed << setprecision(2) << s << " lv." << endl;
			cout << "Change: " << fixed << setprecision(2) << n - s << " lv." << endl;
			break;

	case 3: if ((n - d) < 0) { cout << "Not enough money\n"; break; }
			cout << "Orange Juice \t" << "Cost: " << fixed << setprecision(2) << d << " lv." << endl;
			cout << "Change: " << fixed << setprecision(2) << n - d << " lv." << endl;
			break;
	
	case 4: if ((n - f) < 0) { cout << "Not enough money\n"; break; }
			cout << "Water \t" << "Cost: " << fixed << setprecision(2) << f << " lv." << endl;
			cout << "Change: " << fixed << setprecision(2) << n - f << " lv." << endl;
			break;

	case 5: if ((n - g) < 0) { cout << "Not enough money\n"; break; }
			cout << "Red Bull \t" << "Cost: " << fixed << setprecision(2) << g << " lv." << endl;
			cout << "Change: " << fixed << setprecision(2) << n - g << " lv." << endl;
			break;

	case 6: if ((n - h) < 0) { cout << "Not enough money\n"; break; }
			cout << "Hell \t" << "Cost: "<< fixed << setprecision(2) << h << " lv." << endl;
			cout << "Change: " << fixed << setprecision(2) << n - h << " lv." << endl;
			break;

	default: cout << "Invalid item number\n";
		break;
	}


	system("pause");
	return 0;
}