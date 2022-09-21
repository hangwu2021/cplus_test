#include <iostream>
#include <memory>
#include <vector>

class ClassB;

class ClassA
{
public:
    ClassA()
    {
        std::cout << "ClassA Constructor..." << std::endl;
    }

    ~ClassA()
    {
        std::cout << "ClassA Destructor..." << std::endl;
    }

    //std::shared_ptr<ClassB> pb;
    std::weak_ptr<ClassB> pb;
};

class ClassB 
{
public:
    ClassB()
    {
        std::cout << "ClassB Constructor..." << std::endl;
    }

    ~ClassB()
    {
        std::cout << "ClassB Destructor..." << std::endl;
    }

    //std::shared_ptr<ClassA> pa;
    std::weak_ptr<ClassA> pa;
};

class A 
{
public:
    A() : a(3)
    {
        std::cout << "A Constructor..." << std::endl;
    }

    ~A()
    {
        std::cout << "A Destructor..." << std::endl;
    }

    int a;
};

int main()
{
/*
    std::shared_ptr<A> sp(new A());
    std::weak_ptr<A> wp(sp);

    if (std::shared_ptr<A> pa = wp.lock())
    {
        std::cout << pa->a << std::endl;
    }
    else 
    {
        std::cout << "pa == nullptr" << std::endl;
    }

    sp.reset();
    std::cout << wp.expired() << std::endl;
*/

    std::shared_ptr<ClassA> spa = std::make_shared<ClassA>();
    std::shared_ptr<ClassB> spb = std::make_shared<ClassB>();

    spa->pb = spb;
    spb->pa = spa;

    return 0;
}