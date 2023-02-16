// StringsDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


bool isValid(string customerNumber)
{
	if (customerNumber.length() != 6)
	{
		return false;
	}

	if (isalpha(customerNumber[0]) == false)
	{
		return false;
	}

	if (isalpha(customerNumber[1]) == false)
	{
		return false;
	}

	for (int i = 2; i < customerNumber.length(); i++)
	{
		if (isdigit(customerNumber[i]) == false)
		{
			return false;
		}
	}
	
	return true;
}

int main()
{
	
	
	//Null Terminator
	char name[4] = { 'J', 'o', 'e', '\0' };


	// String Literal
	char name2[4] = "Rob";


	//Character Literal
	name2[0] = 'J';

	
	string fullName = "Rubayat Ul Islam";
	int index = fullName.rfind(' ');
	cout << index << endl;

	string firstName = fullName.substr(0, index);
	cout << firstName << endl;
	string lastName = fullName.substr(index + 1, fullName.length() - index);
	cout << lastName << endl;



	
	string customerNumber;
	cout << "Enter Customer Number : ";
	cin >> customerNumber;
	auto valid = isValid(customerNumber);
	cout  << boolalpha <<valid << endl;
	
	
	
	return 0; 
}

