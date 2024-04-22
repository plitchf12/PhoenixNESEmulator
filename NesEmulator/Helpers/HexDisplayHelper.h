#pragma once
#include <cstdint>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

template <typename T> 
class HexDisplayHelper
{
public:
	static std::string buildHexString(std::vector<T> vec, const std::string delim = "");
	static std::string buildHexTable(std::vector<T> vec, int cols, const std::string delim = "");
	static std::string buildHexTable(std::vector<T> vec, int cols, int rows, const std::string delim = "");
	static std::string convertToHexString(T value, const std::string delim = "");
};

template<typename T>
inline std::string HexDisplayHelper<T>::buildHexString(std::vector<T> vec, const std::string delim)
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

template <typename T>
inline std::string HexDisplayHelper<T>::buildHexTable(std::vector<T> vec, int cols, const std::string delim)
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
		// This cast is necessary because uint8_t is a typedef of unsigned char.
		// Ostream types will try to print the character represented by the value.
		ss << (unsigned int)vec[i];
		c++;

		if (c >= cols)
		{
			ss << std::endl;
			c = 0;
		}
		else
		{
			ss << delim;
		}

		i++;
	}

	result = ss.str();
	return result;
}

template <typename T>
inline std::string HexDisplayHelper<T>::buildHexTable(std::vector<T> vec, int cols, int rows, const std::string delim)
{
	std::string result = "";

	if (vec.size() < 1)
	{
		return result;
	}

	std::stringstream ss;
	ss << "Rom Contents\n" << std::hex;
	int c = 0;
	int i = 0;

	while (i < rows * cols && i < vec.size())
	{
		// This cast is necessary because uint8_t is a typedef of unsigned char.
		// Ostream types will try to print the character represented by the value.
		ss << (unsigned int)vec[i];
		c++;

		if (c >= cols)
		{
			ss << std::endl;
			c = 0;
		}
		else
		{
			ss << delim;
		}

		i++;
	}

	result = ss.str();
	return result;
}

template <typename T>
inline std::string HexDisplayHelper<T>::convertToHexString(T value, const std::string delim)
{
	std::string result = "";
	std::stringstream ss;

	ss << std::hex << value << delim;
	result = ss.str();

	return result;
}