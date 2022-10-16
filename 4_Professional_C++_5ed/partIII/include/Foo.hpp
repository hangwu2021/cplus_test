#ifndef FOO_H_
#define FOO_H_

#include <iostream>
#include <memory>

class Foo : public std::enable_shared_from_this<Foo>
{
public:
    // Foo(std::unique_ptr<int> data)
    // : m_data (std::move(data))
    // {
    //     std::cout << "Foo::Foo()" << std::endl;
    // }

    std::shared_ptr<Foo> getPointer() {
        return shared_from_this();
    }

private:
    std::unique_ptr<int> m_data;
};

#endif // FOO_H_
