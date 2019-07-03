/*
 * csc155Spring2016PE2Classwork.cpp
 *
 *  Created on: Jan 23, 2016
 *      Author: kmurashk
 */

#include <iostream>

using namespace std;

int main()
{
	double t1, t2, t3, t4, t5;
	double average;
	cout <<"Please enter 5 scores(type double): ";
	cin >> t1 >> t2 >> t3 >> t4 >> t5;
	average = (t1+t2+t3+t4+t5)/5.0;

	cout <<"Average = " << average<<endl;
}
