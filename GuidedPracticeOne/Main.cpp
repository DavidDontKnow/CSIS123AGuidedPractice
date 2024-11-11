/*
Main.cpp
David Gutierrez
Guided Practice 4
11/11/24
*/


#include <iostream>
#include "fraction.h"
#include <string>

using namespace std;


int main() {
	string test = "43/48";

	Fraction f1(test), f2, f3, f4;

	
	cin >> f2;
	cin >> f3;

	cout << f1 << endl;
	cout << f2 << endl;
	cout << f3 << endl;

	f4 =  f2 + f3;

	cout << f4 << endl;

	return 0;
}

