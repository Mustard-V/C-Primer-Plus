#include <iostream>
#include <cstdlib> // for rand(), srand()
#include <ctime>
#include "vector.hpp"
int main() {
    using namespace std;
    using VECTOR::vector;
    srand(time(0));
    double direction;
    vector step;
    vector result;
    unsigned long steps = 0;
    double target;
    double dstep;
    cout<<result<<endl;
    cout<<"Enter target distance (alpha to quit):";
    while(cin>>target)
    {   
        cout<<"Enter distance of each step:";
        if(!(cin>>dstep)) break;

        while(result.magval() < target)
        {
            direction = rand()%360;
            step.reset(dstep, direction,vector::POL);
            result += step;
            steps++;
        }

        cout << "After "<<steps<<" steps, the object has the follow location：";;
        cout << result<<endl;
        result.polar_mode();
        cout<<" or \n"<<result<< endl;
        cout<<"Average distance per step = "<<result.magval()/steps<<endl;

        //reset whole loop
        steps = 0;
        result.reset(0.0, 0.0);
        cout<<"Enter target distance (alpha to quit):";
    }
    cout << "Done\n";
    cin.clear();
    while (cin.get() != '\n')
    {
        continue;
    }
    return 0;
}
