#pragma once
#include <cstdint>

class CPU
{
	int cycles;

	// Registers
	uint16_t pc;
	uint8_t sp;
	uint8_t regA;
	uint8_t regX;
	uint8_t regY;

	// Status register
	uint8_t statusFlags;

#pragma region flagSettersGetters
	uint8_t getCarryFlag();
	uint8_t getZeroFlag();
	uint8_t getIntDisableFlag();
	uint8_t getDecimalFlag();
	uint8_t getOverflowFlag();
	uint8_t getNegativeFlag();

	void setCarryFlag();	
	void setZeroFlag();	
	void setIntDisableFlag();
	void setDecimalFlag();
	void setOverflowFlag();
	void setNegativeFlag();
#pragma endregion
};

