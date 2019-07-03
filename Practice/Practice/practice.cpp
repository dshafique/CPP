#include <iostream>
#include <cmath>
using namespace std;


//void Input (float &x, float &y);

float a = 1.0, b = 1.0, result;
//int a, b, result;
char operation;
bool done = false;

void calc();

int main()
{
	cout << "Program which performs addition, subtraction, multiplication and subtraction. \n\n";

	do {
		cout << "Please input a calculation:\n";
		a = 0.0, b = 1.0, operation = '\0';
		
		try {
			cin >> a >> operation >> b;
			if (!cin)
				throw 1;
			calc();
			cout << "The answer is: " << a << operation << b << " = " << result << endl;

			cout << "Would you like to calculate more (y/n):\n";
			char repeat;
			cin >> repeat;
			if (repeat == 'n')
				done = true;
		}
		catch (int b)
		{
			if (b == 0) {
				cout << "Can't divide by 0" << endl;
			}
			else if (b == 1) {
				cin.clear();
				cin.ignore(100, '\n');
				cout << "Improper operation. Please input a correct calculation operation: \n";
			}


		}
	} while (!done);
	
	return 0;
}

void calc()
{
	switch (operation)
	{
	case '+':
		result = a + b;
		break;

	case '-':
		result = a - b;
		break;

	case '*':
		result = a * b;
		break;

	case '/':
		if (b == 0)
			throw 0;
		result = a / b;
		break;

	case '^':
		result = pow(a, b);
		break;
	case '\0':
		throw 3;
		break;

	default:
		cout << "\n";
		throw 1;
	}

}
