#include <vector>
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Parameters Error!" << std::endl;
        return -1;
    }
    
    std::string filename = argv[1];
    std::ifstream line(filename);
    
    std::string vec;
    std::vector<std::string> lines;
    
    while (line >> vec)
    {
        lines.push_back(vec);
    }
    
    line.close();
    
    std::cout << lines.size() << std::endl;
    
    return 0;
}

