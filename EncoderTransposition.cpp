#include <iostream>
#include "EncoderTransposition.h"

using namespace std; 

//default constructor
EncoderTransposition::EncoderTransposition(const char* str) :AbstractEncoder(str)
{
}

EncoderTransposition::~EncoderTransposition()
{

}

//string encoding method
void EncoderTransposition::encode()
{	
	if (length % 2 == 0)
	{		
		for (int i = 0; i < length / 2; i + 2)
		{
			encStr.setElement(str[i], i+1);
			//encStr[i + 1] = str[i];
			encStr.setElement(str[i+1], i);
			//encStr[i] = str[i + 1];
		}
	}
	else
	{		
		for (int i = 0; i <= length / 2; i = i + 2)
		{
			encStr.setElement(str[i], i + 1); 
			//encStr[i + 1] = str[i];

			encStr.setElement(str[i + 1], i);
			//encStr[i] = str[i + 1];
		}
		//Если нечет, то не меняем 
	}
}

void EncoderTransposition::decode()
{
	if (length % 2 == 0)
	{
		for (int i = 0; i < length / 2; i + 2)
		{
			decStr.setElement(str[i], i + 1);
			//encStr[i + 1] = str[i];
			decStr.setElement(str[i + 1], i);
			//encStr[i] = str[i + 1];
		}
	}
	else
	{
		for (int i = 0; i <= length / 2; i = i + 2)
		{
			decStr.setElement(str[i], i + 1); 
			//encStr[i + 1] = str[i];

			decStr.setElement(str[i + 1], i);
			//encStr[i] = str[i + 1];
		}
		//Если нечет, то не меняем 
	}
}

char* EncoderTransposition::getDoc()
{
	String doc = doc1 + doc2 + doc3;
	return doc.cStr();
}
