#pragma once
#include <cstdint>
#include <cstdio>
#include <iostream>
#include <vector>>
class HexDisplayHelper
{
	public:
		static void printHex(uint8_t value, const char* delim = "");
		static void printHexVector(std::vector<uint8_t> vec, const char* delim);
		static void printHexTable(std::vector<uint8_t> vec, int rows, int cols);
		static void couthex(std::ostream& out, uint8_t value, const char* delim);
		static std::string buildStringFromVector(std::vector<uint8_t> vec, std::string delim = "");
		static std::string buildStringTable(std::vector<uint8_t> vec, const char* delim = "");
};

