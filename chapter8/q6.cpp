#include<iostream>
using namespace std;
#include<cstring>

template<class T> 
T maxn(T [],int );

template<> char* maxn <char*>(char* [],int);

int main() {
    int a[5] = {0,1,2,3,4};
    double b[5] = {0.0, 1.0,2.0,3.0,4.0};
    char temp1[] = "fuck,t";
    char temp2[] = "check it";
    char temp3[] = "hello";
    char* c[3] = {temp1,temp2,temp3};
    
    cout<<"For int:"<<maxn(a,5)<<endl;
    cout<<"For double:"<<maxn(b,5)<<endl;
    cout<<"For char:"<<maxn(c,3)<<endl;
    return 0;

}

template<class T> 
T maxn(T a[],int size) {
    T temp = a[0];
    
    for(int i = 0; i< size;i++) 
    {
        if (a[i] > temp)
        {
            temp = a[i];
        }
    }
    return temp;
}

template<> char* maxn <char*>(char* a[],int i ) {
    char *temp = a[0];

    for (int k = 0; k < i; k++)
    {
        if(strlen(a[k]) > strlen(temp)) temp = a[k];
    }
    return temp;
}