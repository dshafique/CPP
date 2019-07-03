#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main()

{

	int n1;
	int n2;
	int n3;

	cout << "type in the first number." << endl;
	cin >> n1;

	cout << "type in the second number." << endl;
	cin >> n2;

	cout << "type in the third number." << endl;
	cin >> n3;


	if ((n3 < n2) && (n2 < n1))
		cout << "The numbers in ascending order are " << n3 << ", " << n2 << ", " << n1 << "." << endl;
	if ((n2 < n3) && (n3 < n1))
		cout << "The numbers in ascending order are " << n2 << ", " << n3 << ", " << n1 << "." << endl;
	if ((n3 < n1) && (n1 < n2))
		cout << "The numbers in ascending order are " << n3 << ", " << n1 << ", " << n2 << "." << endl;
	if ((n1 < n3) && (n3 < n2))
		cout << "The numbers in ascending order are " << n1 << ", " << n3 << ", " << n2 << "." << endl;
	if ((n1 < n2) && (n2 < n3))
		cout << "The numbers in ascending order are " << n1 << ", " << n2 << ", " << n3 << "." << endl;
	if ((n2 < n1) && (n1 < n3))
		cout << "The numbers in ascending order are " << n2 << ", " << n1 << ", " << n3 << "." << endl;

	return 0;

	}

