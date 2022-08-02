#include <iostream>

typedef unsigned char uint8;

struct RGBA
{
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;
    
    RGBA(uint8_t R, uint8_t G, uint8_t B, uint8_t A=0) :
        r(R), g(G), b(B), a(A)
    {
        
    }
    
    friend std::ostream & operator << (std::ostream &out, RGBA &col);
};

void blend(RGBA &col1, RGBA &col2)
    {
        std::cout << "blend \n" << col1 << col2 << std::endl;
    }

std::ostream & operator << (std::ostream &out, RGBA &col)
{
    return out  << "r: " << (int)col.r
                << " g: " << (int)col.g
                << " b: " << (int)col.b
                << ", a: " << (int)col.a << std::endl;
}

int main()
{
    RGBA col1(255, 240, 155);
    RGBA col2({15, 255, 10, 7});
    
    blend(col1, col2);
}
