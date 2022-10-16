#ifndef SIMPLE_H_
#define SIMPLE_H_

#include <iostream>
#include <memory>

class Simple
{
private:
    /* data */
public:
    Simple(/* args */);
    ~Simple();
};

Simple::Simple(/* args */)
{
    std::cout << "Simple::Simple()" << std::endl;
}

Simple::~Simple()
{
    std::cout << "Simple::~Simple()" << std::endl;
}

#endif // SIMPLE_H_