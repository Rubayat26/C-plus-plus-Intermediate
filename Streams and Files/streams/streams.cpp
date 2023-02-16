// streams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;




int inputNumber(string prompt) 
{
	while (true)
	{
		int first;
		cout << prompt;
		cin >> first;
		if (cin.fail())
		{
			cin.clear(); // clear the error flag
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //omitting the buffer
			cout << "Invalid input" << endl;

		}
		else 
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			return first;
			break;
		}
	}

}






int main()
{
	//buffer is a temporary storage area for data
	// [10 20]
	// [ 20]



	/*
	cout << "First: ";
	int first;
	cin >> first;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	//cin.ignore(1000, '\n'); // ignore the rest of the line up to 1000 characters or until a new line is found

	cout << "Second: ";
	int second;
	cin >> second;

	cout << "You entered " << first << " and " << second << endl;

	/*string nameAndSurname;
	cout << "Give me your name and surname:" << endl;
	getline(cin, nameAndSurname);
	cout << "You entered: " << nameAndSurname << endl;
	
	*/

	int first = inputNumber("First: ");
	int second = inputNumber("Second: ");

	cout << "You entered " << first << " and " << second << endl;
}



