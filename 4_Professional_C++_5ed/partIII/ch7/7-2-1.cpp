#include <iostream>
#include <vector>
#include <cmath>
#include <array>

void doubleInts(int theArray[], size_t size);

int main()
{
    size_t arrSize {4};
    int* freeStoreArray {new int[arrSize] {1, 5, 4, 2}};
    doubleInts(freeStoreArray, arrSize);
    delete[] freeStoreArray;
    freeStoreArray = nullptr;

    int stackArray[] {5, 6, 3, 6};
    arrSize = std::size(stackArray);

    return 0;
}

void doubleInts(int theArray[], size_t size)
{
    for (size_t i {0}; i < size; ++i) {
        theArray[i] *= 2;
    }
}
