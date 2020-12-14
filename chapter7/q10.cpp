#include <iostream>
using namespace std;

double add1(double, double);
double add2(double,double);
double add3(double,double);
double calculate(double,double,double (*pf) (double, double));
int global = 0;
int function_call(int*);
int main() {
    double (*pf[3]) (double,double) = {add1,add2,add3};
    while(true) {
        double i,j;
        int k = 0;
        cout << "Enter two double number: ";
        cin >> i>>j;
        if(!cin) break;
        k = function_call(&global);
        double result = calculate(i,j,pf[k]);
        cout<<"Call function: "<<k<<" and result is: "<<result<< endl;
    }
    return 0;
}

double calculate(double d1,double d2,double (*pf) (double, double)){
    return pf(d1,d2);
}
double add1(double d1,double d2){
    return d1 + d2;
}
double add2(double d1,double d2){
    return d1 + d2+1;
}
double add3(double d1,double d2){
    return d1 + d2+2;
}
int function_call(int* i) {
    int k = 0;
    if(*i == 3) *i = 0;
    else  k = *i;
    (*i)++;
    return k;
    

}