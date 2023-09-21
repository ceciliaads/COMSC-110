/*
  ............................................................................
  ............................................................................

  Assignment  : A2
  Course      : COMSC 110 - Section 8244
  Name        : Cecilia Da Silva
  Due date    : 09/18/2023
  Description : Arithmetic, formatted output, decisions

  ............................................................................
  ............................................................................
 */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
/*
 	 	 Part 1. Interest calculations.
	In finance, interest is the amount charged by a lender for the use of an amount of money, called the principal.
	Every loan has a specified interest rate. Interest on the loan may be calculated once a year, or once a month,
	or even once a day. The repetitive calculation is called compounding. The more often a lender calculates, the
	higher the effective interest rate will be, and the more the lender will pay for the use of the money.

	Ask the user to enter a principal amount, in dollars and cents. Then ask the user for the annual interest rate.
	A rate of 5.25% per year would be entered as 5.25.
		(a) Calculate the interest for one year, compounded annually. Display the two inputs, the interest earned,
			and the total balance at the end of the year. The total balance is the original principal plus the interest.
		(b) Calculate the interest by compounding daily. Your output should be similar to that in part (a) but
			labeled appropriately to indicate the frequency of compounding.
*/

	// This program ask user for an amount in USD, and and annual interest to then calculate the compounded annually with it's total, and the compounded daily with it's total.

	//1. declares the principal amount variable, and asks user to enter a USD amount, reading it's input.
	double principalAmount;
	cout << "Enter a principal amount, in dollars and cents: " << endl;
	cin >> principalAmount;

	//2. declares the annual interest variable, and asks user to enter the rate, reading it's input.
	double annualInterest;
	cout << "What is the annual interest rate?" << endl;
	cin >> annualInterest;

	//3. declares compoundedAnnually variable, calculating the interest earned during one year by multiplying the principal by the interest rate.
	float compoundedAnnually;
	compoundedAnnually = principalAmount * (annualInterest * 0.01);

	//4. declares a totalBalance for Compounded Annually, by summing up the principalAmount and compoundedAnnually.
	float totalBalanceCA = principalAmount + compoundedAnnually;

	//5. declares compoundedDaily variable, calculating the interest earned during one year by using the formula provided.
	double compoundedDaily;
	compoundedDaily = principalAmount * pow((1.0 + (annualInterest * 0.01) / 365.0), 365.0) - principalAmount;

	//6. declares a totalBalance for Compounded Daily, by summing up the principalAmount and compoundedDaily.
	float totalBalanceCD = principalAmount + compoundedDaily;

	//7. sets output to be manipulated a certain way and prints all outputs showing the calculations with their references.
	cout << fixed << setprecision(2) << showpoint;
	cout << "For a loan of " << setw(20) << right << "$" << setw(10) << principalAmount << endl;
	cout << "With a rate of " << setw(29) << annualInterest << setw(2)  << "%" << endl;
	cout << "Interest compounded annually" << setw(6) << "$" << setw(10) << compoundedAnnually << endl;
	cout << "YE balance" << setw(24) << "$" << setw(10) << totalBalanceCA << endl;
	cout << "Interest compounded daily" << setw(9) << "$" << setw(10) << compoundedDaily << endl;
	cout << "YE balance" << setw(24) << "$" << setw(10) << totalBalanceCD << endl << endl;


/*

		Part 2. Screen size calculation.
	Ask the user to enter the size of a display screen as a height measurement, and a width measurement, both in
	inches. Calculate and display the screen size as it would be marketed: it’s the length of the diagonal. Use the
	Pythagorean formula of a2 + b2 = c2 for your computation. Make your own choice regarding how precise you
	want the diagonal to be displayed.

*/

	//This program asks user for a height and a width of a display screen, calculating  the screen size with the Pythagorean formula.

	//1. declares height variable, and ask user to enter the height of a display screen in inches, reading it's input.
	double height;
	cout << "Enter the height of a display screen in inches: " << endl;
	cin >> height;

	//2. declares width variable, and ask user to enter the width of a display screen in inches, reading it's input.
	double width;
	cout << "Enter the width of a display screen in inches: " << endl;
	cin >> width;

	//3. declares screenSize variable, calculating it's size in inches by using the Pythagorean formula.
	double screenSize;
	screenSize = pow(height, 2.0) + pow(width, 2.0);
	screenSize = sqrt(screenSize);

	//4. prints the result in inches of an LG screen.
	cout << "LG " << setprecision(0) << noshowpoint << screenSize << '"' << endl << endl;

/*

		Part 3. Travel mileage calculations.
	Ask the user to enter the cost of a tank of gas. Then, ask the user to enter the number of miles driven on that
	tank of gas. Display the input, and calculate the display the cost per mile, with dollar signs for dollars-and-
	cents figures.

*/

	// This program asks a user to enter the cost of tank of gas and the number of miles driven, calculating the cost per mile.

	//1. declares gasTank variable, asking user to enter the cost of a tank of gas, reading it's input.
	float gasTank;
	cout << "Enter the cost of a tank of gas: " << endl;
	cin >> gasTank;

	//2. declares drivenMiles variable, asking user to enter the number of miles driven, reading it's input.
	float drivenMiles;
	cout << "Enter the number of miles driven on that tank of gas: " << endl;
	cin >> drivenMiles;

	//3. declares costPerMile variable, calculating it by dividing the cost of a tank of gas by the number of miles driven
	float costPerMile;
	costPerMile = gasTank / drivenMiles;

	//4. prints all outputs, showing the calculation
	cout << fixed << setprecision(2) << showpoint;
	cout << "Cost of gas:" << setw(10) << "$" << setw(10) << gasTank << endl;
	cout << "Miles driven:" << setw(19) << drivenMiles << endl;
	cout << "Cost per mile:" << setw(8) << "$" << setw(10) << costPerMile << endl << endl;


/*

		Part 4: Las Vegas dice game
	Roll two simulated dice using the rand function as discussed in class. A die value is in the range 1 through 6.
	Display the values of each die and their total. Examine the total. If it is a loser (total of 2, 3, or 12) tell the user
	they lost. If it is a winner (total 7 or 11), tell the user they won. Otherwise, the roll total is the “point” to be
	made. Tell the user that there is a “point,” and display the point. Roll the dice once more, and examine the
	total. If the total equals the point, tell the user they won. Otherwise, tell the user they lost.
	Play only one game. Roll the dice, go through the calculations, and print the results.

*/

	//This program simulates two rolling dice, playing "Las Vegas dice game". If the total of both dice rolls 2, 3 or 12, user loses. If the total is 7 or 11, user wins.
	// Otherwise, the program will tell the user there is a point, and displays this point, allowing the user to roll the dices again, if total is equals to the point number,
	// user wins, else user loses.

	//1. sets a seed value for the function rand() that will be used to create a random number. Declares randomNumber variable assigning the rand() function as it's value.
	// Declares die1 variable, giving it a 1 - 6 range, dividing randomNumber by 6, plus 1.
	srand(time(0));

	int randomNumber;
	randomNumber = rand();
	int die1 = (randomNumber % 6) +1;

	//2. assigns the rand() function to randomNumber again. Declares die2 variable, giving it a 1 - 6 range, dividing randomNumber by 6, plus 1.
	randomNumber = rand();
	int die2 = (randomNumber % 6) +1;

	//3. declares dieTotal by summing up die1 and die2.
	int dieTotal = die1 + die2;

	//4. prints output showing the user what the two die rolled and it's total.
	cout << "Player rolls " << die1 << " and " << die2 << ". Total: " << setw(7) << dieTotal << endl;

	//5. using the if statement, creates the first condition to separate the "loser" numbers. Only printing "loser" if dieTotal is equals to 2, 3 or 12.
	if (dieTotal == 2 || dieTotal == 3 || dieTotal == 12)
	{
		cout << "Loser" << endl;
	}
	//6. creates a second condition to separate the "winner" numbers. Only printing "winner" if dieTotal equals to 7 or 11.
	else if (dieTotal == 7 || dieTotal == 11)
	{
		cout << "Winner" << endl;
	}
	//7. the point, will allow user to roll the dies again.
	else
	{
		//tells the user there is a point, displaying the point number.
		cout << "There is a point: " << setw(18) << dieTotal << endl;

		// assigns the function rand() to randomValue to generate a random number, giving die1 a 1 - 6 range, again.
		randomNumber = rand();
		die1 = (randomNumber % 6) +1;

		// assigns the function rand() to randomValue to generate a random number, giving die2 a 1 - 6 range, again.
		randomNumber = rand();
		die2 = (randomNumber % 6) +1;

		// declares a dieTotal2 variable to sum up the two new rolling dices.
		int dieTotal2 = die1 + die2;

		// prints the two new rolling dices, and it's total.
		cout << "Player then rolls " << die1 << " and " << die2 << ". Total: " << setw(2) << dieTotal2 << endl;

		// creates nested if, by giving the first condition. if dieTotal is equals to the dieTotal2, prints winner. Otherwise prints loser.
		if (dieTotal == dieTotal2)
		{
			cout << "Winner" << endl;
		}
		else
		{
			cout << "Loser" << endl;
		}
	}


	return 0;
}
