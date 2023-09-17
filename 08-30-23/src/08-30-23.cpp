//============================================================================
// Name        : 08-30-23.cpp
// Author      : Cecilia Da Silva
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {

// integers
	int num1; // its 4 bytes, max 4.2 billion
	num1 = 180;
	long int num2; // also 4 bytes
	long long int num3; // gives 8 bytes
	short int num4; // 2 bytes
	int x = 55;

// floating point
	float num5;
	num5 = 4.56;
	double num6;

// characters
	char c1;
	c1 = 'a';
	char c2 = ' ';

//strings
	string s1;
	s1 = "hello there";

//booleans
	bool b1 = true;


	float taxRate;
	float XYZ_3;

//arithmetic
	num1 = num2 + 1; //assignment, not equality
	float a, b, c, d, e;
	num1 = a + b - c * d / e;

//PEMDAS defines the order of execution
	num1 = 3 + 4 / 2;
	num2 = (3 + 4) / 2;

	int x1, x2;
	x1 = (-b + sqrt( (b * b) - (4 * a * c) ) ) / (2 * a);
	x2 = (-b - sqrt( (b * b) - (4 * a * c) ) ) / (2 * a);

	int rem = num1 % 2;

	//exponential
	num1 = pow (3,4); // raise 3 to the 4 power
	//x1 = (-b + pow( ((b*b) - (4* a* c), .5) )) / (2*a);


	//output
	cout << "enter a number, please" << endl;

	//input
	cin >> num1;
	num1 = num1 + 1;
	cout << "the number you entered was " << num1 << endl;

	return 0;
}
