/*
Fraction.cpp
David Gutierrez
Guided Practice 4
11/11/24
*/

#include <iostream>
#include "Fraction.h"
#include <string>

using namespace std;

//default constructor
Fraction::Fraction() {
	this->setFraction(1, 1);
}

//overloaded constructor
Fraction::Fraction(int n, int d) {
	this->setFraction(n, d);
}

//overloaded constructor that takes a string and converts to int
Fraction::Fraction(std::string frac) {
	int n = stoi(frac.substr(0, frac.find("/")));
	int d = stoi(frac.substr(frac.find("/") + 1, frac.length()));
	this->setFraction(n, d);
}


void Fraction::setFraction(int n, int d) {
	this->num = n;
	this->den = d;

}

Fraction Fraction::add(const Fraction& f) {
	Fraction tmp;
	tmp.num = (num * this->den) + (this->num * den);
	tmp.den = (this->den * den);
	return tmp;
}

Fraction Fraction::sub(const Fraction& f) {
	Fraction tmp;
	tmp.num = (num * this->den) - (this->num * den);
	tmp.den = (this->den * den);
	return tmp;
}

void Fraction::printFraction() {
	cout << getNum() << "/" << getDen() << endl;
}

Fraction Fraction::mult(const Fraction& f) {
	Fraction tmp;
	tmp.num = num * this->num;
	tmp.den = den * this->den;
	return tmp;
}

Fraction Fraction::div(const Fraction& f) {
	Fraction tmp;
	tmp.num = num * this->den;
	tmp.den = den * this->num;
	return tmp;
}

Fraction Fraction::operator+(const Fraction& f) {
	return this->add(f);
}

Fraction Fraction::operator-(const Fraction& f) {
	return this->sub(f);
}

Fraction Fraction::operator*(const Fraction& f) {
	return this->mult(f);
}

Fraction Fraction::operator/(const Fraction& f) {
	return this->div(f);
}

Fraction& Fraction::operator=(const Fraction& f) {
	this->setFraction(f.getNum(), f.getDen());
	return *this;
}


std::istream& operator>>(std::istream& input, Fraction& f) {
	cout << "Enter the numerator: ";
	std::cin >> f.num;
	cout << "Enter the denominator: ";
	//check for 0
	do {
		std::cin >> f.den;
		if (f.den == 0) {
			cout << "Denominator cannot be 0. Please enter a new value: ";
		}
	} while (f.den == 0);

	return input;
}

std::ostream& operator<<(std::ostream& output, Fraction& f) {
	output << f.getNum() << "/" << f.getDen() << endl;
	return output;
}

int Fraction::getNum() const {
	return this->num;
}

int Fraction::getDen() const {
	return this->den;
}

