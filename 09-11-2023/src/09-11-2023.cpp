//============================================================================
// Name        : 09-11-2023.cpp
// Author      : Cecilia Da Silva
// Version     :
// Copyright   : Your copyright notice
// Description : Class 6 - 09/11
//============================================================================

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
//	int i = pow(3,7); //7 a la 3
//	cout << i << endl;
//
//	float f = sqrt(2);
//	f = sin(6);

//	int i;
//	float f;
//	i = 12345;
//	f = 12.3456;
//
//	cout << i << endl;
//	cout << f << endl;
//
//	cout << setw(20) << i << endl;
//	cout << left << setw(20) << f << endl;
//	cout << right << setw(15) << i << left << setw(26) << f << "hello" << endl;
//	cout << right << setw(15) << i << "   " << left << setw(26) << f << "hello" << endl;
//	cout << right << setw(15) << i << right << setw(26) << f << setw(7) << "hello" << endl;
//
//	cout << f << endl;
//	f = pow (f,34.45678);
//	cout << fixed << f << endl;
//	cout << scientific << f << endl;
//	cout << fixed;
//	f = 123.00;
//	cout << f << endl;
//	f = 123.456;
//	cout << setprecision(1) << f << endl;
//
//	i = 12345;
//	cout << setw(3) << i << endl;
//
//	cout << setprecision(2) << f << endl;
//	cout << setprecision(0) << f << endl;
//	cout << setprecision(-1) << f << endl;

	float q = 123.456;
	cout << setprecision(2) << q << endl;
	q = 0;
	cout << setprecision(2) << q << endl;
	cout << setprecision(2) << fixed << showpoint << q << endl;
	cout << setw(2) << q << endl;
	cout << left << setw(21) << setprecision(8) << fixed << showpoint << q << endl;


	return 0;
}
