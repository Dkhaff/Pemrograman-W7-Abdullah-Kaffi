#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

double calculatePi(const int n)
{
    srand(time(0));

    int dartsInside = 0;

    for (int i = 0; i < n; ++i)
    {
        // 5.1: Mengonversi nilai acak menjadi double di antara 0 dan 1
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;

        if (sqrt(x * x + y * y) <= 1.0)
        {
            dartsInside++;
        }
    }

    return 4.0 * dartsInside / n;
}

int main()
{
    std::cout << "Nilai estimasi Pi: " << calculatePi(5000000) << std::endl;
    return 0;
}