// readFromBinFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>  

using namespace std;

int main()
{
	std::ifstream inFile;
	string fileName = R"(D:\Learning Materials\C++ Learning\Ultimate C++ Intermediate\Streams and Files\writingBinaryFiles\test.bin)";
	inFile.open(fileName, std::ios::binary);
	if (inFile.is_open())
	{
		int nValue;
		while (inFile.read((char*)&nValue, sizeof(nValue))) 
		{
			cout << nValue << endl;
		};
		
	}
	inFile.close();
}


