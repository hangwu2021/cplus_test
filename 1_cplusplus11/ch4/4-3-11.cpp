#include <type_traits>
#include <iostream>

using namespace std;

int i = 4;
int arr[5] = {0};
int *ptr = arr;
int &&RvalRef();


int main()
{
    cout << is_rvalue_reference<decltype(RvalRef())>::value << endl;
    cout << is_rvalue_reference<decltype(true ? i : i)>::value << endl;
}
