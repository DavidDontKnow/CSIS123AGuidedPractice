/*
Fraction.cpp
David Gutierrez
Guided Practice 2
10/24/2024
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
	cout << num << "/" << den << endl;
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