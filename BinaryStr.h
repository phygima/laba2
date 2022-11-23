//
//  binaryStr.h
//  labb
//
//  Created by Виктория Гладкова on 14.11.2022.
//

#ifndef BinaryStr_h
#define BinaryStr_h


#include <iostream>
#include "String.h"


class BinaryStr:public String
{
public:
    //defult constructor
    BinaryStr();
    
    //copy
    BinaryStr(const char* str);
    
    //copy constructor
    BinaryStr(const BinaryStr& other);
    
    //destructor
    ~BinaryStr();
    
    
    
    unsigned long binToDec();
    
    
    
    
protected:
    String binStr;
    
};

#endif /* BinaryStr_h */
