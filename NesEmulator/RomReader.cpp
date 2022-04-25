#include <fstream>
#include "RomReader.h"

// returns flag for valid file
bool RomReader::isValidFile()
{
	return validFile;
}

// opens the file at the provided file path
bool RomReader::openFile(string filePath)
{
    romFile.open(filePath, std::ios::binary);

    validFile = romFile.good() ? true : false;

    return validFile;
}

// read the file from the stream
Rom* RomReader::readFile()
{
    if (!validFile)
    {
        return nullptr;
    }

    fileData = std::vector<uint8_t>(std::istreambuf_iterator<char>(romFile), {});
    int fileOffset = 0;

    // File Header
    std::vector<uint8_t> fileHeader = { fileData.begin(), fileData.begin() + 16 };
    fileOffset += 16;

    // File header starts with NES followed by EOF character for both formats
    if (fileHeader[0] == 0x4e && fileHeader[1] == 0x45 && fileHeader[2] == 0x53 && fileHeader[3] == 0x1A)
    {
        isINesFile = true;
    }
    else 
    {
        isINesFile = false;
        return nullptr;
    }

    std::uint8_t flags6 = fileHeader[6];
    std::uint8_t flags8 = fileHeader[8];
    bool trainerPresent = false;

    // check if 512 byte trainer is present
    std::vector<uint8_t> trainer;
    if (flags6 & 0b00000100)
    {
        trainerPresent = true;
        trainer = { fileData.begin() + fileOffset, fileData.begin() + fileOffset + 512 };
        fileOffset += 512;
    }

    std::vector<uint8_t> prgRomData = { fileData.begin() + fileOffset, fileData.begin() + fileOffset + 16384 };

    Rom* rom = new Rom(fileHeader, prgRomData);

    return rom;               
}
