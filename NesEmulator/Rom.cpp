#include "Rom.h"
#include <vector>
#include <iostream>
#include "Helpers/HexDisplayHelper.h"

Rom::Rom(vector<uint8_t> fileHeader, vector<uint8_t> data)
{
	this->fileHeader = fileHeader;
	this->data = data;
}

void Rom::printRom()
{
	auto romString = HexDisplayHelper::buildHexStringTable(data, 4, "");
	cout << std::hex << romString;
}
