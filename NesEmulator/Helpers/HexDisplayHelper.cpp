#include <iomanip>
#include "HexDisplayHelper.h"


void HexDisplayHelper::printHex(uint8_t value, const char* delim)
{
	printf("%02X", value);
	printf(delim);
}

void HexDisplayHelper::printHexVector(std::vector<uint8_t> vec, const char* delim)
{
	for (auto itr = vec.begin(); itr < vec.end(); itr++)
	{
		HexDisplayHelper::printHex(*itr);
		printf("%s", delim);
	}
}

void HexDisplayHelper::printHexTable(std::vector<uint8_t> vec, int rows, int cols)
{
	int r = 0;
	int c = 0;
	int i = 0;
	size_t length = vec.size();
	
	while (i < rows * cols && i < length)
	{
		printHex(vec[i]);
		c++;

		if (c >= cols)
		{
			std::cout << std::endl;
			c = 0;
			r++;
		}
		else 
		{
			std::cout << " ";
		}
		
		i++;
	}
}

void HexDisplayHelper::couthex(std::ostream& out, uint8_t value, const char* delim)
{
	std::ios_base::fmtflags f(out.flags());

	out << std::hex << unsigned(value) << delim;

	out.flags(f);
}
