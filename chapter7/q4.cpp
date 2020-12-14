//lotto.cpp == probability of winning
#include <iostream>

using namespace std;

long double probability(unsigned numbers,unsigned picks);

int main() {
    using namespace std;
    double total, choices,regin,regin_choice;

    cout<<"Enter the total number of choices on the game card and\n"
          "the number of picks allowed:" 
    return 0;
    
}

long double probability(unsigned numbers, unsigned picks) {
    long double result = 1.0;
    long double n;
    for(n = numbers, p = picks; p > 0;n--,p--)
        result = result *n/p;
    return result;
    
}