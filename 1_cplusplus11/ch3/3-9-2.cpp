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
        
    };
    
    using namespace Basic;
    using namespace Toolkit;
}

namespace Tim 
{
    template<>
    class SwissArmyKnife<Knife> 
    {
        
    };
}

using namespace Jim;

int main()
{
    SwissArmyKnife<Knife> sknife;
}
