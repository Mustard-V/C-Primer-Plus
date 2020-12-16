#include <iostream>
#include <array>
using namespace std;
const int k = 10;

constexpr int foo(int i)
{
    return i + 5;
}

int main()
{
    int i = 10;
    std::array<int, foo(5)> arr; // OK
    std::cout<<arr[2];
    foo(i); // Call is Ok
    
    // But...
    std::array<int, foo(k)> arr1; // Error
    std::cout<<arr1[1];
}

/*
作者：蓝色
链接：https://www.zhihu.com/question/35614219/answer/63798713
来源：知乎
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/