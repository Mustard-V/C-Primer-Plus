//head for stock
#ifndef _STOCK_
#define _STOCK_

#include <string>
class Stock
{
private:
    /* data */
    std::string company;
    long shares;
    double share_val;
    double total_val;
    inline void set_tot() {total_val = share_val*shares;};
public:
    void acquire(const std::string & co,long n, double pr);
    void buy(long num,double price);
    void sell(long num,double price);
    void update(double price);
    void show();
};

#endif