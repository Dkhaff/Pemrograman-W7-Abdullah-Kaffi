void reverse(int arr[], const int length)
{
    for (int i = 0; i < length / 2; ++i)
    {
        int temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
}