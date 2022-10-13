#include <iostream>

class Card 
{
public:
    enum class Number { Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King };
    enum class Figure { Diamond, Heart, Spade, Club };

    Card() {}
    Card() 
    {}

private:
    Number m_number { Number::Ace };
    Figure m_figure { Figure::Diamond };
};


int main()
{
    int a {10};

    float b {20.0};
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << a << std::endl;
    }

    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}