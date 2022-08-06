#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    std::ifstream in;
    in.open("./data.txt");
    
    std::ofstream out;
    out.open("./data_copy.txt", std::ofstream::app);
    
    std::string line;
    
    while (std::getline(in, line))
    {
        out << line;
    }
    
    in.close();
    out.close();
    
    return 0;
}
