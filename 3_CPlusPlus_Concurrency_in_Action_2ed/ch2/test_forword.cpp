#include <iostream>
#include <string>

class CData
{
public:
    CData() = delete;

    CData(const char* ch) : data(ch)
    {
        std::cout << "CData(const char* ch)" << std::endl;
    }

    CData(const std::string &str) : data(str)
    {
        std::cout << "CData(const std::string &str)" << std::endl;
    }

    CData(std::string&& str) : data(str)
    {
        std::cout << "CData(std::string&& str)" << std::endl;
    }

    ~CData()
    {
        std::cout << "~CData()" << std::endl;
    }

private:
    std::string data;
};

// 1、普通模板定义
template<typename T>
CData* Creator(T t)
{
    return new CData(t);
}

void Forward()
{
    const char *value = "hello";
    std::string str1 = "hello";
    std::string str2 = " world";

    CData *p = Creator(str1);
    
    delete p;
}

// 2、引用模板定义
template<typename T>
CData* Creator2(T& t)
{
    return new CData(t);
}

void Forward2()
{
    const char* value = "hello";
    std::string str1 = "hello";
    std::string str2 = " world";
    CData *p = Creator2(value);
}

// 3、右值引用模板
template<typename T>
CData *Creator3(T** t)
{
    return new CData(t);
}

void Forward3()
{
    const char* value = "hello";
    std::string str1 = "hello";
    std::string str2 = " world";
  //  CData* p = Creator3(str1 + str2);
}

// 4、完美转发
template<typename T>
CData* Creator4(T&& t)
{
    return new CData(std::forward<T>(t));
}

void Forward4()
{
    const char* value = "hello";
    std::string str1 = "hello";
    std::string str2 = " world";
    CData* p = Creator4(str1+str2);

    delete p;
}


int main(int argc, char *argv[])
{
    Forward4();

    return 0;
}