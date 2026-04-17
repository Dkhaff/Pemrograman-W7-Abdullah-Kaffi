int sum(const int nums[], const int length)
{
    int total = 0;
    for (int i = 0; i < length; ++i)
    {
        total += nums[i];
    }
    return total;
}