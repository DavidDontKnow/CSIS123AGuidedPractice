/*
Fraction.h
David Gutierrez
Guided Practice 3
11/07/24
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

	//accessors
	int getNum() const;
	int getDen() const;


	//constructor
	Fraction();
	Fraction(int n, int d);
	Fraction(std::string frac);


	//opertator overloading
	Fraction operator+(const Fraction& f);
	Fraction operator-(const Fraction& f);
	Fraction operator*(const Fraction& f);
	Fraction operator/(const Fraction& f);
	Fraction& operator=(const Fraction& f);

};


#endif 

