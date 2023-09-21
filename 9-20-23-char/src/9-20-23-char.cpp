//============================================================================
// Name        : 9-20-23-char.cpp
// Author      : Cecilia Da Silva
// Version     :
// Copyright   : Your copyright notice
// Description : Clase 9 - char
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char c;
	string s;
	cout << "Enter a char" << endl;\
	getline(cin, s);
	c = s[0];


	cout << "C: " << c << endl;
	string s2 = s.substr(0,1);
	cout << "s2: " << s2 << endl;
	return 0;
}
