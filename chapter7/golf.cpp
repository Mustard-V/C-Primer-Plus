#include <iostream>
using namespace std;

int inputs(double arr[]);
void outputs(double arr[],int);
void average(double arr[], int);

int main() {
    double golf[10] = {};
    int i = inputs(golf);
    outputs(golf, i);
    average(golf,i);
    return 0; 
}

int inputs(double arr[]){
    cout<< "You will enter several number(<10)..."<<endl;
    for(int i = 0; i < 10;i ++) {
        cout<< "enter your number(alpha to quit): ";
        cin >> arr[i];
        if(! cin) {
            return i;
        }
    }
    return 10;
}

void outputs(double arr[], int n) {
    cout << "Your enter is : ";
    for(int i = 0;i < n ; i++){
        cout << double(arr[i])<< " ";
    }
    cout << endl;
}

void average(double arr[],int n ) {
    double avg = 0.0;
    for(int i = 0;i < n;i++) {
        avg += arr[i];
    }
    cout << "final average is :" << avg/double(n) << endl;
}