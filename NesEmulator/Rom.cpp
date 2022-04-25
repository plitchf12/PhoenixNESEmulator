#include "Rom.h"
#include <vector>

using namespace std;

Rom::Rom(vector<uint8_t> fileHeader, vector<uint8_t> data)
{
	this->fileHeader = fileHeader;
	this->data = data;
}
