/*
  ............................................................................
  ............................................................................

  Assignment  : A1
  Course      : COMSC 110 - Section 8244
  Name        : Cecilia Da Silva
  Date        : 09/10/2023
  Description : input, output, arithmetic

  ............................................................................
  ............................................................................
 */

#include <iostream>
using namespace std;

int main() {

/*	Part 1.
	Ask the user how many days they worked last week.
	Next, ask the user how many hours they worked last week.
	Tell the user the average number of hours per day worked. You can assume that the user will not enter zero
	for the number of days.
*/

//	This program asks the user to enter the number of days worked last week and the hours worked,
//	then calculates the average of hours worked per day.

//  Fist: declares the variables that will be used.
	int days;
	float hours;
	float avg;

//  Second: asks the user to enter the number of days worked last week, and reads the input.
	cout << "Enter a number of days worked last week: " << endl ;
	cin >> days;

//	Third: asks the user how many hours they worked last week, and reads the input.
	cout << "Enter number of hours worked for the week: " << endl ;
	cin >> hours;

//	Fourth:  divides, calculating the hours and days.
	avg = hours / days;

//  Last: prints the division, by showing the user the output of average hours worked per day.
	cout << "You averaged " << avg << " hours per day" << endl << endl;



/*
	Part 2.
	Ask the user to enter a temperature, in Fahrenheit.
	Tell the user what that is in Centigrade. The conversion formula is C = (F-32) * 5/9.
 */

//	This program asks the user to enter a temperature in Fahrenheit, and converts it to Centigrade.

//	First: declares the variables that will be used.
	float tempF;
	float tempC;

//	Second: asks the user for a temperature in F, and reads the input.
	cout << "Enter a temperature in Fahrenheit: " << endl;
	cin >> tempF;

//	Third: calculates the conversion of F to C.
	tempC = (tempF - 32) * 5/9;

//	Last: Prints the conversion to C, by showing the user the output.
	cout << "That's " << tempC << " in C" << endl << endl;



/*
    Part 3.
 	Ask the user for their student ID number. Next, ask the user for three pairs of cafeteria items and prices.
	Print a receipt containing the items, the subtotal, the tax, and the grand total. The tax is 9.25% of the
	subtotal.

 */
//	This program asks the user to enter their student ID, next asks for three cafeteria items and it's prices.
//  Calculating the total, shows the user their receipt.

//  First: declares ID variable, asks for it's number, and reads input.
	string id;
	cout << "Enter your ID number: " << endl;
	cin >> id;

//  Second: declares firstItem and it's price variables. Ask for the first cafeteria item and reads input. Asks for it's price and reads input.
	string firstItem;
	float priceFirstItem;

	cout << "Enter the first item type: " << endl;
	cin >> firstItem;

	cout << "Enter the first item cost: " << endl;
	cin >> priceFirstItem;

//  Third: declares secondItem and it's price variables. Ask for the second cafeteria item and reads input. Asks for it's price and reads input.
	string secondItem;
	float priceSecondItem;

	cout << "Enter the second item type: " << endl;
	cin >> secondItem;

	cout << "Enter the second item cost: " << endl;
	cin >> priceSecondItem;

//  Fourth: declares thirdItem and it's price variables. Ask for the third cafeteria item and reads input. Asks for it's price and reads input.
	string thirdItem;
	float priceThirdItem;

	cout << "Enter the third item type: " << endl;
	cin >> thirdItem;

	cout << "Enter the third item cost: " << endl;
	cin >> priceThirdItem;


//	Fifth: declares subtotal variable, with the sum of all items prices. Declares tax variable calculating the subtotal tax. And declares a total variable calculating the grand total by adding up subtotal with it's tax.
	float subtotal = priceFirstItem + priceSecondItem + priceThirdItem;
	float tax = (subtotal * 9.25) / 100;
	float total = subtotal + tax;

// Last: prints the receipt, by showing all outputs.
	cout << "----------------Receipt for "<< id << "------------------" << endl;
	cout << firstItem << " " << priceFirstItem << endl;
	cout << secondItem << " " << priceSecondItem << endl;
	cout << thirdItem << " " << priceThirdItem << endl;
	cout << "subtotal " << subtotal << endl;
	cout << "tax " << tax << endl;
	cout << "total " << total << endl;
	cout << "------------------------------------------------------" << endl;


	return 0;
}
