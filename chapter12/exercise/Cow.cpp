#include "Cow.h"
#include <cstring>
#include <iostream>
Cow::Cow()
{
	name[0] = '\0';
	hobby = nullptr;
	weight = 0;
}

Cow::Cow(const char* nm, const char* ho, double wt)
{
	int nm_length = std::strlen(nm);
	int ho_length = std::strlen(ho);
	strcpy_s(name,20,nm);
	hobby = new char[ho_length + 1];
	strcpy_s(hobby,ho_length+1, ho);
	weight = wt;
}

Cow::Cow(const Cow& c)
{	
	if (this == &c) return;
	int nm_length = std::strlen(c.name);
	int ho_length = std::strlen(c.hobby);
	strcpy_s(name,nm_length+1 ,c.name);
	hobby = new char[ho_length + 1];
	strcpy_s(hobby, ho_length+1,c.hobby);
	weight = c.weight;
}

Cow::~Cow()
{
	delete[] hobby;
	//delete[] name;
}

void Cow::ShowCow() const
{
	std::cout << "This cow name: " << name << ", hobby: " << hobby << ", weight: " << weight << std::endl;
}

Cow& Cow::operator=(const Cow& c)
{
	if (this == &c) return *this;
	int nm_length = std::strlen(c.name);
	int ho_length = std::strlen(c.hobby);
	strcpy_s(name, nm_length + 1, c.name);
	delete[] hobby;
	hobby = new char[ho_length + 1];
	strcpy_s(hobby, ho_length + 1, c.hobby);
	weight = c.weight;
	return *this;
}
