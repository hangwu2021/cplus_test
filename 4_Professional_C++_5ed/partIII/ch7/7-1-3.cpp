#include <iostream>

class  Simple
{
private:
    /* data */

public:
    Simple();
    ~Simple();
};

Simple::Simple()
{
    std::cout << "Simple constructor called!" << std::endl;
}

Simple::~ Simple()
{
    std::cout << "Simple destructor called!" << std::endl;
}

int main()
{
    Simple* mySimpleArray {new Simple[4]};

    delete [] mySimpleArray;
    mySimpleArray = nullptr;

    return 0;
}
