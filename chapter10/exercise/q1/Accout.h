#ifndef _ACCOUT_
#include <iostream>
#include <string>
class Accout
{
private:
    std::string _name;
    char  _accout[10];
    double _deposit;
public:
    Accout();
    Accout(std::string, char*, double);
    void Making_Deposit(const double &);
    void WithDrawing(const double &);
    void Show() const;  
};

#endif