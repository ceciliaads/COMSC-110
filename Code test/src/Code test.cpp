//============================================================================
// Name        : Code.cpp
// Author      : Cecilia Da Silva
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter number" << endl;
	cin >> num;
	while (num != 1 || num != 3) {

	    cout << "wrong" << endl;
	    cout << "Enter correct integer"<< endl;

	    if (num == 1) {
	    	cout << "Apical";
	    }
	    else if (num == 2) {
	    	cout << "Bobby";
	    }
	    else if (num == 3) {
	    	cout << "Chairman";
	    }
	}
	cin >> num;
	return 0;
}


//int main() {
//
//	int num;
//	cout << "Enter number" << endl;
//	cin >> num;
//	while (!(num >= 21000) || !(num <= 23000)){
//	    cout << "wrong" << endl;
//	    cout << "Enter correct integer"<< endl;
//	    cin >> num;
//	}
//	return 0;
//}

//int main() {
//
//	int num;
//	cout << "Enter number" << endl;
//	cin >> num;
//	while (!(num <= 5280)){
//	    cout << "wrong" << endl;
//	    cout << "Enter correct integer"<< endl;
//	    cin >> num;
//	}
//	return 0;
//}

//int main() {
//
//	int num;
//	cout << "Enter number" << endl;
//	cin >> num;
//	while (!(num % 5 == 0) && !(num % 2 == 0)){
//	    cout << "wrong" << endl;
//	    cout << "Enter correct integer"<< endl;
//	    cin >> num;
//	}
//	return 0;
//}



