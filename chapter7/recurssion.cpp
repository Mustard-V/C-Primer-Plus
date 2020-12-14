#include <iostream>
const int len = 66;
const int divs = 6;
void subdivide(char arr[], int min,int max,int level);

int main() {
    char ruler[66];
    for(int i = 1;i < len-2; i++){
        ruler[i] = ' ';
    }
    ruler[0] = '|';
    ruler[len-1] = '\0';
    ruler[len-2] = '|';

    std::cout<<ruler<<std::endl;

    for(int i = 1;i <= divs;i++){

        subdivide(ruler,0,len-2,i);
        std::cout<<ruler<<std::endl;
        //need reset  ruler
        for(int i = 1; i < len-2;i++){ruler[i] = ' ';} 

    }
    return 0;
}

void subdivide(char arr[],int min,int max,int level) {
    if(level  == 0 ) return;
    int middle = (min + max)/2;
    arr[middle] = '|';
    subdivide(arr, min,middle,level-1);//for left part
    subdivide(arr,middle,max,level-1);//for right part
}