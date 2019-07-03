#include <iostream>
using namespace std;

// input function
void Input (float &x, float &y);

float a=1.0, b=1.0, result;
char operation;


int main ()
{
	cout << "Program which performs addition, subtraction, multiplication and subtraction. \n\n";

	cout << "Please input calculation operation (eg. 1 + 2): \n";
	cin >> a >> operation >> b;

	Input (a,b);

	cout << "The answer is: " << a << operation << b << " = "<< result << endl;
	//system ("pause");
	return 0;
}


void Input (float &x, float &y)
{
	a = x;
	b = y;

	switch (operation)
	{
		case '+':
			result = x + y;
			break;

		case '-':
			result = x - y;
			break;

		case '*':
			result = x * y;
			break;

		case '/':
			result = x / y;
			break;

		default:
			cout << "Improper operation. Please input a correct calculation operation: \n";
			cin >> a >> operation >> b;
			Input (a, b);
	}
}

/*
 * Ch14ClassworkLengthException.cpp
 *
 *  Created on: Nov 21, 2015
 *      Author: kmurashk
 */
/*#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double convertLength(double feet, double inches);

int main()
{
	double feet, inches, cm;
	bool done = false;
	cout << fixed <<showpoint<<setprecision(1);
	string str1 = "First number in input stream is in fail state";
	string str2 = "Second number in input stream is in fail state";
	do
	{
		try
		{
			cout << "Enter length: feet and inches ";
			cin  >> feet;
			cout << endl;
			if (!cin)     throw str1;
			if (feet < 0.0) throw feet;
			cin >> inches;
			cout << endl;
			if (!cin) throw str2;
			if (inches < 0.0) throw inches;
			done = true;
			cm   = convertLength(feet, inches);
			cout << feet << " feet and "
				 << inches << " inches = "
				 << cm << " centimeters"<<endl;
		}
		catch (string& message)
		{
			cout << message << endl;
			cin.clear();
			cin.ignore(100, '\n');
		}
		catch (double number)
		{
			cout << "Number cannot be negative" << endl;
			cin.clear();
			cin.ignore(100, '\n');
		}
	}
	while (!done);
	return 0;

}

double convertLength(double feet, double inches)
{
	return (feet*12.0+inches)*2.54;
}
*/

