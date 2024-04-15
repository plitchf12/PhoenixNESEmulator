#include <iomanip>
#include <sstream>
#include "HexDisplayHelper.h"

std::string HexDisplayHelper::buildHexStringFromVector(std::vector<uint8_t> vec, const std::string delim = "")
{
	std::stringstream ss;
	std::string result = "";

	if (vec.size() > 0)
	{
		for (const auto value : vec)
		{
			ss << value << delim;
		}

		result = ss.str();
		result = result.substr(0, result.length() - delim.length());
	}

	return result;
}

std::string HexDisplayHelper::buildHexStringTable(std::vector<uint8_t> vec, int cols, const std::string delim = "")
{
	std::string result = "";

	if (vec.size() < 1)
	{
		return result;
	}

	std::stringstream ss;
	ss << std::hex;
	int c = 0;
	int i = 0;
	
	while (i < vec.size())
	{
		ss << vec[i];
		c++;

		if (c >= cols)
		{
			std::cout << std::endl;
			c = 0;
		}
		else 
		{
			std::cout << " ";
		}
		
		i++;
	}
}

std::string buildHexStringTable(std::vector<uint8_t> vec, int cols, int rows, const std::string delim = "")
{	
	std::string result = "";

	if (vec.size() < 1)
	{
		return result;
	}

	std::stringstream ss;
	ss << std::hex;
	int c = 0;
	int i = 0;
	
	while (i < rows * cols && i < vec.size())
	{
		ss << vec[i];
		c++;

		if (c >= cols)
		{
			std::cout << std::endl;
			c = 0;
		}
		else 
		{
			std::cout << " ";
		}
		
		i++;
	}
}

void HexDisplayHelper::couthex(std::ostream& out, uint8_t value, const std::string delim = "")
{
	std::ios_base::fmtflags f(out.flags());

	out << std::hex << unsigned(value) << delim;

	out.flags(f);
}		
