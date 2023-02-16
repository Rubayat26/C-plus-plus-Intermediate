// DynamicMemoryAllocation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int* numbersA = new int[3];
	delete[] numbersA;
	
	numbersA = nullptr;

	int arr[4] = {};
	cout << arr[3] << endl;

	
	int capacity = 5;
	int* numbers = new int[capacity];
	int entries = 0;

	while (true)
	{
		cout << "Enter a number: ";
		cin >> numbers[entries];
		if (cin.fail()) break;
		entries++;
		if (entries == capacity)
		{
			capacity *= 2;
			int* temp = new int[capacity];
			for (int i = 0; i < entries; i++)
			{
				temp[i] = numbers[i];
			}
			delete[] numbers; //We have to delete these memory locations 
			                   //because we are creating new ones
			                   //otherwise there will be memory leaks
			numbers = temp;
		}
		
	}
	
	
	
	for (int i = 0; i < entries; i++)
	{
		cout << numbers[i] << endl;
	}
	delete[] numbers;
	
	return 0;
}

