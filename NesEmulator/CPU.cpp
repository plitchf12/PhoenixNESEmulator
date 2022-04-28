#include "CPU.h"

#pragma region flagSettersGetters
// flag getters
uint8_t CPU::getCarryFlag()
{
	return this->statusFlags & 0x01;
}
uint8_t CPU::getZeroFlag()
{
	return this->statusFlags & 0x02;
}
uint8_t CPU::getIntDisableFlag()
{
	return this->statusFlags & 0x04;
}
uint8_t CPU::getDecimalFlag()
{
	return this->statusFlags & 0x08;
}
uint8_t CPU::getOverflowFlag()
{
	return this->statusFlags & 0x40;
}
uint8_t CPU::getNegativeFlag()
{
	return this->statusFlags & 0x80;
}

// flag setters
void CPU::setCarryFlag()
{
	this->statusFlags |= 0x01;
}
void CPU::setZeroFlag()
{
	this->statusFlags |= 0x02;
}
void CPU::setIntDisableFlag()
{
	this->statusFlags |= 0x04;
}
void CPU::setDecimalFlag()
{
	this->statusFlags |= 0x08;
}
void CPU::setOverflowFlag()
{
	this->statusFlags |= 0x40;
}
void CPU::setNegativeFlag()
{
	this->statusFlags |= 0x80;
}
#pragma endregion