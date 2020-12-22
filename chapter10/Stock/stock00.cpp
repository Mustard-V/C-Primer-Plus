#include<iostream>
#include "stock00.h"

void Stock::acquire(const std::string & co,long n, double pr){
    company = co;
    if(n < 0) 
    {
        std::cout << "Number of shares can't be negative;"
                  << company << "Now set to 0\n";
        shares = 0;
    }
    else 
        shares = n;
    share_val = pr;
    set_tot();

}

void Stock::buy(long num,double price) {
    if(num < 0) 
    {
        std::cout<<"number of shares can't be negative!!\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
    
}

void Stock::sell(long num,double price){
    if(num < 0) 
        std::cout<<"Number can't be zero\n";
    else if (num > shares)
    {
        std::cout<<"Enter number can't large than share number.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    } 
}

void Stock::update(double price) {
    if (price < 0)
    {
        std::cout<<"price can't be negative value\n";
        throw("Error");
    }
    else
    {
        share_val = price;
        set_tot();
    }
    
}

void Stock::show() {
    using std::cout;
    using std::ios_base;
    //set foarmat to #.###
    ios_base::fmtflags orig = 
        cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);
    cout<< "Company: "<<company
        << "Shares: " <<shares<<std::endl;
    cout<< "Price: $"<<share_val<<std::endl;
    //set format to #.##
    cout.precision(2);
    cout<< "Total value is: $"<<total_val<<std::endl;
    cout.setf(orig,ios_base::floatfield);
    cout.precision(prec);
}