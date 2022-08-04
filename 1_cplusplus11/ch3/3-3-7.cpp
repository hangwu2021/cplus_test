#include <iostream>

class HugeMem 
{
public:
    HugeMem(int size) : sz(size > 0 ? size : 1)
    {
        c = new int[sz];
    }
    
    ~HugeMem() 
    {
        delete [] c;
    }
    
    HugeMem(HugeMem &&hm) : c(hm.c), sz(hm.sz)
    {
        hm.c = nullptr;
    }
    
public:
    int *c;
    int sz;
};

class Moveable
{
public:
    Moveable() : i(new int(3)), h(1024) 
    {
        
    }
    
    ~Moveable()
    {
        delete i;
    }
    
    Moveable(Moveable &&m) : i(m.i), h(std::move(m.h))
    {
        m.i = nullptr;
    }
    
public:
    int *i;
    HugeMem h;
};

Moveable GetTemp()
{
    Moveable tmp = Moveable();
    
    std::cout << std::hex << "Huge Mem from " << __func__ << "\t@" << tmp.h.c << std::endl;
    
    return tmp;
}


int main()
{
    Moveable a(GetTemp());
    
    std::cout << std::hex << "Huge Mem from " << __func__ << "\t@" << a.h.c << std::endl;
    
    return 0;
}
