#include "rational.h"
#include <iostream>
using namespace std;

// The user is asked to enter the numberator
void Fraction::setNum() {
	cout << "\n\nEnter the numerator: ";
	cin >> num;
}

// The user is asked to enter the denominator
void Fraction::setDen() {
	cout << "Enter the denominator: ";
	cin >> den;
}

// The numberator is gotten for lcdOutput
int Fraction::getNum() {
	return num;
}

// The denominator is gotten for lcdOutput
int Fraction::getDen() {
	return den;
}

// The reduced fraction is displayed
void Fraction::lcdOutput() {
	// The gcd is alreadt calculated within the rational.h directive, creating as new gcd() object
	int index = gcd(num, den);
	cout << "\nThe fraction in lowest terms is " << num / index << "/" << den / index;
}