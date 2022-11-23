#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include "StringWithTime.h"
#include "BinaryStr.h"


using namespace std;



int main()
{

    StringWithTime str1="hello";
    str1.setTime();
    cout<<str1.cStr()<<endl;
    
    BinaryStr str2="01001";
    cout<<str2.binToDec()<<endl;
    
    
    
    
    
   
    
	system("pause");
	return 0;
}
