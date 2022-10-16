#include <iostream>

class Foo 
{
public:
    Foo(double value);

private:
    double m_value {0.0};
};

Foo::Foo(double value) : m_value(value)
{
    std::cout << "Foo::m_value = " << m_value << std::endl;
}

class MyClass 
{
public:
    MyClass(char c);
    MyClass(double value);

private:
    double m_value {0.0};
    Foo m_foo;
};

MyClass::MyClass(double value) : m_value{value}, m_foo{m_value}
{
    std::cout << "MyClass::m_value = " << m_value << std::endl;
}

int main()
{
    MyClass instance {1.2};

    return 0;
}
