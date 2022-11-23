#pragma once
#include "AbstractEncoder.h"


class EncoderTransposition : public AbstractEncoder
{
public:
	EncoderTransposition(const char* str);


	~EncoderTransposition();

	//string encoding method
	void encode() override;

	void decode() override;

	char* getDoc();

protected:
private:
	String doc1 = { "In a transposition cipher, letters are rearranged " };
	String doc2 = { "according to a predetermined rule. For example, swap " };
	String doc3 = { "every two letters." };
};
