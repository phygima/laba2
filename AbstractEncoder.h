#pragma once
#include "String.h"

class AbstractEncoder
{
public:
    AbstractEncoder(); //default constructor


    AbstractEncoder(const char* str); //constructor with parameter


    AbstractEncoder(const String& other); //copy constructor


    ~AbstractEncoder(); //destructor

    virtual void encode() = 0; //virtual string encoding method
    virtual void decode() = 0;

	//encoded string output method
	char* getEncStr();

	//decoded string output method 
	char* getDecStr();

	//metod cStr()
	char* cStr();

    char getElement(int indexE);

    char* getSubStr(int start, int len);

    char* erase(int start, int len);

    char* getStrchr(char ch);

    AbstractEncoder& operator=(const AbstractEncoder& other);

protected:
    String str; //input string field
    String encStr; //encoded string field
    String decStr; //decoded string field
    int length; //string length field

private:
    
};
