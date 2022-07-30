#include <iostream>

template <typename T>
class Ptr
{
public:
    Ptr(T *p): _p(p) 
    {
        
    }
    
    operator bool() const
    {
        if (_p != 0)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
    
private:
    T *_p;
};


int main()
{
    int a;
    Ptr<int> p(&a);
    
    if (p)
    {
        std::cout << "valid pointer." << std::endl;
    }
    else
    {
        std::cout << "invalid pointer." << std::endl;
    }

    Ptr<double> pd(0);
    std::cout << p + pd << std::endl;
    
    return 0;
}
