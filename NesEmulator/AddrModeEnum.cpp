enum AddrModeEnum
{
	// Implicit: the destination is implied by the instruction.
	Imp,

	// Accumulator: Get the address from the accumulator register?
	Accu,

	// Immediate: Use the 8-bit operand of the instruction as the address.
	Imm,

	// Zero page: Fetches the value from an 8-bit address on the zero page.
	ZPg,

	// Absolute: Fetches the value from a 16-bit address anywhere in memory.
	Abs,

	// Relative: Branch instructions (e.g. BEQ, BCS) have a relative addressing 
	// mode that specifies an 8-bit signed offset relative to the current PC.
	Rel,

	// Indirect: The JMP instruction has a special indirect addressing mode 
	// that can jump to the address stored in a 16-bit pointer anywhere in memory.
	Ind,

	// Zero page indexed using the X register.
	ZPgX,

	// Zero page indexed using the Y register.
	ZPgY,

	// Absolute indexed using the Y register.
	AbsX,

	// Absolute indexed using the Y register.
	AbsY,

	// Indirect indexed using the X register.
	IndX,

	// Indirect indexed using the Y register.
	IndY
};