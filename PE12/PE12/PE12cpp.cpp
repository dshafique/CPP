#include <iostream>
#include <string>


using namespace std;


int main()
{
	string name;
	int size;
	do
	{
		cout << "enter a name: " << endl;
		cin >> name;
		size = name.length();
		char* myName = new char[size];
		

		
		for (int i = 0; i < size; i++)
		{
			if (name == "")
				cout << "name: " << endl;
			else
				myName[i] = toupper(name[i]);
		}
		for (int i = 0; i < size; i++)
		{
			cout << myName[i];
		}
		cout << endl;
		
	} while (name != "");

	return 0;

	
}
