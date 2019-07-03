/*
 * Driver.cpp
 *
 *  Created on: Nov 14, 2015
 *      Author: kmurashk
 */
#include <iostream>
#include "RectangleType.h"

using namespace std;
int main()
{
	RectangleType rectangle1;
	RectangleType rectangle2(3,5);
	RectangleType rectangle3(rectangle2);
	//RectangleType rectangleZ(3, 4);
	cout<<"rectangle2==rectangle3 :"<<(rectangle2==rectangle3)<<endl;
	//test other relational operators
	//
	cout<<"rectangle2:"<<rectangle2<<endl;
	cout<<"rectangle1:"<<rectangle1<<endl;
	cout<<"rectangle3:"<<rectangle3<<endl;
	//cout<<"rectangleZ plus rectangle2: "<<rectangleZ+rectangle2 << endl;
	cout<<"++"<<endl;
	cout << "friend overload" << endl;
//	friend RectangleType operator+(const RectangleType&, const RectangleType&);
	cout<<"++rectangle2:"<<++rectangle2<<endl;
	cout<<"rectangle3++:"<<rectangle3++<<endl;
	cout<<"--"<<endl;

	cout<<"--rectangle2:"<<++rectangle2<<endl;
	cout<<"rectangle3--:"<<rectangle3++<<endl;

	RectangleType rectangle4;
	cout<<"\nrectangle2 : "<<rectangle2<<endl;
	cout<<"rectangle4 : "<<rectangle4<<endl;
	rectangle4=++rectangle2;
    cout<<"rectangle4=++rectangle2"<<endl;
    cout<<"rectangle2 : "<<rectangle2<<endl;
    cout<<"rectangle4 : "<<rectangle4<<endl;

    RectangleType rectangle5;
	cout<<"\nrectangle3 : "<<rectangle3<<endl;
	cout<<"rectangle5 : "<<rectangle5<<endl;
	rectangle5=rectangle3++;
	cout<<"rectangle5=rectangle3++"<<endl;
	cout<<"rectangle3 : "<<rectangle3<<endl;
	cout<<"rectangle5 : "<<rectangle5<<endl;

	RectangleType rectangle6(8,9);
	cout<<"\nrectangle6 : "<<rectangle6<<endl;
	cout<<"rectangle5 : "<<rectangle5<<endl;

	cout<<"rectangle6-rectangle5 : "<<(rectangle6-rectangle5)<<endl;
	RectangleType rectangle7;
	rectangle7=rectangle5+rectangle6;
	cout<<"rectangle7=rectangle5+rectangle6 : "<<rectangle7<<endl;
	cout<<"rectangle5+rectangle6 : "<<rectangle5+rectangle6<<endl;

	cout<<"rectangle5-rectangle6 : "<<(rectangle5-rectangle6)<<endl;

	int stay;

	cin >> stay;


	cin.get();


}



