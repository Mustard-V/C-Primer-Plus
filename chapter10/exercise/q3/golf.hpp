//golf.h-- for pe9-1.cpp

const int Len = 40;
class golf {
    private:
        //const int Len = 40;
        char fullname[Len];
        int handicaps;
    public:
        golf(const char*, int );
        void setgolf(const golf&); 
        void handicap(const golf & g, const int&);
        void showgolf() const;
};