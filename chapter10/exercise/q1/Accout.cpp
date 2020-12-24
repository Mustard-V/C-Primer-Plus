#include<iostream>
#include "Accout.h"

Accout::Accout()
{
    this->_deposit = 0;
    this->_name = "Cilent_Initial_name";
    this->_accout = "000000";
}

Accout::Accout(std::string s1, char* accout, double deposit)
{   

    _name = s1;
    _accout = accout;
    _deposit = deposit;

}
