#include "Rom.h"
#include <vector>
#include <iostream>

using namespace std;

Rom::Rom(vector<uint8_t> fileHeader, vector<uint8_t> data)
{
	this->fileHeader = fileHeader;
	this->data = data;
}

void Rom::printRom()
{
	// set flags
	std::cout.flags(std::ios::hex);

	// lines for 16 bytes with spaces
	std::cout.width(37);

	for (auto iter : data)
	{
		std::cout << iter;
	}
}
