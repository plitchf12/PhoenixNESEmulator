#pragma once

#include <string>
#include "AddrModeEnum.cpp"

using namespace std;

class Instruction
{
	public:
		int Cycles;
		string Name;
		int (*Operation);
		AddrModeEnum AddrMode;
};

