//============================================================================
// Name        : 09-18-23-cin.cpp
// Author      : Cecilia Da Silva
// Version     :
// Copyright   : Your copyright notice
// Description : clase 8 - cin
//============================================================================

#include <iostream>
using namespace std;

int main() {
//	int i;
//	cout << "Enter and integer " << endl;
//	cin >> i;
//	cout << "i= " << i << endl;
//
//	cout << "Enter another number" << endl;
//	cin >> i;
//	cout << "i= " << i << endl;
//	while (i >= 0)
//	{
//		cout << "Enter an integer" << endl;
//		cin >> i;
//		cout << "i = " << i << endl;
//	}

	string s;
	cout << "enter address" << endl;
	getline (cin,s);
	cout << "the line is -->" << s << "<--" << endl;
	int i;
	cout << "enter an int" << endl;
	getline (cin,s);
	i = stoi (s);
	cout << "i=" << i << endl;
	return 0;
	}

	return 0;
}
