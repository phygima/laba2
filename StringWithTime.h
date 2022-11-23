//
//  stringWithTime.h
//  labb
//
//  Created by Виктория Гладкова on 09.11.2022.
//

#ifndef StringWithTime_h
#define StringWithTime_h

#include "String.h"

class StringWithTime:public String
{
public:
    //defult constructor
    StringWithTime();

    //copy
    StringWithTime(const char* str);

    //copy constructor
    StringWithTime(const String& other);

    //destructor
    ~StringWithTime();

    
    //method for string creation local time
    void setTime();

    void getTime();
    

    
    
private:
    String strWithTime;
};


#endif /* StringWithTime_h */
