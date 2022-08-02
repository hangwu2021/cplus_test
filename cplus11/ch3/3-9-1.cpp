#include <iostream>

using namespace std;

namespace Jim 
{
    namespace Basic
    {
        struct Knife 
        {
            Knife()
            {
                cout << "Knife in Basic." << endl;
            }
        };
        
        class CorkScrew 
        {
            
        };
    }
    
    namespace Toolkit 
    {
        template<typename T> 
        class SwissArmyKnife 
        {
            
        };
    }
    
    namespace Other
    {
        //Knife b;
        struct Knife 
        {
            Knife()
            {
                cout << "Knife in Other" << endl;
            }
        };
        
        Knife c;
        Basic::Knife k;
    }
}

using namespace Jim;

int main()
{
    Toolkit::SwissArmyKnife<Basic::Knife> sknife;
}
