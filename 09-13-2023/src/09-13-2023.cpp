//============================================================================
// Name        : 09-13-2023.cpp
// Author      : Cecilia Da Silva
// Version     :
// Copyright   : Your copyright notice
// Description : Clase 7, if else and loops
//============================================================================

#include <iostream>
using namespace std;

int main() {

// CLASE PASADA
//	// if with and else
//	cout << "Enter two numbers" << endl;
//	int a, b;
//	cin >> a >> b;
//
//
//	if (a == b)
//	{
//		cout << "a is equal to b" << endl;
//	}
//	else
//	{
//		cout << "a is not equal to b" << endl;
//	}
//
//	// if without else
//	if (a == 3)
//	{
//		cout << "hey!!! a = 3" << endl;
//	}
//
//	// nested if
//	if (a + b > 10)
//	{
//		if (a + b == 21)
//		{
//			cout << "here at point a" << endl;
//		}
//		else
//		{
//			if (a < b and b != 5)
//			{
//				cout << "here at point b" << endl;
//			}
//		}
//	}
//	else
//	{
//		cout << "here at point c" << endl;
//	}


//	int counter;
//	counter = 1;
//
//	while (counter <= 10) {
//		cout << counter << endl;
//		counter ++;
//
//	}

//	int counter = 0;
//	while (counter <= 10) {
//		cout << counter << endl;
//		counter++;
//	}

//	cout << "what item are you looking at?" << endl;
//	string item;
//	cin >> item;
//	while (item != "peas") {
//		cout << "get next item" << endl;
//		cout << "what item are you looking at?" << endl;
//		cin >> item;
//	}

		int counter = 0;
		int sum = 0;
		while (counter <= 10) {
			sum = sum + counter;
			counter++;
			cout << sum << endl;
		}




	return 0;
}
