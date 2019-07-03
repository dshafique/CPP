/******************************************************************************************************
 Author: Daoud Shafique

Date: February 6th, 2016

Program:A piece of wire is to be bent in the form of a rectangle to put around a picture frame.
The length of the picture frame is 1.5 times the width.
Write a program that prompts the user to input the length of the wire and outputs the length and width of the picture frame.
****************************************************************************************************************************/


#include <iostream>


using namespace std;

int main()

{

	double wireLength;

	cout << "Enter the amount of wire you have";

	cin >> wireLength;

	cout << "The width is: " << wireLength/2/2.5 << endl;

	cout << "The Length is: " << wireLength/2/2.5*1.5 << endl;

	return 0;
}
