#include <boost/thread/thread.hpp>
#include <iostream>

///http://www.cppblog.com/janvy/archive/2010/03/25/110498.aspx

void hello()
{
    std::cout << "Hello, world" << std::endl;
}

int main()
{
    boost::thread thrd(&hello);
    
    thrd.join();

    return 0;
}
