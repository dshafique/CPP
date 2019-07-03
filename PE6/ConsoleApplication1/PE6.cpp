/*************************************************************************************
* PE6.cpp
* date: February 23, 2016
* Palindrome
* Author: Daoud Shafique
**************************************************************************************/

#include <iostream>
#include <string>
#include<algorithm>
#include<locale>
#include<cctype>

using namespace std;

bool isPalindrome(string palindrome)
{
	int length = palindrome.length();
	transform(palindrome.begin() , palindrome.end(), palindrome.begin(),::tolower);
	cout << " the string is : " << palindrome << endl;
	
	for (int i = 0; i<length / 2; i++)
	{
		if (palindrome[i] != palindrome[length - 1 - i]) {

			cout << " This is not a Palindrome " << endl;
			return false;
		}
	}
	

	if (true) {
	
		cout << " This is a Palindrome " << endl;
		
	}

	return true;

}


int main() {

	string palindrome;
	cout << " Please enter a palindrome" << endl;
	cin >> palindrome;
	isPalindrome(palindrome);
	



}