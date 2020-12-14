#include <iostream>
using namespace std;
double average();
int main() {
    
    cout << "Hello World!"<< endl;
    //for question 1
    while (true) {
        double j = average();
        if (j == -1.1) break;
        else cout << "result == "<< j<< endl;

    }
    return 0;
}

double average() {
    double i,j = 0.0;
    
    cout << "this is question 1:  pleae enter two number: ";
    cin >> i>> j;
    if(i == 0 || j == 0) return -1.1;
    double result = 2.0*i*j/(i+j); 
    return result;
    
}