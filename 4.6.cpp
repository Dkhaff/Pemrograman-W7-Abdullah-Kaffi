int sum(const int nums[], const int length)
{

    if (length == 0)
    {
        return 0;
    }

    return nums[0] + sum(nums + 1, length - 1);
}