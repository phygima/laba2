#include <stdio.h>
#include "AbstractEncoder.h"
#include <memory>
#include "String.h"


	AbstractEncoder::AbstractEncoder()
	{
		str = nullptr;
		length = 0;
	}

	//constructor with parameter  
	AbstractEncoder::AbstractEncoder(const char* accStr)
	{
		str = String(accStr);
		length = str.lengthStr();
		encStr = str;
		decStr = str;
	}

	//copy constructor
	AbstractEncoder::AbstractEncoder(const String& other)
	{
		this->str = String(other);
		length = this->str.lengthStr();
		encStr = this->str;
		decStr = this->str;
	}
	AbstractEncoder::~AbstractEncoder() //destructor
	{

	}
	
	//encoded string output method
	char* AbstractEncoder::getEncStr()//--------------------------	
	{
		return encStr.getString();
	}

	//decoded string output method 
	char* AbstractEncoder::getDecStr()//--------------------------	
	{
		return decStr.getString();
	}

	//metod cStr()
	char* AbstractEncoder::cStr()//--------------------------		
	{
		char* ch = new char[length + 1];
		int i;
		for (i = 0; i < length; i++) {
			ch[i] = str[i];
		}
		ch[i] = '\0';
		return ch;
	}

	char AbstractEncoder::getElement(int indexE)//--------------------------	
	{
		return str.getElement(indexE);;
	}

	char* AbstractEncoder::getSubStr(int start, int len)//--------------------------
	{
		return str.getSubStr(start, len);
	}

	char* AbstractEncoder::erase(int start, int len)//--------------------------
	{
		int size = strlen(getSubStr(start, len));
		return str.erase(size, start, len);
	}

	char* AbstractEncoder::getStrchr(char ch)//--------------------------
	{
		return str.getStrchr(str.cStr(), ch);
	}

	AbstractEncoder& AbstractEncoder::operator=(const AbstractEncoder& other)
	{
		String tmpStr;

		this->str = tmpStr.cStr();

		length = strlen(tmpStr.cStr());
		this->str = new char[length + 1];

		for (int i = 0; i < length; i++)
		{
			this->str[i] = tmpStr[i];
		}

		this->str[length] = '\0';

		return *this;
	}
