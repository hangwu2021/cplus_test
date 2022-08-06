#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

struct PersonInfo
{
    std::string name;
    std::vector<std::string> phones;
};

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "usage: ./ch8 phone.txt" << std::endl;
        return -1;
    }
    
    std::ifstream in(argv[1]);
    std::string line, word;
    std::vector<PersonInfo> people;
    while (std::getline(in, line))
    {
        PersonInfo info;
        std::istringstream record(line);
        
        record >> info.name;
        while (record >> word)
        {
            info.phones.push_back(word);
        }
        
        people.push_back(info);
    }
    
    std::cout << people.size() << std::endl;
    
    // Part of ostringstream
    for (const auto &entry : people)
    {
        std::ostringstream formatted, badNums;
        for (const auto &nums : entry.phones)
        {
            formatted << " " << nums;
        }
    }
    
    
    
    return 0;
}
