#include <iostream>
#include <cstring>
struct CandyBar{
    char name[50];
    double weight;
    int cals;
};

void SetCandyBar(CandyBar &,const char[] = "Millennium",const double & = 2.85, const int & = 350);
void CoutC(CandyBar &);

int main() {
    using namespace std;
    CandyBar c1;
    cout<<&c1<<endl<<c1.cals<<c1.name<<c1.weight<< endl;
    SetCandyBar(c1,"chan",3.0,100);
    CoutC(c1);

}

void SetCandyBar(CandyBar &c1,const char *name1,const double & weight1, const int & cals1) {
    strcpy(c1.name, name1);
    c1.weight = weight1;
    c1.cals = cals1;
}

void CoutC(CandyBar & c1) {
    std::cout<<c1.name<<c1.weight<<std::endl;

}