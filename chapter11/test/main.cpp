#include "classA.h"
#include <iostream>

int main () {
    using namespace std;
    classA a1;
    classA a2;
    std::cout<<a1;
    std::cout<<a2;
    a2.change_arr();
    a2.change_arr();
    std::cout<<a2;
    a1 = a2;
    std::cout<<a1;
    std::cout<<a2;
    std::cout<<"first line in new machine by zishuo using vim.\n";
    return 0;
}
