#include <iostream>
#include <memory>
#include <vector>

std::unique_ptr<int> clone(int p)
{
    std::unique_ptr<int> pInt(new int(5));

    return pInt;
}

int main()
{
    std::unique_ptr<int> pInt(new int(5));

    std::cout << "*pInt = " << *pInt << std::endl;
/*
    std::unique_ptr<int> pInt2(pInt);
    std::unique_ptr<int> pInt3 = pInt;
*/

    std::unique_ptr<int> pInt2 = std::move(pInt);
    std::cout << "*pInt2 = " << *pInt2 << std::endl;

    std::unique_ptr<int> pInt3(std::move(pInt2));

    std::unique_ptr<int> pInt4 = clone(5);
    std::cout << "*pInt4 = " << *pInt4 << std::endl;

    std::vector<std::unique_ptr<int>> vec;
    std::unique_ptr<int> p(new int(5));
    vec.push_back(std::move(p));

    std::unique_ptr<int[]> p(new int[5] {1, 2, 3, 4, 5});
  //  p[0] = 0;

    return 0;
}