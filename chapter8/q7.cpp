#include<iostream>
using namespace std;
#include<cstring>

template<class T> 
T Showarray(T arr[],int n);

template<class T>
T Showarray(T *arr[], int n);

struct debts
{
    char name[50];
    double amout;
};

int main() {
    int things[6] = {1,2,3,4,5,6};
    debts db[3] = 
    {
        {"test1",23.00},
        {"test2",24.00},
        {"test3",25.00}
    };
    double *pd[3];

    for(int i = 0; i< 3;i++) {
        pd[i] = &db[i].amout;
    }
    cout<<Showarray(things,6)<<endl;
    cout<<Showarray(pd,3);
}

template<class T> 
T Showarray(T arr[],int n) {
    T sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
    
}

template<class T>
T Showarray(T *arr[], int n) {
    T sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += *arr[i];
    }
    return sum;
    
}