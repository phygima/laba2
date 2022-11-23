#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include "StringWithTime.h"
#include "BinaryStr.h"
#include "EncoderAtbash.h"
#include "EncoderROT1.h"
#include "EncoderTransposition.h"	
#include "AbstractEncoder.h"



using namespace std;



int main()
{

   	StringWithTime str1="hello";
   	str1.setTime();
   	str1.getTime();
    
   	BinaryStr str2="01001";
   	cout<<str2.binToDec()<<endl;
	
	
	
	
	EncoderAtbash encoderAtbash = "Hello";
	encoderAtbash.encode();
	cout << "Ecncoded: " << encoderAtbash.getEncStr() << endl;
	cout << "\n" << encoderAtbash.getDoc() << endl << endl;


	EncoderTransposition encoderTransposition = "eHllo";
	encoderTransposition.decode();
	cout << "Decoded: " << encoderTransposition.getDecStr() << endl;
	cout << "\n" << encoderTransposition.getDoc() << endl << endl;


	EncoderROT1 encoderROT1 = "Hello";
	encoderROT1.encode();
	cout << "Encoded: " << encoderROT1.getEncStr() << endl;
	cout << "\n" << encoderROT1.getDoc() << endl;
	

	system("pause");
	return 0;
}
