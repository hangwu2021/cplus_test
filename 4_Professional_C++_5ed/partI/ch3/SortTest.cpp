#include <iostream>
#include <array>

const size_t N = 10;

// Insertion Algorithm 
void sort(std::array<int, N>& data, size_t size);

int main()
{
    std::array<int, N> data {5, 8, 1, 3, 2, 4, 9, 6, 12, 7};
    std::cout << "original array: \n";
    for (auto& d : data)
    {
        std::cout << d << " ";
    }
    std::cout << std::endl;
    
    sort(data, data.size());
    
    for (auto& d : data)
    {
        std::cout << d << " ";
    }
    std::cout << std::endl;
    
    return 0;
}

void sort(std::array<int, N>& data, size_t size)
{
    for (size_t i { 1 }; i < size; ++i)
    {
        int element { data[i] };
        size_t j { i };
        while (j > 0 && data[j-1] > element)
        {
            data[j] = data[j-1];
            j--;
        }
        data[j] = element;
    }
}


