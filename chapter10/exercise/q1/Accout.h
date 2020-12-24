#ifndef _ACCOUT_
#include <iostream>
#include <string>
class Accout
{
private:
    std::string _name;
    char* _accout;
    double _deposit;
public:
    Accout();
    Accout(std::string, char*, double);
    ~Accout();
    void Making_Deposit(const double &);
    void WithDrawing(const double &);
    void Show() const;
};

#endif