#include <iostream>

// Mengubah parameter fungsi agar menerima argumen
void printNum(int number) { std::cout << number; }

int main()
{
    int number = 35;
    printNum(number);
    return 0;
}