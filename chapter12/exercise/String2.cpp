#include "String2.h"
#include <iostream>
#include <cctype>
int String2::num_strings = 0;
String2::String2(const char* s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len+1 ,s);
	num_strings++;
}

String2::String2()
{
	len = 0;
	num_strings++;
	str = new char[1];
	str[0] = '\0';
}

String2::String2(const String2& st)
{
	num_strings++;
	len = std::strlen(st.str);
	str = new char[len + 1];
	strcpy_s(str, len + 1, st.str);

}

String2::~String2()
{
	num_strings--;
	delete[] str;
}

bool String2::Stringlow()
{
	if (len == 0) return false;
	for (int i = 0; i < len; i++)
	{
		str[i] = std::tolower(str[i]);
	}
	return true;
}

bool String2::StringUpper()
{
	if (len == 0) return false;
	for (int i = 0; i < len; i++)
	{
		str[i] = std::toupper(str[i]);
	}
	return true;
}

int String2::char_count(char a) const
{
	int result = 0;
	if (len == 0) return 0;
	for (int i = 0; i < len; i++)
	{
		if (a == str[i]) result++;
	}
	return result;
}

String2 String2::operator+(const String2& st)
{
	String2 temp;
	temp.len = this->len + st.len;
	delete[] temp.str;
	temp.str = new char[temp.len + 1];
	strcpy_s(temp.str, len+1,str);
	strcat_s(temp.str, temp.len+1,st.str);
	return temp;
}

String2 operator+(const char*c1, const String2&st)
{
	String2 temp;
	temp.len = strlen(c1) + st.len;
	delete[] temp.str;
	temp.str = new char[temp.len + 1];
	strcpy_s(temp.str, strlen(c1)+1, c1);
	strcat_s(temp.str, temp.len+1,st.str);
	return temp;
}
char& String2::operator[](int i)
{
	if (i >= len) return str[len - 1];
	return str[i];
}

const char& String2::operator[](int i) const
{
	if (i >= len) return str[len - 1];
	return str[i];
}

int String2::HowMany()
{
	return num_strings;
}

istream& operator>>(istream& os, String2& st)
{
	char temp[String2::CLINLIM];
	os.get(temp, String2::CLINLIM);
	if (os)
	{
		st = temp;
	}
	//clear buffer
	while (os && os.get() != '\n')
		continue;
	return os;
}

ostream& operator<<(ostream& os, String2& st)
{
	os << st.str << std::endl;
	return os;
}

bool operator==(const String2& st, const String2& st2)
{
	return (std::strcmp(st.str, st2.str) == 0);
}

bool operator>(const String2& st, const String2& st2)
{
	return (std::strcmp(st.str, st2.str) > 0);
}

bool operator<(const String2& st, const String2& st2)
{
	return (std::strcmp(st.str, st2.str) < 0);
}

String2& String2::operator=(const char* st)
{
	delete[] str;
	len = strlen(st);
	str = new char[len + 1];
	strcpy_s(str, len + 1, st);
	return *this;
}

String2& String2::operator=(const String2& st)
{
	if (&st == this) return *this;
	len = st.len;
	delete[] str;
	str = new char[len + 1];
	strcpy_s(str, len + 1, st.str);
	return *this;
}

