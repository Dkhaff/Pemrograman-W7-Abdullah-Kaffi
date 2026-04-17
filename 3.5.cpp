#include <iostream>

// Menambahkan parameter ketiga agar sesuai dengan argumen di fungsi main
int sum(const int x, const int y, const int z)
{
    return x + y + z;
}

int main()
{
    std::cout << sum(1, 2, 3); // Should print 6
    return 0;
}