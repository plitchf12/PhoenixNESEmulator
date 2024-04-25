#include "NesSystem.h"

#include "Rom.h"

NesSystem::NesSystem::NesSystem(Rom* rom)
{
	masterClock = 0;
	this->rom = rom;
}
