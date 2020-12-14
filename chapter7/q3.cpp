#include <iostream>


using namespace std;
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volumn;

};
void show_box(box b1);
void set_volumn(box *b1);
int main() {
    box b1 = {"zishuo",1.0,0.8,1.0,-1};
    
    set_volumn(&b1);
    show_box(b1);
    
    return 0;
}

void show_box(box b1) {
    cout<< "show box infs: "<<endl;
    cout << b1.height << ' '<<b1.length<< ' '<< b1.maker<<' '<<b1.volumn << endl;

}

void set_volumn(box *b1) {
    (*b1).volumn = b1->height*b1->length*b1->width;

}