void printArray(const int arr[], const int length)
{
    for (int i = 0; i < length; ++i)
    {
        std::cout << arr[i];
        if (i < length - 1)
        {
            std::cout << ", ";
        }
    }
}