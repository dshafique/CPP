#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main ()

{

	int num;
	int IndividualNumber;
	int sum;
	int power;
	int reverse = 0;
	char userChoice;
	srand (time(0));
	num = rand() % 89 + 10;
	num = abs(num);




cout << "Please select from one of the following options: \n "
	 << "1. Double the number \n "
	 << "2. Reverse the digits of the number \n "
	 <<	"3. Raise the number to the power \n "
	 << "4. Sum the digits of the number  \n "
     << "5. If the number is a two digit number, then raise the first digit to the power of the second digit \n "
     << "6. If the number is a three digit number and the last digit is less than or equal to 4, then raise the first two digits to the power of the last digit \n "
	 << num << endl;

cin >> userChoice;


switch (userChoice)
{

	case '1':
		num = num*2;
		cout << "you have chosen option a! \n " << num << endl;

		break;

	case '2':
		while(num != 0)
				{
				        int remainder = num %10;
				        reverse = reverse*10 + remainder;
				        num/=10;
				}
		cout << "you have chosen option b! \n " << reverse << endl;
				        break;

	case '3':
		cout << "you have chosen option c! \n please enter the power you would like the number to be raised to (2, 3, or 4) \n" << endl;
		cin >> power;
		num = pow(num, power);
		cout << num << endl;
		break;

	case '4':
		cout << "you have chosen option d! \n" << endl;
		sum = 0;

		do
		{
		IndividualNumber = num % 10;
		num = num/10;
		sum = sum + IndividualNumber;


		}	while((num > 0) && (num <=9));


		cout<<"The sum is = "<<sum<<endl;
		break;

	case '5':
	if ((num >= 10) && (num <= 99))
	{
		int first = num/10;
		int second = num%10;
		num = pow (first, second);
		cout <<"The first digit raised to the second digit is: \n " << num << endl;

	}

		break;
	case '6':
		if ((num >=100) && (num <= 999) && ((num % 100 > 0) || (num % 100 <=4)))
		{
			int first = num/10;
			int second = num%10;
			num = pow (first, second);
			cout <<"The first digit raised to the second digit is: \n " << num << endl;
		}

	break;
}
//while ((userChoice) >= '1' && (userChoice <='6'));




return 0;
		}
