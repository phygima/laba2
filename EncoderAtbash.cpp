#include <iostream>
#include "EncoderAtbash.h"
#include "String.h"

using namespace std; 


EncoderAtbash::EncoderAtbash(const char* str) :AbstractEncoder(str)
{
	
}


EncoderAtbash::~EncoderAtbash()
{

}

//string encoding method
void EncoderAtbash::encode()
{
	for (int i = 0; i < length; i++)
	{
		if (isupper(this->str[i]) && isalpha(this->str[i]))
		{
			int step;
			for (int j = 0; j < 26; j++)
			{
				if (upperDecoded[j] == this->str[i])
				{
					step = j;
				}
			}
			encStr.setElement(upperEncoded[step], i);
		}
		else if (isalpha(this->str[i]))
		{
			int step;
			for (int j = 0; j < 26; j++)
			{
				if (lowerDecoded[j] == this->str[i])
				{
					step = j;
				}
			}
			encStr.setElement(lowerEncoded[step], i);
		}
		else if (this->str[i] >= '0' && this->str[i] <= '9')
		{
			int step;
			for (int j = 0; j < 10; j++)
				if (decArrNumb[j] == this->str[i])
				{
					step = j;
				}
			encStr.setElement(encArrNumb[step], i);
		}
		else if (this->str[i] == ' ')
		{
			encStr.setElement(' ', i);
		}
	}
}

//string decoding method
void EncoderAtbash::decode()
{
	for (int i = 0; i < length; i++)
	{
		if (isupper(this->str[i]) && isalpha(this->str[i])) //Capital + letter
		{
			int step;
			for (int j = 0; j < 26; j++)
			{
				if (upperEncoded[j] == this->str[i])
				{
					step = j;
				}
			}
			/*decStr[i] = upperDecoded[step];*/
			decStr.setElement(upperDecoded[step], i);
		}
		else if (isalpha(this->str[i])) //just a letter
		{
			int step;
			for (int j = 0; j < 26; j++)
			{
				if (lowerEncoded[j] == this->str[i])
				{
					step = j;
				}
			}
			/*decStr[i] = lowerDecoded[step];*/
			encStr.setElement(lowerDecoded[step], i);
		}
		else if (this->str[i] >= '0' && this->str[i] <= '9')
		{
			int step;
			for (int j = 0; j < 10; j++)
				if (encArrNumb[j] == this->str[i])
				{
					step = j;
				}
			/*encStr[i] = decArrNumb[step];*/
			decStr.setElement(decArrNumb[step], i);
		}
		else if (this->str[i] == ' ')
		{
			/*decStr[i] = ' ';*/
			decStr.setElement(' ', i);
		}
	}
}

char* EncoderAtbash::getDoc()
{
	String doc = doc1 + doc2 + doc3 + doc4 + doc5;
	return doc.cStr();
}


