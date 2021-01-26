#pragma once
#include <iostream>
using std::istream;
using std::ostream;
class String2
{
private:
	char* str;
	int len;
	static int num_strings;
	static const int CLINLIM = 80;

public:
	//constructors and other methods
	String2(const char* s);
	String2();
	String2(const String2& );
	~String2();
	inline int length()const { return len; }
	bool Stringlow();
	bool StringUpper();
	int char_count(char) const;
	//overloaded op
	String2 operator+(const String2 & st);
	String2& operator=(const String2&);
	String2& operator=(const char*);
	char& operator[](int i);
	const char& operator[](int i)const;
	//friends operator
	friend bool operator< (const String2 & st, const String2 & st2);
	friend bool operator> (const String2& , const String2& );
	friend bool operator== (const String2& st, const String2& st2);
	friend ostream& operator<< (ostream&, String2& st);
	friend istream& operator>> (istream&, String2& st);
	friend String2 operator+(const char*, const String2&);
	//for static function
	static int HowMany();
};
