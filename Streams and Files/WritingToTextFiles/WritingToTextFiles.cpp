// WritingToTextFiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream myFile;
	myFile.open("movie.csv");
	if (myFile.is_open())
	{
		myFile << "id,title,year\n"
			   << "1,Terminator 1,1984\n"
			   << "2,Terminator 2,1991" << endl; //While writing to a file, 
		                                        //you can use the endl manipulator to 
		                                     //insert a newline character into the file.
		myFile.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}

	ofstream file;
	file.open("data.txt");
	if (file.is_open())
	{
		file << "This is a line.\n";
		file << "This is another line.\n";
		file.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}

}
