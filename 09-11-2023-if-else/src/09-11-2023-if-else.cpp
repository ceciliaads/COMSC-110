//============================================================================
// Name        : 09-11-2023-if-else.cpp
// Author      : Cecilia Da Silva
// Version     :
// Copyright   : Your copyright notice
// Description : clase 6 if - else
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter two numbers" << endl;
	int a,b;
	cin >> a >> b;

	if (a == b) {
		cout << "a is equal to b" << endl;
	}
	else {
		cout << "a is not equal to b" << endl;
	}

	if ( a == 3) {
		cout << "hey!!! a = 3" << endl;
	}

	//nested if

	if ( a + b > 10) {
		if (a + b == 21) {
			cout << "here at point a " << endl;
		}
		else {
			if ( a < b and b != 55) {
				cout << "here at point b" << endl;
			}
		}
	}
	else {
		cout << "here at point c " << endl;
	}
	return 0;
}
