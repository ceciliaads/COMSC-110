//============================================================================
// Name        : 09-11-2023-rand.cpp
// Author      : Cecilia Da Silva
// Version     :
// Copyright   : Your copyright notice
// Description : clase 6 - rand()
//============================================================================

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	/*
	srand(time(0));
	int i;
	i = rand();
	int die = (i % 6) + 1;
	cout << i << setw(2) << die << endl;

	i = rand();
	die = (i % 6) + 1;
	cout << i << setw(2) << die << endl;

	i = rand();
	die = (i % 6) + 1;
	cout << i << setw(2) << die << endl;

	i = rand();
	die = (i % 6) + 1;
	cout << i << setw(2) << die << endl;

	int t = time(0);
	cout << t << endl; // number of seconds since std (estandar) time ephoc ( jan 1 1970 midnight GTM)
*/
	for (int i = 1; i < 100000; i++)
	{
		cout << time(0) << endl;
	}

	return 0;
}
