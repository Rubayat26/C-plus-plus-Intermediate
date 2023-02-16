// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void increasePrice(double& price) {
	price *= 1.2;

}

void increasePrice1(double* price) {
	*price *= 4;

}

void swap(int* first, int* second) {
	int temp = *first; // strong the value the first pointer points to
	*first = *second;
	*second = temp;

}

int main()
{
	int x = 5;
	int* p = &x;  //& percent sign is the address of operator
	std::cout << "x = " << x << std::endl;
	std::cout << "p = " << p << std::endl;
	std::cout << "*p = " << *p << std::endl;
	std::cout << "&x = " << &x << std::endl;


	*p = 10;  //Indirection (dereferencing) operator
	std::cout << "x = " << x << std::endl;
	std::cout << "p = " << p << std::endl;
	std::cout << "*p = " << *p << std::endl;
	std::cout << "&x = " << &x << std::endl;



	int a = 10;
	int b = 20;
	int* ptra = &a;
	*ptra *= 2;   // at this point a = 20

	ptra = &b;   //now ptr points to b
	*ptra *= 3;  // at this point b = 60

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;



	double price = 10.0;
	increasePrice(price);
	std::cout << "price = " << price << std::endl;


	double price1 = 10.0;
	increasePrice1(&price1);
	std::cout << "price1 = " << price1 << std::endl;


	swap(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	int numbers[] = { 10,20,30 };
	int* ptr = numbers;
	cout << numbers << endl;
	cout << ptr << endl;
	cout << *(ptr + 1) << endl;
	cout << ptr[1] << endl;
	cout << numbers[1] << endl;


	// we can perfrom only additions and subtractions on pointers 


	int numbArray[] = { 10,20,30 };

	cout << size(numbArray) << endl;
	int* ptr2 = &numbArray[sizeof(numbArray)/sizeof(int)-1];
	cout << *ptr2 << endl;

	
	
	while (ptr2 >= numbArray) {
		cout << *ptr2 << endl;
		ptr2--;
	}




}

