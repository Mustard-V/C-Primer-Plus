#include<iostream>
#include"Accout.h"

using namespace std;

int main() {
    Accout a1 = Accout();
    char arr[10] = {'0','1'};
    Accout a2 = Accout("zishuo",arr,200);
    a1.Show();
    a2.Show();
    a1.Making_Deposit(1000);
    cout<<"break\n";
    a1.WithDrawing(1200);
    cout<<"final\n";
    a1.WithDrawing(900);
    a2.Show();
    a2.Making_Deposit(-2);
    a2.WithDrawing(300);
    a2.WithDrawing(100);
    a2.Show();
    return 0;
}