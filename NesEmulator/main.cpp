// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stdio.h>
#include "NesSystem.h"
#include "HexDisplayHelper.h"
#include "RomReader.h"
#include "Rom.h"

//int main(int argc, char* argv[])
int main()
{   
    // hard coding Test Rom Location for now
    std::string testRomFileDirectory = "D:\\Users\\Phillip\\Documents\\NESTestRoms";
    std::string branchTestFilename = "\\branch_timing_tests\\1.Branch_Basics.nes";
    std::string fileName = testRomFileDirectory.append(branchTestFilename);

    RomReader* reader = new RomReader();
    Rom* rom = nullptr;
    if (reader->openFile(fileName))
    {
        rom = reader->readFile();
    }    

    rom;
    //std::cout << "test\n" << argc << "\n";
    //std::cout << argv[1] << " " << argv[2] << "\n";

    // Open ROM file 


    auto nesSystem = new NesSystem::NesSystem();
    nesSystem->masterClock;
}


