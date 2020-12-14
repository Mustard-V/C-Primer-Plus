#include <iostream>

using namespace std;

long int recursion(long int);
int main() {
    long int a = 5;
    cout<< recursion(a)<< endl;
    
}

long int recursion (long int k) {
    if (k == 0) return 1;
    return k* recursion(k-1);
}