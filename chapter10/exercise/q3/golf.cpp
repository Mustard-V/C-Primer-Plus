#include<iostream>
#include "golf.hpp"
//#include <string>
golf::golf(const char* k, int i)
{   
    strcpy(this->fullname,k);
    this->handicaps = i;
}

void golf::setgolf(const golf& temp){
    this->handicaps = temp.handicaps;
    
}
        void handicap(const golf & g, const int&);
        void showgolf() const;
};