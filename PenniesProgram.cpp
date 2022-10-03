// PenniesProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Name: Peightyn Boyd
//Date: 10/3/2022
//Program Title: MoneyValue
//Program Description: Using a program to calculate the total value of change given by the user in the monetary value of pennies.

#include <iostream>
#include <string>

using namespace std;

//Named Constants 

const int QUARTERS_VALUE = 25;
const int  DIMES_VALUE = 10;
const int NICKLES_VALUE = 5;


int main()

{

	//Variable Declaration

	int quarters, dimes, nickels, totalValue;
	double quartersValue, dimesValue, nickelsValue, penniesValue;



	//Program Title and Description for the User 

	cout << "Program Title: 'MoneyValue'" << endl;
	cout << "Program Description: Using a program to calculate the total value of";
	cout << " change given by the user in the monetary value of pennies." << endl;
	cout << endl;



	//User Input

	cout << "Enter the number of quarter you have: ";
	cin >> quarters;
	cout << endl;

	cout << "Enter the number of dimes you have: ";
	cin >> dimes;
	cout << endl;

	cout << "Enter the number of nickels you have: ";
	cin >> nickels;
	cout << endl;


	//Calculations

	quartersValue = quarters * QUARTERS_VALUE;
	dimesValue = dimes * DIMES_VALUE;
	nickelsValue = nickels * NICKLES_VALUE;
	totalValue = quartersValue + dimesValue + nickelsValue;

	//Output to the Screen 

	cout << "Total Value in Pennies: " << totalValue << endl;

	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
