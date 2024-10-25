/*
Main.cpp
David Gutierrez
Guided Practice 2
10/24/2024
*/


#include <iostream>
#include "fraction.h"

using namespace std;

int main() {
	Fraction f1(1,4), f2(1,4), f3, f4(3, 16), f5("3/4");


	f3 = f1.add(f2);
	f3.printFraction();

	f3 = f1.sub(f2);
	f3.printFraction();

	f3 = f1.mult(f2);
	f3.printFraction();

	f3 = f1.div(f2);
	f3.printFraction();

	f4.printFraction();
	f5.printFraction();



	return 0;
}