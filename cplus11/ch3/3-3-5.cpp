#include <iostream>
using namespace std;

struct Copyable {
    Copyable() 
    {
        
    }
    
    Copyable( const Copyable& o) 
    {
        cout << "Copied" << endl;
    }
};

Copyable ReturnRvalue() 
{ 
    return Copyable(); 
}

void AcceptVal(Copyable)
{
    
}

void AcceptVal( const Copyable& )
{
    
}

int main()
{
    cout << "Pass by value: " << endl;
    
    AcceptVal( ReturnRvalue() );
    
    cout << "Pass by reference: " << endl;
    AcceptVal( ReturnRvalue() );
    
    return 0;
}

