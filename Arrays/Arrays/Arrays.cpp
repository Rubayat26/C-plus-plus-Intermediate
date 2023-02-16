// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;




void printNumbers(int numbers[], int size) {
	for (int i = 0; i < size; i++)  //size(numbers) only works for defined size of array 
		cout << numbers[i]<< endl;
}

int findValArray(int numbers[], int size, int val) {
	for (int i = 0; i < size; i++)
		if (numbers[i] == val)
			return i;
	return -1;
}

void swap(int numbers[], int i, int j) {
	int temp = numbers[i];
	numbers[i] = numbers[j];
	numbers[j] = temp;
}

void bubbleSort(int numbers[], int size) {
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size - 1; j++)
			if (numbers[j] > numbers[j + 1]) {
				swap(numbers, j, j + 1);
			}
}



int main() {
	int first1[] = {  10, 20, 30 };
	
	int second2[2];
	second2[0] = 1; 
	/*
	for (int i = 0; i < size(first1); i++)
		second2[i] = first1[i];
		*/
	cout << first1 << endl;
	cout << second2 << endl;
	cout << second2[0] << endl;
	cout << second2[1] << endl;

	int first[] = {10, 20, 30};
	int second[] = {10, 20, 30};
	bool areEqual = true;
	for (int i = 0; i < size(first); i++)
		if (first[i] != second[i]) {
			areEqual = false;
			break;
		}
	cout << boolalpha << areEqual << endl;





	int numbers[] = { 6,3,2,4,1,5};
	printNumbers(numbers, size(numbers));



	cout << numeric_limits<long long>::min() << endl;
	cout << numeric_limits<long long>::max() << endl;

	cout << numeric_limits<size_t> ::min() << endl;
	cout << numeric_limits<size_t> ::max() << endl; 

	// if I have a 32 bit compiler size_t is unsigned int
	// if I have a 64 bit compiler size_t is unsigned long long 




	// Unpacking Arrays or C++ constructive binding 
	int values[] = { 1, 2, 3 };
	

	auto [x, y, z] = values;

	std::cout << x << ' ' << y << ' ' << z << std::endl;

	
	cout << findValArray(numbers, size(numbers), 2) << endl;

	bubbleSort(numbers, size(numbers));
	
	printNumbers(numbers, size(numbers));
	
	
	//return 0;
	
}

