#include<iostream>
#include<cmath>
#include "vector.hpp"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
    const double  Rad_to_deg = 45.0/atan(1.0);

    //private
    void vector::set_x()
    {
        x = mag * cos(ang);
    }

    void vector::set_y()
    {
        y = mag * sin(ang);
    }

    void vector::set_mag()
    {
        mag = sqrt(x*x + y*y);
    }

    void vector::set_ang()
    {
        if(x == 0.0 && y == 0.0) ang = 0.0;
        else ang = atan2(y,x);
    }
    //public functions
    vector::~vector()
    {

    }

    vector::vector()
    {
        x = ang = mag = y = 0.0;
        mode  = RECT;
        set_ang();
        set_mag();
    }

    vector::vector(double n1, double n2, Mode mode)
    {
        if(mode == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if(mode == POL)
        {
            mag = n1;
            ang = n2/Rad_to_deg;
            set_x();
            set_y();

        }
        else
        {
            cout<< "incorrect 3 rd arguement .set to iniital value"<<std::endl;
            vector();
        }
        
    }

    void vector::reset(double n1, double n2, Mode mode)
    {
        if(mode == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if(mode == POL)
        {
            mag = n1;
            ang = n2/Rad_to_deg;
            set_x();
            set_y();

        }
        else
        {
            cout<< "incorrect 3 rd arguement .set to iniital value"<<std::endl;
            vector();
        }
        
    }
    //for +-*/
    vector vector::operator+ (const vector & temp) const
    {
        return vector(x + temp.xval(), y + temp.yval());
    }
    void vector::operator+= (const vector& temp)
    {
        x += temp.x;
        y += temp.y;
        set_mag();
        set_ang();
    }
    vector vector::operator- (const vector &temp) const
    {
        return vector(x - temp.x, y - temp.y);
    }
    vector vector::operator- () const
    {
        return vector(-x,-y);
    }
    vector vector::operator* (const double &d1) const
    {
        return vector(x*d1, y *d1);
    }


    //for friends;
    vector operator*(double n, const vector & v1)
    {
        return v1 * n;
    }

    std::ostream & operator<<(std::ostream& os, const vector & v1) 
    {
        if(v1.mode == vector::RECT) os<<"(x,y) = ("<<v1.x<<", "<<v1.y<<")\n";
        else if(v1.mode == vector::POL) os<<"(m,a) = ("<<v1.mag<<","<<v1.ang<<")\n";
        else os<< "vector invalid doesn't have mode.\n";
        return os;
    }
}
   