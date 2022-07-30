#include <iostream>

template <typename T, typename U>
void PerfectForward(T &&t, U &Func)
{
    std::cout << t << "\tforwarding..." << std::endl;
    Func(std::forward<T>(t));
}

void RunCode(double &&m)
{
    
}

void RunHome(double &&h)
{
    
}

void RunComp(double &&c)
{
    
}


int main()
{
    PerfectForward(1.5, RunComp);
    PerfectForward(8, RunCode);
    PerfectForward(1.5, RunComp);
}
