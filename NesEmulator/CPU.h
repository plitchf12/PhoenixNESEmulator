#pragma once
#include <cstdint>
#include "Instruction.h"

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

	Instruction currentInstr;

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


#pragma region cpuInstructions

	int ADC();
	int AND();
	int ASL();
	int BCC();
	int BCS();
	int BEQ();
	int BIT();
	int BMI();
	int BNE();
	int BPL();
	int BRK();
	int BVC();
	int BVS();
	int CLC();
	int CLD();
	int CLI();
	int CLV();
	int CMP();
	int CPX();
	int CPY();
	int DEC();
	int DEX();
	int DEY();
	int EOR();
	int INC();
	int INX();
	int INY();
	int JMP();
	int JSR();
	int LDA();
	int LDX();
	int LDY();
	int LSR();
	int NOP();
	int ORA();
	int PHA();
	int PHP();
	int PLA();
	int PLP();
	int ROL();
	int ROR();
	int RTI();
	int RTS();
	int SBC();
	int SEC();
	int SED();
	int SEI();
	int STA();
	int STX();
	int STY();
	int TAX();
	int TAY();
	int TSX();
	int TXA();
	int TXS();
	int TYA();


	int add();
#pragma endregion
};