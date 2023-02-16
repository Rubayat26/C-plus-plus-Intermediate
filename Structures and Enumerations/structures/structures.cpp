// structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;


struct Address
{
	
	string street;
	string city;
	string zipCode;
};



//Nested Structure
struct Customer
{
	int id=2;
	string name;
	string email;
	Address adress;

};

struct Movie
{
	string title;
	int year;
};




int main()
{
	Customer customer1;
	cout << "enter customer id: "<< endl;
	cin >> customer1.id;
	cout << "enter customer name: " << endl;
	cin >> customer1.name;
	cout << "enter customer email: " << endl;
	cin >> customer1.email;
	
	cout << "customer id: " << customer1.id << endl;
	cout << "customer name: " << customer1.name << endl;
	cout << "customer email: " << customer1.email << endl;
	

	//using nested structure to initialize structure 
	Customer customer2 = { 2, "John", "jogn@gmail.com", {"194 davidson rd","piscataway","08854"} };
	

	//Unpacking Structures
	auto [id, name, email, adress1] = customer2;
	cout << "customer city: " << adress1.city << endl;




	//Array of Structures 

	vector <Movie> movies;

	Movie movie1 = { "terminator", 1984 };
	movies.push_back(movie1);
	movies.push_back({ "termiantor 2" });

	cout << "movie title: " << movies[0].title << endl;

	for (auto& movie : movies)  // Auto& will refernce the movie instead of 
		                              //copying, it will direct refernce the value 
	{
		cout << "movie title: " << movie.title << endl;
	}




	return 0;




	

	
}

