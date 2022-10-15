#include "Simple.hpp"
#include "Foo.hpp"


void leaky()
{
    // Simple* mySimplePtr {new Simple{} };
    std::unique_ptr<Simple> mySimple { std::make_unique<Simple>() };
    std::unique_ptr<Simple> mySimplePtr2 {new Simple {}};

    auto myIntSmartPtr {std::make_unique<int>(42)};
    //Foo f {std::move(myIntSmartPtr)};
}

// std::shared_ptr 
void Close(FILE* filePtr)
{
    if (filePtr == nullptr) {
        return ;
    }

    fclose(filePtr);
    std::cout << "File closed." << std::endl;
}

// std::weak_ptr 
void useResource(std::weak_ptr<Simple>& weakSimple)
{
    auto resource { weakSimple.lock() };
    if (resource) {
        std::cout << "Resource stiall alive!" << std::endl;
    }
    else {
        std::cerr << "Resource has been freed!" << std::endl;
    }
}

std::unique_ptr<Simple> create()
{
    auto ptr { std::make_unique<Simple>() };
    return ptr;
}

int main()
{
    // leaky();
    // FILE* f {fopen("data.txt", "w")};
    // std::shared_ptr<FILE> filePtr {f, Close};

    // if (filePtr == nullptr) {
    //     std::cerr << "Error opening file." << std::endl;
    // }
    // else {
    //     std::cout << "File opened." << std::endl;
    // }

    // // std::weak_ptr 
    // auto shareSimple { std::make_shared<Simple>() };
    // std::weak_ptr<Simple> weakSimple { shareSimple };

    // useResource(weakSimple);

    // shareSimple.reset();
    // useResource(weakSimple);

    // std::unique_ptr<Simple> mySmartPtr1 { create() };
    // auto mySmartPtr2 { create() };

    auto ptr1 {std::make_shared<Foo>()};
    auto ptr2 {ptr1->getPointer()};

    return 0;
}
