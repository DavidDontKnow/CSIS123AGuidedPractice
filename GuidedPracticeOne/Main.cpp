/*
Main.cpp
David Gutierrez
Guided Practice 3
11/07/24
*/


#include <iostream>
#include "fraction.h"
#include <string>

using namespace std;

int main() {
	string test = "3/8";


	Fraction f1(test);
	Fraction f2;
	f2 = f1;

	Fraction f3 = f1 + f2;
	f3.printFraction();

	Fraction f4 = f1 - f2;
	f4.printFraction();

	Fraction f5 = f1 * f2;
	f5.printFraction();

	Fraction f6 = f1 / f2;
	f6.printFraction();

	return 0;
}