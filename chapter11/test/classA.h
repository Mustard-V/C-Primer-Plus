#ifndef _CLASSA_
#define _CLASSA_
#include<iostream>
class classA
{
    
private:
    int * intpointer;
    int arr[10] = {0};

public:
    classA();
    ~classA();
    void change_intpointer();
    void change_arr();
    friend std::ostream & operator<<(std::ostream &, const classA &);

};



#endif