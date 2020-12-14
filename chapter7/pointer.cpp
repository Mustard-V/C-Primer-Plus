#include <iostream>

int main() {
    int b = 4;
    int a[5] = {0,1,2,3,4};
    int *pointer = &b;
    std::cout<< "a address is : "<< &b<<std::endl;
    std::cout<<"pointer is : "<< pointer<<std::endl;
    std::cout<<"*pointer is : "<<*pointer<< std::endl;
    std::cout<<"&pointer is : "<<&pointer << std::endl;
    std::cout <<"for a[5]: "<< a<< std::endl;
    std::cout << "&a = "<< &a<< std::endl;
    std::cout << "*a = " <<*a<< std::endl;
    return 0;
}