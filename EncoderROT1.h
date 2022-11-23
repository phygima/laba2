#pragma once
#include "String.h"
#include "AbstractEncoder.h"


class EncoderROT1 : public AbstractEncoder
{
public:

	EncoderROT1(const char* str);


	~EncoderROT1();

	//string encoding method
	void encode() override;

	void decode() override;

	char* getDoc();
protected:
private:
	String doc1 = { "This cipher is known to many children. The key is simple: " };
	String doc2 = { "each letter is replaced by the one following it in the " };
	String doc3 = { "alphabet." };
};
