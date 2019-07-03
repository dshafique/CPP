#include <iostream>

#include <cmath>

using namespace std;

int main()
{
	int IndividualNumber, sum, num;
	cout << "Enter an integer"<<endl;
	cin >> num;
	num = abs(num);

	sum = 0;


	do
		{
			IndividualNumber = num % 10;
			num = num/10;
			sum = sum + IndividualNumber;

			cout<< "the individual numbers are: "<<num<<endl;
		}	while(num > 0);



		cout<<"The sum is = "<<sum<<endl;

		return 0;
	}

