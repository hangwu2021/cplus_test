#include <iostream>
#include <vector>
#include <memory>

class Example 
{
public:
    Example() : e(1) 
    {
        std::cout << "Example Constructor..." << std::endl;
    }

    ~Example() 
    {
        std::cout << "Example Destructor..." << std::endl;
    }

    int e;
};

int main(int argc, char *argv[])
{
    std::shared_ptr<std::string> pStr = std::make_shared<std::string>(10, 'a');
    std::cout << pStr.unique() << std::endl;

    std::shared_ptr<std::string> pStr2 = pStr;
    std::cout << "pStr2.unique() = " << pStr2.unique() << std::endl;



    return 0;
}