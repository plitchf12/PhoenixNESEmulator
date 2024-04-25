#pragma once
#include "Rom.h"

namespace NesSystem 
{
	typedef unsigned int master_clock_cycle;

	class NesSystem
	{
		public: 
			master_clock_cycle masterClock;
			Rom* rom;

			NesSystem(Rom* rom);
	};
};

