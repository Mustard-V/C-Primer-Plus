#include<iostream>
#include "stock00.h"

int main() {
    Stock s1;
    s1.acquire("s1",20,12.50);
    s1.show();
    s1.buy(15,18);
    s1.show();
    s1.sell(400,20.00);
    s1.show();
    s1.buy(400,20.00);
    s1.show();

    return 0;

}