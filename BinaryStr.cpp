//
//  binaryStr.cpp
//  labb
//
//  Created by Виктория Гладкова on 14.11.2022.
//


#include <bitset>
#include "BinaryStr.h"


using namespace std;

BinaryStr::BinaryStr() : String()
{
    binStr=nullptr;
}



BinaryStr::BinaryStr(const char* str) : String(str)
{

    this->binStr=str;
}

BinaryStr::BinaryStr(const BinaryStr& other)
{
    this->binStr = other;
}


BinaryStr::~BinaryStr()
{
   
}

unsigned long BinaryStr:: binToDec()
{
    return bitset<32>(binStr.cStr()).to_ulong();
    
}









