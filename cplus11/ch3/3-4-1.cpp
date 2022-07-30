#include <iostream>

struct Rational1
{
    Rational1(int n = 0, int d = 1) : num(n), den(d)
    {
        std::cout << __func__ << "(" << num << "/" << den << ")" << std::endl;
    }
    
    int num;
    int den;
};

struct Rational2
{
    explicit Rational2(int n = 0, int d = 1) : num(n), den(d)
    {
        std::cout << __func__ << "(" << num << "/" << den << ")" << std::endl;
    }
    
    int num;
    int den;
};

void Display1(Rational1 ra)
{
    std::cout << "Numerator: " << ra.num << " Denominator: " << ra.den << std::endl;
}

void Display2(Rational2 ra)
{
    std::cout << "Numerator: " << ra.num << " Denominator: " << ra.den << std::endl;
}


int main()
{
    Rational1 r1_1 = 11;
    Rational1 r1_2(12);
    Display1(1);
    
    //Rational2 r2_1 = 21;
    Rational2 r2_2(22);
    //Display2(2);
    Display2(Rational2(2));
    
    return 0;
}
