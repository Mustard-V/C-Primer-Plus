#include <iostream>
#include <cctype>
using namespace std;
int Fill_array(double arr[], int n);
void Show_array(double arr[], int n);
void Reverse_array(double arr[],int n);

int main() {
    double *arr;
    int n = 0;
    cout <<"Please enter n numbers: ";
    cin >> n;
    arr = new double[n];
    int true_number = Fill_array(arr,n);
    //cout<<"what i true number ?" << true_number<< endl;
    Show_array(arr,true_number);
    Reverse_array(arr,true_number);
    Show_array(arr,true_number);

    return 0;
}

int Fill_array(double arr[], int n) {
    //cout<<"what is n in fill>"<< n << endl;

    int i;
    for(i = 0;i < n;i++){//干我突然忘记了i会先++所以最后的返回值是比循环中的i大一，而不是原本的i,记住这个点
        cout << "Please enter numbers :";
        cin >> arr[i];
        //cout<<"what is i:" << i<< endl;
        if(! cin) break;

    }

    //cout << "waht is return value?"<< i<< endl;
    return i;
}

void Show_array(double arr[], int n){
    //cout <<"what is n:"<<n<<endl;
    for(int i = 0;i < n;i++) {
        cout << arr[i]<< endl;
    }
    cout <<"Done __________________________"<< endl;
}

void Reverse_array(double arr[], int n) {
    for(int i = 1; i < n/2;i++) {
        double temp;
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}