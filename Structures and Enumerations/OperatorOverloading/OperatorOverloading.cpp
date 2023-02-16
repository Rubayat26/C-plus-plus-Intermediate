// OperatorOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


struct ReleaseMovie
{
	
	int year;
	int month;
	int day;
};



struct Movie
{
	string title;
	ReleaseMovie releaseDate= {1990,1,1};
	
};



struct Point
{
	int x;
	int y;
};


ostream& operator<<(ostream& out, const Movie& movie)
{
	out << movie.title << " (" << movie.releaseDate.year << ")";
	return out;
};



bool operator == (const Point& first, const Point& second)
{
	return first.x == second.x && first.y == second.y;
}


ostream& operator<<(ostream& out, const Point& point)
{
	out << point.x << ", " << point.y;
	return out;
}



int main()
{
	Movie movie1;
	movie1.title = "Termanitor";
	movie1.releaseDate = { 1984, 12, 12 };


	cout << movie1.releaseDate.year << endl;
	cout << movie1<< endl;

	
	cout << movie1.title << endl;
	

	
	Point point1 = { 2, 3 };
	Point point2 = { 2, 3 };
	Point point3 = { 5, 6 };

	cout << (point1 == point2) << endl;  //1 means true
	cout << (point1 == point3) << endl;  //0 means false

	cout << point1 << endl;
	cout << point2 << endl;
	cout << point3 << endl;
	

	return 0;


}


