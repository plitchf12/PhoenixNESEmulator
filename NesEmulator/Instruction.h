#pragma once

#include <string>

using namespace std;

class Instruction
{
	public:
		int cycles;
		string name;
		int (*instrFunc);
};

