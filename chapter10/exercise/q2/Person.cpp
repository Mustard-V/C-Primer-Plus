#include<iostream>
#include "Person.hpp"

        Person::Person(){
            lname = "";
            fname[0] = '\0';
        }

        Person::Person(const std::string &ln, const char * fn ){
            lname = ln;
            for (int i = 0; i < 25; i++)
            {   if(fn[i] == '\0') 
                {
                     fname[i] = fn[i];
                     break;       
                }
                std::cout<<i;
                fname[i] = fn[i];
            }

            
        }
        Person::~Person(){

        }
        void Person::Show() const{
            using namespace std;
            ios_base::fmtflags orig = cout.setf(ios_base::fixed,ios_base::floatfield);
            streamsize origs = cout.precision(3);
            cout<<"Person Show: "<<fname<<", "<<lname;
            cout.setf(orig);
            cout.precision(origs);
        }
        void Person::FormalShow() const{
            using namespace std;
            ios_base::fmtflags orig = cout.setf(ios_base::fixed,ios_base::floatfield);
            streamsize origs = cout.precision(3);
            cout<<"Person FormalShow: "<<lname<<", "<<fname;
            cout.setf(orig);
            cout.precision(origs);
        }
