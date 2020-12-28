#include<iostream>
#include "Person.hpp"

using namespace std;

int main() {
    Person one;
    Person two("smythecraft");
    Person three("Dimwiddy", "Sam");
    one.Show();
    cout<<endl;
    one.FormalShow();
    cout<<endl;
    two.Show();
    cout<<endl;
    two.FormalShow();
    cout<<endl;
    three.Show();
    cout<<endl;
    three.FormalShow();
    cout<<endl;
    return 0;
}