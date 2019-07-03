/*
 * PE3.cpp
 *
 *  Created on: Jun 17, 2015
 *      Author: kmurashk
 */


//page 182 #4, 183 #5,#6

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int main()
{
	//#6 homework
	ifstream inData;
	ofstream outData;
	inData.open("in5.txt");
	outData.open("out5.txt");
	string lastName1, lastName2, lastName3, lastName4;
	string firstName1, firstName2, firstName3, firstName4;


	string str1;
	string str2;
	string str3;
	string str4;

    double s1,p1,s2,s3,s4,p2,p3,p4;
	inData >> str1 >> str2 >> str3 >> str4;
	inData >> lastName1>>firstName1>>s1>>p1;
	inData >> lastName2>> firstName2>>s2>>p2;
	inData >> lastName3>> firstName3>>s3>>p3;
	inData >> lastName4>> firstName4>>s4>>p4;

    double updatedS1= s1*(1.0+p1/100.0);
    double updatedS2= s2*(1.0+p2/100.0);
    double updatedS3= s3*(1.0+p3/100.0);

    outData << "Updated Salary"<< "\n"<<"\n";
	outData <<firstName1<<" "<<lastName1 <<" "<< updatedS1<<"\n";
	outData <<firstName2<<" "<<lastName2 <<" "<< updatedS2<<"\n";
	outData <<firstName3<<" "<<lastName3 <<" "<< updatedS3<<"\n";

	inData.close();
	outData.close();

	return 0;
}

