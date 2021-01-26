#include <iostream>
#include "Cow.h"
#include "String2.h"
//question block;
void q1();
void q2();
int main() 
{
	q1();
	q2();
	return 0;
}

void q1()
{
	using std::cout;
	using std::endl;
	Cow c1;
	Cow c2("c2", "1", 1000);
	Cow c3("12345678912345", "123456789123456789123456789", 1000);
	c3.ShowCow();
	//c1.ShowCow();
	c2.ShowCow();
	//cout << c1 << endl;
	c1 = c2;
	c1.ShowCow();
	c2.ShowCow();
}

void q2()
{
	using namespace std;
	String2 s1(" and I am a C++ student.");
	String2 s2 = "Please enter your name: ";
	String2 s3;
	cout << s2;
	cin >> s3;
	s2 = "My name is " + s3;
	cout << s2;
	s2 = s2 + s1;
	s2.StringUpper();
	cout << "The string\n" << s2 << "\ncontains " << s2.char_count('A')
		<< " 'A' characters in it.\n";
	s1 = "red";
	String2 rgb[3] = { String2(s1), String2("green"), String2("blue") };
	cout << "Enter the name of a primary color for mixing light: ";
	String2 ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.Stringlow();
		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i])
			{
				cout << "That's right!\n";
				success = true;
				break;
			}
		}
		if (success)
		{
			break;
		}
		else
		{
			cout << "Try again!\n";
		}
	}

	cout << "Bye!\n";
}