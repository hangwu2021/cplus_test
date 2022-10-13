#include <string>
#include <cstring>

#include <iostream>


int main()
{
    char text1[] { "abcdef" };
    size_t s1 = sizeof(text1);
    size_t s2 = strlen(text1);
    std::cout << "sl = " << s1 << std::endl;
    std::cout << "s2 = " << s2 << std::endl;
    
    const char* text2 {"abcdef"};
    size_t s3 = sizeof(text2);
    size_t s4 = strlen(text2);
    std::cout << "s3 = " << s3 << std::endl;
    std::cout << "s4 = " << s4 << std::endl;
    
    // 2.1.3
    std::string strHello { "Hello!!" };
    std::string strWorld { "The World..." };
    auto position { strHello.find("!!") };
    if (position != std::string::npos)
    {
        strHello.replace(position, 2, strWorld.substr(3, 6));
    }
    std::cout << strHello << std::endl;
    
    // 2.1.4
    const size_t BufferSize { 50 };
    double value { 0.314 };
    std::string out(BufferSize, ' ');
    std::to_chars();
    
    return 0;
}

