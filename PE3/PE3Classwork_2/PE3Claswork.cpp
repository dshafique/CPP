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
	//#4
	double cost;
	double area;
	double bagSize;
	cout << fixed << showpoint << setprecision(2);
	cout << "Enter the amount of fertilizer, in pounds, in one bag: ";
	cin >> bagSize;
	cout << endl;
	cout << "Enter the cost of the "<<bagSize<<" pound fertilizer bag: ";
	cin >> cost;
	cout << endl;
	cout << "Enter the area, in square feet, that can be fertilized by one bag: ";
	cin >> area;
	cout<<endl;
	cout <<"The cost of the fertilizer per pound is: $"<<cost/bagSize<<endl;
	cout<<"The cost of fertilizing per square foot is: $"
			<<cost/area<<endl;

	//#5  classwork
	ifstream inData;
	ofstream outData;
	inData.open("in.txt");
	outData.open("out.txt");
	string str1,str2;
	double ticketPrice1, ticketPrice2,ticketPrice3,ticketPrice4;
	int numberOfTicketSold1,numberOfTicketSold2,numberOfTicketSold3,numberOfTicketSold4;
	inData >> str1 >> str2;
	inData >> ticketPrice1 >> numberOfTicketSold1
		   >> ticketPrice2 >> numberOfTicketSold2
	       >> ticketPrice3 >> numberOfTicketSold3
	       >> ticketPrice4 >> numberOfTicketSold4;
	double revenue1,revenue2,revenue3,revenue4;
	revenue1 = ticketPrice1 * numberOfTicketSold1;
	revenue2 = ticketPrice2 * numberOfTicketSold2;
	revenue3 = ticketPrice3 * numberOfTicketSold3;
	revenue4 = ticketPrice4 * numberOfTicketSold4;
	int totalNumberOfTicketsSold = numberOfTicketSold1+numberOfTicketSold2+numberOfTicketSold3+numberOfTicketSold4;
	double totalRevenue = revenue1+revenue2+revenue3+revenue4;
	outData << fixed << showpoint << setprecision(2);
	outData << "number of tickets sold : " << numberOfTicketSold1 << " revenue " << revenue1 << "\n"
			<< "number of tickets sold : " << numberOfTicketSold2 << " revenue " << revenue2 << "\n"
			<< "number of tickets sold : " << numberOfTicketSold3 << " revenue " << revenue3 << "\n"
			<< "number of tickets sold : " << numberOfTicketSold4 << " revenue " << revenue4 << "\n"
			<< "Total revenue : " << totalRevenue << "\n";

	//....
	inData.close();
	outData.close();

	//#6  homework
	ifstream inData5;
	ofstream outData5;
	inData5.open("in5.txt");
	outData5.open("out5.txt");
	inData5.close();
	outData5.close();
	// getline(inData, str); page 156
	char newLine,cr;
	cin.get(cr);
	cin.get(newLine);

	int i;
	char ch1, ch2,ch3;
	cout<<"Enter something: ";
	cin.get(ch1);
	cin.putback(ch1);
	cout<<"ch1="<<ch1<<endl;
	cin.get(ch2);
	cout<<"ch2="<<ch2<<endl;;
	ch3=cin.peek();
	cout<<"ch3="<<ch3<<endl;
	cout<<"test fail state. enter instead of digits char: ";
	cin>>i;
	cin.clear();
	cin.ignore(100,'\n');
	cout<<"fail state cleared. enter instead of digits ";
	cin>>i;
	cout <<"you just entered i = "<<i;
	return 0;
}

