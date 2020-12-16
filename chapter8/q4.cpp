#include <iostream>
using namespace std;
#include <cstring>      //for strlen(),strcpy();

template<typename T> 
void show(T & a,int = 1);

struct stringgy {
    char *str;          //pointer to a string
    int ct;             
    };

template<> void show<stringgy> (stringgy &,int);
bool set(stringgy &, char *);

int main() {
    stringgy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);

    show(beany);
    show(beany,2);
    testing[0] = 'D';
    show(testing);
    show(testing,3);
    show("Done");

    return 0;
};

template<typename T>  void show(T & a,int i ) {
    for (int k = 0; k < i; k++)
    {
         cout<<a<<endl;
    }

};

template<> void show<stringgy> (stringgy &s1, int i) {
    for(int k = 0;k < i;k++)
        cout<<s1.str<<endl;
};

bool set(stringgy &s1, char * c1) {
    s1.str = c1;
    return true;
};