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

#pragma region cpuInstructions
// each instruction has it's opcode above it

// 0x00
int brkImpl();
// 0x01
int oraXInd();
// 0x05
int oraZpg();
// 0x06
int aslZpg();
// 0x08
int phpImpl();
// 0x09
int oraImm();
// 0x0A
int aslA();
// 0x0D
int oraAbs();
// 0x0E
int aslAbs();
// 0x10
int bplRel();
// 0x11
int oraIndY();
// 0x15
int oraZpgX();
// 0x16
int aslZpgX();
// 0x18
int clcImpl();
// 0x19
int oraAbsY();
// 0x1D
int oraAbsX();
// 0x1E
int aslAbsX();
// 0x20
int jsrAbs();
// 0x21
int andxInd();
// 0x24
int bitZpg();
// 0x25
int andZpg();
// 0x26
int rolZpg();
// 0x28
int plpImp();
// 0x29
int andImm();
// 0x2A
int rolA();
// 0x2C
int bitAbs();
// 0x2D
int andAbs();
// 0x2E
int rolAbs();
// 0x30
int bmiRel();
// 0x31
int andIndY();
// 0x35
int andZpgX();
// 0x36
int rolZpgX();
// 0x38
int secImpl();
// 0x39
int andAbsY();
// 0x3D
int andAbsX();
// 0x3E
int rolAbsX();
// 0x40
int rtiImp();
// 0x41
int eorXInd();

#pragma endregion

