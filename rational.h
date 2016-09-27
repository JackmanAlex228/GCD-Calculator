#include <math.h> // for the fmod object

// The class is declared in the header file
class Fraction {

private:
	int num;
	int den; 
	int fraction;
	int index; // member initilizations aren't allowed in compilers like Visual Studio 2010

public:
	void setNum();
	void setDen();
	int getNum();
	int getDen();
	void lcdOutput();

	// The gcd object
	int gcd(double num, double den) {
		if (den == 0)
			return num;
		return gcd(den, fmod(num, den));
	}
};