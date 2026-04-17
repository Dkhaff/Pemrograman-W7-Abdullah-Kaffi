#include <iostream>

const int ARRAY_LEN = 10;

int main()
{
    int arr[ARRAY_LEN] = {10};

    // Menambahkan tanda bintang pada yPtr agar menjadi pointer
    int *xPtr = arr, *yPtr = arr + ARRAY_LEN - 1;

    std::cout << *xPtr << " " << *yPtr; // Should output 10 0
    return 0;
}