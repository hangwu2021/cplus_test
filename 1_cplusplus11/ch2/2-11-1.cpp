#include <iostream>
using namespace std;

template <typename T> 
void TempFun(T a)
{
    cout << a << endl;
}



void DefPam(int m = 3) {}

template <typename T = int>
class DefCls {};

template <typename T = int>
void DefTempParam() {}



int main()
{
    TempFun(1);
    
    TempFun("1");
    
    return 0;
}
