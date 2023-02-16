// Enums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

enum Action 
{ 
	List=1, //if we dont intialize the action enum lis to 1, enum will start from zero
	Add, 
	Update 
};



int main()
{
	cout <<
		"1:  List invoices" << endl <<
		"2:  Add invoice" << endl <<
		"3:  update invoice" << endl <<
		"select: ";

	int input;
	cin >> input;

  
	

	Action action = static_cast<Action>(input);  //if we dont intialize the action enum lis to 1, 
											   //enum will start from zero 


	if (action < 1 || action > 3)
	{
		cout << "Invalid input" << endl;
		return 1;
	}

	switch (action)
	{
		case Action::List:
		cout << "Listing invoices";
		break;
	case Action::Add:
		cout << "Adding invoice";
		break;
	case Action::Update:
		cout << "Updating invoice";
		break;
	default:
		break;
	}

	cout << endl;

	
}

