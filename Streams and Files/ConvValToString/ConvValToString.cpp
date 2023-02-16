// ConvValToString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;



void ConvValToString(double number, int precision)
{
	//double number = 123.456789;
	stringstream stream;
	stream << fixed << setprecision(precision) << number;
	string str = stream.str();
	cout << str << endl;
}


int main()
{
	ConvValToString(123.456789, 3);

}


