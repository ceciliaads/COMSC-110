//============================================================================
// Name        : 09-18-23.cpp
// Author      : Cecilia Da Silva
// Version     :
// Copyright   : Your copyright notice
// Description : Clase 8 - loops
//============================================================================

#include <iostream>
using namespace std;

int main() {
//	3 parts to a couting loop
//	initialize, test, change
//
//	count from 1 to 10 inclusive

	int counter;
	cout << "*** part 1 ***" << endl;
	counter = 1;
	while (counter <=10)
	{
		cout << counter << endl;
		counter++;
	}

	cout << "*** part 2 ***" << endl;
	for (counter = 1; counter <= 10; counter++)
	{
		cout << counter <<endl;
	}

	cout << "*** part 3 ***" << endl;
	for (counter = 10; counter >= 1; counter--) // or counter = counter - 2;
	{
		cout << counter <<endl;
	}

	cout << "*** part 4 ***" << endl;
	for (counter = 10; counter >= 1; counter--) // or counter = counter - 2;
	{
		cout << counter <<endl;
	}

	return 0;
}
