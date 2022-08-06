#include <iostream>

std::istream &print(std::istream &in);


int main()
{
    
    
    return 0;
}


std::istream &print(std::istream &in)
{
    std::string line;
    
    auto old_state = in.rdstate();
    
    in.clear();
    
    while(in >> line)
    {
        ;
    }
    
    in.setstate(old_state);
    
    return in;
}
