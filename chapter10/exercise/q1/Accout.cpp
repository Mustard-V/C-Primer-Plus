#include<iostream>
#include "Accout.h"

Accout::Accout()
{
    this->_deposit = 0;
    this->_name = "Cilent_Initial_name";
    
    for(int i = 0;i<10;i++)  this->_accout[i] = '0';
}

Accout::Accout(std::string s1, char* accout, double deposit)
{   

    _name = s1;
    for(int i = 0;i < 10;i++) _accout[i] = accout[i];
    _deposit = deposit;

}
void Accout::Making_Deposit(const double &d1) {
    if(d1 < 0) std::cout<<"deposit can't be negative\n";
    else
    {
        this->_deposit += d1;
        std::cout<<"Success! "<<this->_deposit<<std::endl;
    }
    
}
void Accout::WithDrawing(const double &d1){
    using std::cout;

    if(d1 < 0 ) {cout<<"2\n";cout<< "withdraw can't be negative\n";}
    else if(d1 > this->_deposit) {cout<<"3\n";cout<< "accout don't have enought withdraw.\n";}
    else {cout<<"Success wd\n";this->_deposit -= d1;cout<<this->_deposit<<std::endl;}

    return;
}
void Accout::Show() const{
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize pres= cout.precision(3);
    cout<<"Accout name: "<<this->_name<< ". Accout number: "<<this->_accout
        <<"Accout cash: "<< this->_deposit<<std::endl;
    cout.setf(orig);
    cout.precision(pres);
    

}