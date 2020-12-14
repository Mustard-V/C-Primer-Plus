//this is question 1 for print string 
//but we need cunsider parameters in this funciton

#include <iostream>

void func(const char*, const int n = 0);

int main ()
{
    
    using namespace std;
    char name[10] = "zishuo li";
    func(name);
    func(name,2);
    func(name,23);
    return 0;
    
    
}

void func(const char* name, const int n) {
    static int conter = 1;
    if(!n)       
        std::cout<<name<<std::endl; 

    else
        for(int i=0;i < conter;i++) std::cout<<name<<std::endl;

    std::cout<<"done_______"<<std::endl;
    conter ++;



}