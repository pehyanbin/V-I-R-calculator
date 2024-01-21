#include <iostream>
using namespace std;

int main() {
	cout << "Welcome to YAN BIN's voltage current resistance calculator program." << endl;
	cout << " \n";
	cout << " \n";
	cout << "Enter the value for the voltage. If none, type in \"-404\"." << "\n";
	double voltage;
	cin >> voltage;
	cout << " \n";
	cout << "Enter the value for the current. If none, type in \"-404\"." << "\n";
	double current;
	cin >> current;
	cout << " \n";
	cout << "Enter the value for the resistance. If none, type in \"-404\"." << "\n";
	double resistance;
	cin >> resistance;
	cout << " \n";
	

	if (voltage == -404) {
		voltage = current * resistance;
		cout << "Voltage = " << voltage << " V" << endl;
	}
	else if (current == -404) {
		current = voltage / resistance;
		cout << "Current = " << current << " A" << endl;
	}
	else {

	}

	if (resistance == -404) {
		cout << "Do you want to calculate the Power of the electricity ? (1 for yes and 0 for no)" << "\n";
		bool powerboolean;
		cin >> powerboolean;
		int power;
		if (powerboolean == true) {
			power = voltage * current; 
			cout << "Power = " << power << " W" << endl;
		}
		else {
			resistance = voltage / current;
			cout << "Resistance = " << resistance << " ohms" << endl;
		}
	}
	

	
	system("pause");
	return 0;
}