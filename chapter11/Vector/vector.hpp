//header for vctor------for chapter11 
#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR
{
    class vector
    {
    public:
        enum Mode{RECT, POL};
    private:
        double x;
        double y;
        double mag;
        double ang;
        Mode mode;
        void set_x();    
        void set_y();
        void set_mag();
        void set_ang();

    public:
        //constractor && distractor
        ~vector();
        vector();
        vector(double, double, Mode m1 = RECT);
        //reset vector and get value
        void reset(double, double, Mode m1 = RECT);
        double xval() const {return this->x;};
        double yval() const {return this->y;};
        double magval() const {return this->mag;};
        double angval() const {return this->ang;};
        void polar_mode() {mode = POL;};
        void rect_mode() {mode = RECT;};
        //operator override for this class
        vector operator+ (const vector &) const;
        vector operator- (const vector &) const;
        vector operator* (const double &) const;
        void operator+= (const vector &);
        vector operator- () const;
        //friends
        friend vector operator*(double, const vector & );
        friend std::ostream & operator<<(std::ostream &, const vector &);
    };
    
}

#endif