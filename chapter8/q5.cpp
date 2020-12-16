#include <iostream>
#include<cmath>
template<typename T>  T max5(const T a[5]);

using namespace std;

int main() {
    int a[5] = {0,1,2,3,4};
    double b[5] = {0.0, 1.0,2.0,3.0,4.0};
    cout << max5(a)<<endl<<max5(b)<<endl;
    return 0;

};


template<typename T>  
T max5(const T a[5]) {
    T temp = a[0];
    for(int i = 0;i < 5;i++) {
        if(a[i] > temp) temp = a[i];
    }
    return temp;
}