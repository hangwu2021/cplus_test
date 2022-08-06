#include <iostream>
#include <fstream>


int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Paprameters Error!" << std::endl;
        return -1;
    }
    
    std::string filename = argv[1];
    std::ifstream in(filename);
    
    std::string cstr;
    while(in >> cstr)
    {
        std::cout << cstr << "\n";
    }
    std::cout << std::endl;
    
    return 0;
}
