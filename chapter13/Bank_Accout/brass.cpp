#include "brass.h"
#include <iostream>

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
//format setFormat();
using std::endl;
format setFormat()
{
	return std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}

//void restore(format f, precis p);

void restore(format f, precis p)
{
	std::cout.setf(f, std::ios_base::floatfield);
	std::cout.precision(p);
}

Brass::Brass(const std::string& s /*= "Nullbody"*/, long an /*= -1*/, double bal /*= 0.0*/) : fullname(s),acctNum(an),balance(bal)
{

}

void Brass::Deposit(double amt)
{
	if (amt < 0)
	{
		std::cout << "amount can't be negative value.\n";
		return;
	}
	this->balance += amt;
	std::cout << "Deposit: " << amt << " \n";
}

void Brass::Withdraw(double amt)
{
	if (amt < 0 || amt>balance)
	{
		std::cout << "amount can't be negative value or you have low balance.\n";
		return;
	}
	format origin = setFormat();
	precis p1 = std::cout.precision(2);
	this->balance -= amt;
	std::cout << "withdraw: " << amt << " \n Now balance:  "<<balance<<".\n";
	restore(origin, p1);
}

double Brass::Balance() const
{
	return balance;
}

void Brass::ViewAcct() const
{
	format origin = setFormat();
	precis p1 = std::cout.precision(2);
	std::cout << "Account infs:\n" <<
		"          fullname: " << fullname << endl <<
		"    Account number: " << acctNum << endl <<
		"           Balance: " << balance << endl;
	restore(origin, p1);
}
