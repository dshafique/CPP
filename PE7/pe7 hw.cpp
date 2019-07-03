#include <iostream>
#include <cmath>
#include <string>




using namespace std;

enum triangleType { SCALENE, ISOSCELES, EQUILATERAL, NOTRIANGLE };

int  triangleShape(int a, int b, int c)
{

	if ((a + b) <= c || (b + c) <= a || (a + c) <= b)
		return NOTRIANGLE;

	else if ((a != b) && (b != c) && (c != a))
		return SCALENE;

	else if ((a == b && b != c) || (b == c && a != b) || (a == c && c != b))
		return ISOSCELES;

	else if ((a == b) && (b == c))
		return EQUILATERAL;

	return NOTRIANGLE;
}

int main()
{
	int a, b, c;

	int triangle;

	cout << " Enter the length of side 1 of the triangle:" << endl;
	cin >> a;

	cout << "Enter the length of side 2 of the triangle:" << endl;
	cin >> b;

	cout << "Enter the length of side 3 of the triangle:" << endl;
	cin >> c;

	triangle = triangleShape(a, b, c);

	if (triangle == 0)
		cout << "It's a Scalene triangle" << endl;

	else if (triangle == 1)
		cout << "It's an isosceles triangle" << endl;

	else if (triangle == 2)
		cout << "it's an equilateral triangle" << endl;

	else if (triangle == 3)
		cout << "It's not a triangle" << endl;

	int stay;
	cin >> stay;
	cin.get();
	return 0;
}
