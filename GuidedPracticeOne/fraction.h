/*
Fraction.h
David Gutierrez
Guided Practice 2
10/24/2024
*/

#ifndef FRACTION
#define FRACTION

class Fraction {
private:
	int num;
	int den;
public:
	void setFraction(int n, int d);
	Fraction add(const Fraction& f);
	Fraction sub(const Fraction& f);
	Fraction mult(const Fraction& f);
	Fraction div(const Fraction& f);
	void printFraction();
	
	//constructor
	Fraction();
	Fraction(int n, int d);
	Fraction(std::string frac);
};


#endif 

