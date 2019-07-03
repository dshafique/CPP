/*
 * MyFirstProgram.cpp
 * date 8/29/2015
 * Demonstration cin and cout, comments
 *  Created on: Aug 29, 2015
 *      Author: kmurashk
 */

//some comment
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "My First program"<<endl;
    int a = 8, b=9;
    cout <<"a="<<a<<"\n";
    cout <<"b="<<b<<"\n";
    cout <<"Enter a = ";
    cin >> a;
    cout<<"updated a = "<<a<<endl;
    cout<<"5/2="<<(5/2)<<endl;
    cout<<"5.0/2="<<(5.0/2)<<endl;
    cout<<"5%2="<<(5%2)<<endl;
    cout<<"static_cast<int>(6.7)="<<static_cast<int>(6.7)<<endl;
    cout<<"static_cast<double>(6)="<<static_cast<double>(6)<<endl;
    double c,d;
    cout <<"Enter c and d : ";
    cin>>c>>d;
    cout <<"You just entered c = "<<c<<" and d = "<<d<<endl;
    cout<<"formatted output"<<endl;
    cout<< fixed<< showpoint <<setprecision(2)<<c<<" "<<d<<endl;
    char f='a';
    cout<<"f="<<f<<endl;
}


