#ifndef LAB1_MYSTRING_H
#define LAB1_MYSTRING_H
#define _CRT_SECURE_NO_DEPRECATE




class String {


public:
	//defult constructor
	String();

	//constructor with parameters
	String(const char* str);

	//copy constructor
	String(const String& other);

	//destructor
	~String();

	//method Get
	char* getString();
	
	//method Set
	void setString(char* str);

	//reversive length
	int lengthStr();

	//method cstr
	char* cStr();

	//metod get substring
	char* getSubStr(int start, int len);

	//metod get element of string
	char getElement(int index);

	void setElement(char sym, int index);
	
	 //substring removal method
	char* erase(int size, int start, int len);

	//method to get the first occurrence of a  substring
	char* getStrchr(char* s, char c);

	// overloading = operator
	String& operator =(const String& other);

	String& operator =(const char* other);

	String& operator= (const char& ch);


	//overloading + operator
	String operator+(const String& other);


	//overloading == operator
	bool operator ==(const String& other);

	//overloading [] operator
	char& operator [](int index);



protected:


//private:
	char* str;
	int length;
	int sz;

};



#endif //LAB1_MYSTRING_H
