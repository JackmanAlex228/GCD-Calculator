#include <iostream>
#include "rational.h"
using namespace std;

int main() {

	// greeting
	cout << "Enter a fraction and this program will reduce it to its lowest terms\n"
		 << "enter 0 for the denominator to quit";

	Fraction set;

	do {

		// the fraction is gotten from the user
		set.setNum();
		set.setDen();

		// the values for the fraction is gotten for the output
		set.getNum();
		set.getDen();

		// the reduced fraction is outputted
		if (set.getDen() > 0)
			set.lcdOutput();
		else
			cout << "\nTerminating the program\n\n";

	} while (set.getDen() != 0);
}