#pragma once
#include <fstream>
#include <string>
#include <vector>
#include "Rom.h"

using namespace std;

class RomReader
{
	public:	
		bool isValidFile();
		bool openFile(string filePath);
		Rom* readFile();

	private:
		bool validFile;
		std::ifstream romFile;
		std::vector<uint8_t> fileData;
		std::vector<uint8_t> fileHeader;

		// flag for valid INes format ROM
		bool isINesFile;

		// flag for valid NES 2.0 format ROM
		bool isNesV2File;
};

