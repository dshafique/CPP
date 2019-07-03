#include<iostream>
#include "Point2D.h"

using namespace std;
int x, y;
int main()
{
	Point2D points[5];

	for (int i = 0; i < 5; i++) {
		try {
			cout << "Enter x and y for point " << i + 1 << ":\n";
			cin >> points[i];
			if (!cin)
				throw 0;
		}
		catch(int x){
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Imporoper coordinates. Please input them again\n";
			i--;
		}
	}

	cout << "Point " << 1 << ": " << points[0] << " Distance from origin: " << points[0].distanceToOrigin() << endl;
	cout << "Point " << 2 << ": " << points[1] << " Distance from origin: " << points[1].distanceToOrigin() << endl;
	cout << "Point " << 3 << ": " << points[2] << " Distance from origin: " << points[2].distanceToOrigin() << endl;
	cout << "Point " << 4 << ": " << points[3] << " Distance from origin: " << points[3].distanceToOrigin() << endl;
	cout << "Point " << 5 << ": " << points[4] << " Distance from origin: " << points[4].distanceToOrigin() << endl;

		

	int stay;
	cin >> stay;
	cin.get();
}