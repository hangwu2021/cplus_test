// helloworld.cpp

#include <iostream>
#include <fmt/format.h>

#include <array>
#include <vector>
#include <exception>
#include <algorithm>

// 1.1.28
class Rect {
public:
    constexpr Rect(size_t width, size_t height)
    : m_width {width}, m_height {height} 
    {
        
    }
    
    constexpr size_t getArea() const 
    {
        return m_width * m_height;
    }
    
private:
    size_t m_width {0}, m_height {0};
};

class myClass
{
public:
    myClass(int& ref)
    : m_ref { ref }
    {
        
    }
    
private:
    int& m_ref;
};

void addOne(int i)
{
    i++;
}

void addOne(int& i)
{
    i++;
}

int myInt {7};
// addOne(myInt);

int x {5}, y{6};
int *xp { &x }, *yp {&y};

void printString(const std::string& myString)
{
    std::cout << myString << std::endl;
}

struct OddsAndEvens
{
    std::vector<int> odds, evens;
};

OddsAndEvens separateOddsAndEvens(const std::vector<int>& arr)
{
    std::vector<int> odds, evens;
    for (int i : arr)
    {
        if (i % 2 == 1)
        {
            odds.push_back(i);
        }
        
        if (i % 2 == 0)
        {
            evens.push_back(i);
        }
    }
    
    return OddsAndEvens { .odds = odds, .evens = evens };
}

// 1.1.32
double divideNumbers(double numerator, double denominator)
{
    if (denominator == 0)
    {
        throw std::invalid_argument { "Denominator cannot be 0." };
    }
    
    return numerator / denominator;
}

int main()
{
    std::cout << "Hello, World!" << std::endl;
    
    std::cout << fmt::v8::format("There are {} ways I love you.", 209) << std::endl;
    
    std::array<int, 3> arr {9, 8, 7};
    std::cout << fmt::v8::format("Array size = {}", arr.size()) << std::endl;
    std::cout << fmt::v8::format("2nd element = {}", arr[1]) << std::endl;
    
    constexpr Rect r {8, 2};
    int myArray[r.getArea()];
    
    // 1.1.29
    int x {3}, z {5};
    int& xRef {x};
    int& zRef {z};
    
    zRef = xRef;
    
    int* xPtr {&xRef};
    *xPtr = 100;
    
    std::cout << "x = " << x << std::endl;
    
    myClass m(x);
    
    std::string someString {"Hello string"};
    printString(someString);
    printString("Hello string");
    
    std::vector<int> vecUnSplit {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto oddsAndEvens { separateOddsAndEvens(vecUnSplit) };
    for (auto& i : oddsAndEvens.evens)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    std::string str { "C++" };
    //const std::string& constStr {as_const};
    
    std::vector<int> a {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> b;
    b.resize(20);
    
    std::reverse(a.begin(), a.end());
    std::reverse(a.begin(), a.begin() + 4);
    std::reverse(a.begin() + 4, a.end());
    
    std::cout << "a = ";
    for (auto& i : a)
    {
        std::cout << i << " "; 
    }
    std::cout << std::endl;
    
    b = a;
    b.insert(b.end(), vecUnSplit.begin(), vecUnSplit.end());
    std::cout << "b = ";
    for (auto& i : b)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    std::cout << "b.size() = " << b.size() << std::endl;
    
    // 1.1.32
    try 
    {
        std::cout << divideNumbers(2.5, 0.5) << std::endl;
        std::cout << divideNumbers(2.3, 0) << std::endl;
        std::cout << divideNumbers(4.5, 2.5) << std::endl;
    }
    catch(const std::invalid_argument& exception)
    {
        std::cout << exception.what() << std::endl;
    }
    
     
    return 0;
}
