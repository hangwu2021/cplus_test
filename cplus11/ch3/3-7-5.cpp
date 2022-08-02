#include <string>
using namespace std;

union T 
{
    std::string s;
    int n;
public:
    T() { new (&s) string; }
    ~T() { s.~string(); }
};


int main()
{
    T t;
}
