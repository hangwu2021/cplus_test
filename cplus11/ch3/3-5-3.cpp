#include <initializer_list>

void Fun(std::initializer_list<int> iv) {}

int main()
{
    Fun({1, 2});
    Fun({});
    
    return 0;
}
