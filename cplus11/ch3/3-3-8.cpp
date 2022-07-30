#include <iostream>
#include <utility>

struct Maythrow
{
    Maythrow()
    {
        
    }
    
    Maythrow(const Maythrow &)
    {
        std::cout << "Maythrow copy constructor." << std::endl;
    }
    
    Maythrow(Maythrow &&)
    {
        std::cout << "Maythrow move constructor." << std::endl;
    }
};

struct Nothrow
{
    Nothrow()
    {
        
    }
    
    Nothrow(Nothrow &&) noexcept 
    {
        std::cout << "Nothrow move constructor." << std::endl;
    }
    
    Nothrow(const Nothrow &)
    {
        std::cout << "Nothrow copy constructor." << std::endl;
    }
};


int main()
{
    Maythrow m;
    Nothrow n;
    
    Maythrow mt = std::move_if_noexcept(m);
    Nothrow nt = std::move_if_noexcept(n);
    
    return 0;
}
