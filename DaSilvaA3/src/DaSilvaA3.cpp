/*
  ............................................................................
  ............................................................................

  Assignment  : A3
  Course      : COMSC 110 - Section 8244
  Name        : Cecilia Da Silva
  Due date    : 09/22/2023
  Description : Loops

  ............................................................................
  ............................................................................
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

	cout << "*** Section 1 ***" << endl << endl;
/*
 	1. Code a while loop which displays the numbers from 1 through 10 inclusive along with their squares and
	square roots. Skip the number 7.
*/
//	Should i skip number 7 in all of it?
//	the numbers should be formatted using setprecision and fixed?
	double counter;
	counter = 1;

	while (counter <= 10)
	{
		if (counter != 7)
		{
			double calculationSqrt;
			calculationSqrt = sqrt(counter);
			double calculationSq;
			calculationSq = pow(counter, 2.0);
			cout << setw(5) << counter << setw(6) << calculationSq << setw(10) << calculationSqrt << endl;
		}

		counter ++;
	}


	cout << "*** Section 2 ***" << endl << endl;
/*
 	 2. Using a while loop, add up the integers in the range 10 to 20 inclusive. Display the result.
*/
	int counterPt2 = 10;
	int sumPt2 = 0;

	while (counterPt2 >= 10 && counterPt2 <= 20)
	{
		sumPt2 += counterPt2;
		counterPt2 ++;
	}

	cout << "Result: " << sumPt2 << endl <<endl;


	cout << "*** Section 3 ***" << endl << endl;
/*
 	3. Ask the user for the lower and upper bounds of a range of integers. Calculate sum of the integers in that
	range, including the bounds. Display the two bounds and the sum. You may assume that the upper
	bound entered by the user will be >= the lower bound. Use a while loop, do not solve algebraically.
*/
	int lowerBound, upperBound;
	cout << "Enter the lower and upper bounds of a range of integers" << endl;
	cin >> lowerBound >> upperBound;

	int sumPt3 = 0;
	int counterPt3 = lowerBound;

	while (lowerBound <= upperBound && counterPt3 <= upperBound)
	{
		sumPt3 += counterPt3;
		counterPt3++;
	}
	cout << "Lower bound: " << lowerBound << " Upper bound: " << upperBound << " Sum: " << sumPt3 << endl << endl;


	cout << "*** Section 4 ***" << endl << endl;
/*
 	4. Ask the user to enter one of the names Dagny, Hank, or Francisco. If they do this, display a “success”
	message. If they fail, display an error message and ask them to try again. Continue looping until they
	succeed.
*/
	string namePt4;
	cout << "Enter one of the names Dagny, Hank, or Francisco: " << endl;
	cin >> namePt4;

	while (namePt4 != "Dagny" && namePt4 != "Hank" && namePt4 != "Francisco")
	{
		cout <<"Error!" << endl;
		cout << "Try again! Enter one of the names Dagny, Hank, or Francisco: " << endl;
		cin >> namePt4;
	}
	cout << "Succes" << endl << endl;


	cout << "*** Section 5 ***" << endl << endl;
/*
	5. Read a number from the user. If the number is 1, display the name Abigail. If the number is 2, display
	the name Bobby. If 3, display Charmaine. If the number is not in the range 1-3, display an error
	message. Continue this process until the user enters a negative number.
*/
	int num;
	cout << "Enter a number" << endl;
	cin >> num;

	while (!(num < 0))
	{
		if (num == 1)
		{
			cout << "Abigail" << endl << endl;
		}
		else if (num == 2)
		{
			cout << "Bobby" << endl << endl;
		}
		else if (num == 3)
		{
			cout << "Charmaine" << endl << endl;
		}
		else
		{
			cout << "Error!" << endl << endl;
		}
		cout << "Enter a number" << endl;
		cin >> num;
	}


	cout << "*** Section 6 ***" << endl << endl;
/*
	6. Ask the user to enter a name. If the name is Frank, or Betty, tell the user they did well and stop.
	Otherwise, ask the user to try again, and continue until they enter one of those names.
*/
		string namePt6;
		cout << "Enter a name: " << endl;
		cin >> namePt6;

		while (namePt6 != "Frank" && namePt6 != "Betty")
		{
			cout <<"Try again! Enter a name: " << endl << endl;
			cin >> namePt6;
		}
		cout << "You did well!" << endl << endl;

	return 0;
}
