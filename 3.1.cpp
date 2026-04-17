#include <iostream>

// Menambahkan prototipe fungsi sebelum dipanggil di main
void printNum(int number); 

int main() {
    printNum(35);
    return 0;
}

void printNum(int number) { std::cout << number; }