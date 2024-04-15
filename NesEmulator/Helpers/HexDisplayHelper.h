#pragma once
#include <cstdint>
#include <cstdio>
#include <iostream>
#include <vector>
class HexDisplayHelper
{
	public:				
		static std::string buildHexStringFromVector(std::vector<uint8_t> vec, const std::string delim = "");
		static std::string buildHexStringTable(std::vector<uint8_t> vec, int cols, const std::string delim = "");
		static std::string buildHexStringTable(std::vector<uint8_t> vec, int cols, int rows, const std::string delim = "");
		static void couthex(std::ostream& out, uint8_t value, const std::string delim = "");
};