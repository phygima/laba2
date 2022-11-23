#include <iostream>
#include "EncoderROT1.h"

using namespace std;

//default constructor
EncoderROT1::EncoderROT1(const char* str) :AbstractEncoder(str)
{

}

EncoderROT1::~EncoderROT1()
{

}

//string encoding method
void EncoderROT1::encode()
{
	for (int i = 0; i < length; i++)
	{
		/*char a = str[i];
		a = a + 1;
		encStr.setElement(a, i);*/
		str[i] = str[i] + 1;
		encStr.setElement(str[i], i);
	}
}

void EncoderROT1::decode()
{
	for (int i = 0; i < length; i++)
	{
		/*char a = str[i];
		a = 'a' - 1;
		decStr.setElement(a, i);*/
		str[i] = str[i] - 1;
		encStr.setElement(str[i], i);
	}
}

char* EncoderROT1::getDoc()
{
	String doc = doc1 + doc2 + doc3;
	return doc.cStr();
}
