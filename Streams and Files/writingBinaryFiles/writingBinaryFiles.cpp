// writingBinaryFiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int numbers[] = { 1,2,3 };
	ofstream file = ofstream("test.bin", ios::binary);

	/*
	file.write((char*)numbers, sizeof(numbers));
	file.close();
	*/


	if (file.is_open()) {
		file.write(reinterpret_cast<char*>(numbers),sizeof(numbers));
		file.close();
	}
	else {
		cout << "Could not open file" << endl;
	}

	cout << numbers << endl;
	cout << &numbers << endl;

}

