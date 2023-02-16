// ReadingFromTextFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


struct Movie
{
	int id;
	string title;
	int year;
	
};

int main()
{
	ifstream movieFile;
	string path = R"(D:\Learning Materials\C++ Learning\Ultimate C++ Intermediate\Streams and Files\WritingToTextFiles\movie.csv)";
	movieFile.open(path);
	if (movieFile.is_open())
	{
		string str;
		getline(movieFile, str);
		while (!movieFile.eof())
		{
			getline(movieFile, str, ',');
			//cout << str << endl;
			if (str == "")
			{
				break;            // Beacuse when we wrote in the file we used endl 
				                  //and created a new line, which is an empty string  
			}
			Movie movie;
			movie.id = stoi(str);

			getline(movieFile, str, ',');	
			//cout << str << endl;
			movie.title = str;

			getline(movieFile, str);  // read the rest of the line
			//cout << str << endl;
			movie.year = stoi(str);  


			cout << movie.id << " " << movie.title << " " << movie.year << endl;

		}
		movieFile.close();
	}
	else
	{
		cout << "Could not open file: " << endl;
	}
}




