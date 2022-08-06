#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
    std::ofstream out;
    out.open(argv[1]);
    
    std::ifstream in;
    in.open("./data.txt");
    
    std::string line;
    
    while (in >> line)
    {
        out << line;
    }
    
    in.close();
    out.close();
    
    return 0;
}
