#include <iostream>
#include <cstdlib>

int difference(const int x, const int y)
{
    // Menambahkan return untuk mengembalikan nilai int
    return abs(x - y);
}

int main()
{
    std::cout << difference(24, 1238);
    return 0;
}