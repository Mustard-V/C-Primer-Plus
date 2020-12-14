// --template override.
// A example to show rule of template function
#include <iostream>

template <typename T>
void ShowArray(T arr[], int n);// template A

template <typename T>
void ShowArray(T * arr[], int n);// template B

struct debts {
    char name[10];
    double amount;
};

int main() {
    using namespace std;
    int things[10] = {1,2,3,4,5,6,7,8,9,10};
    debts mr_e[3] = {
        {"ufo",2400.0},
        {"test2",1200.0},
        {"test3",1300}
    };
    double * pd[3];

    for(int i = 0;i <3;i++)
        pd[i] = &mr_e[i].amount;
    
    ShowArray(things, 6);
    ShowArray(pd,3);
    return 0;

}
template <typename T>
void ShowArray(T arr[], int n){
    using namespace std;
    cout << "Template A"<< endl;
    for(int i = 0;i < n;i++) 
        cout << arr[i]<< ' ';
    cout<<"done\n";
}
template <typename T>
void ShowArray(T* arr[], int n){
    using namespace std;
    cout << "Template B"<< endl;
    for(int i = 0;i < n;i++) 
        cout << *arr[i]<< ' ';
    cout<<"done\n";
}