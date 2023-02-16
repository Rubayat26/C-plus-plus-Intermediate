// ParsingStrings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct Movie {
	string title;
	int year;
};




Movie parseMovie(string str)
{
	stringstream stream;
	stream.str(str);

	Movie movie;
	getline(stream, movie.title, ',');
	stream >> movie.year;

	return movie;

}

int main() 
{
	/*    string name = "John, Doe";
	
		cout << "Enter your name: " << endl;
		getline(cin, name, ',');
		cout << "Hello " << name << endl;*/


	Movie movie = parseMovie("The Matrix,1999");
	cout << movie.title << " (" << movie.year << ")" << endl;


	return 0;
}


//The getline() function reads a whole line, 
//and using the newline character transmitted by the Enter key to mark the end of input. 
//The get() function is much like getline() but rather than read and discard the newline character,
//get() leaves that character in the input queue.