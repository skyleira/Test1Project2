

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

const string ADD = "1";
const string SUBTRACT = "2";
const string MULTIPLICATION = "3";
const string DIVISION = "4";
const string POWER = "5";

int main()
{
	string menuSelection;
	int Number1;
	int Number2;
	int calculationTotal;
	cout << "[Calculator Menu]" << endl;
	cout << "Please input the number of the option you wish to use: " << endl;
	cout << "1. Additon" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. Power" << endl;
	cin >> menuSelection;
	
	if (menuSelection == ADD)
	{
		cout << "Please input the first number you wish to add: " << endl;
		cin >> Number1;
		cout << "Please input the second number you wish to add: " << endl;
		cin >> Number2;
		calculationTotal = Number1 + Number2;
		cout << Number1 << " + " << Number2 << " = " << calculationTotal;
	}

	if (menuSelection == SUBTRACT)
	{
		cout << "Please input the number you wish to subtract from: " << endl;
		cin >> Number1;
		cout << "Please input the number you wish to subtract from " << Number1 << ":" << endl;
		cin >> Number2;
		calculationTotal = Number1 - Number2;
		cout << Number1 << " - " << Number2 << " = " << calculationTotal;
	}

	if (menuSelection == MULTIPLICATION)
	{
		cout << "Please input the number you wish to multiply: " << endl;
		cin >> Number1;
		cout << "Please input the number you wish to multiply " << Number1 << " by: " << endl;
		cin >> Number2;
		calculationTotal = Number1 * Number2;
		cout << Number1 << " x " << Number2 << " = " << calculationTotal;
	}

	if (menuSelection == DIVISION)
	{
		cout << "Please input the number you wish to divide: " << endl;
		cin >> Number1;
		cout << "Please input the number you wish to divide " << Number1 << " by: " << endl;
		cin >> Number2;
		calculationTotal = Number1 / Number2;
		cout << Number1 << " divided by " << Number2 << " = " << calculationTotal << endl;
	}
	
	if (menuSelection == POWER)
	{
		cout << "Please input your base number: " << endl;
		cin >> Number1;
		cout << "Please input the number of power on " << Number1 << ":" << endl;
		cin >> Number2;
		calculationTotal = pow(Number1,Number2);
		cout << Number1 << " to the " << Number2 << " power = " << calculationTotal << endl;
	}

}


