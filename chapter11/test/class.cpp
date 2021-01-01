#include<iostream>
#include "classA.h"

classA::classA()
{
    intpointer = new int(0);
}

classA::~classA()
{
    delete(intpointer);
}

void classA::change_intpointer()
{
    *intpointer = 2;
}
void classA::change_arr()
{
    for (int i = 0; i < 10; i++)
    {
        this->arr[i] = 3;
    }
    
}
std::ostream & operator<<(std::ostream & os, const classA & a1)
{
    os<<a1.intpointer<<" and "<<a1.arr<<std::endl;
    os<<*(a1.intpointer)<< " and "<< a1.arr[1]<< std::endl;
    return os;

}