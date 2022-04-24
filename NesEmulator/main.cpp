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

//int main(int argc, char* argv[])
int main()
{   
    // hard coding Test Rom Location for now
    std::string testRomFileDirectory = "C:\\Users\\Phillip\\source\\repos\\NesEmulator\\NESTestRoms";
    std::string branchTestFilename = "\\branch_timing_tests\\1.Branch_Basics.nes";
    std::string filename = testRomFileDirectory.append(branchTestFilename);

    std::ifstream inputFile(filename, std::ios::binary);  
    
    if (inputFile.good())
    {
        std::vector<uint8_t> v_buf(std::istreambuf_iterator<char>(inputFile), {});
        std::vector<uint8_t> fileHeader = {v_buf.begin(), v_buf.begin() + 128};       
        
        HexDisplayHelper::printHexTable(fileHeader, 4, 4);

    }

    

    //std::cout << "test\n" << argc << "\n";
    //std::cout << argv[1] << " " << argv[2] << "\n";

    // Open ROM file 


    auto nesSystem = new NesSystem::NesSystem();
    nesSystem->masterClock;
}


