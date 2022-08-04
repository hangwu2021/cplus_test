#include <iostream>

union T
{
    static long Get() 
    {
        return 32;
    }
};

int main()
{
    std::cout << T::Get() << std::endl;
}
