#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *nums, int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
}

int main()
{
    int nums[10] = {55, 105, 150, 120, 5, 30, 35, 40, 45, 50};

    bubbleSort(nums, 10);

    for (int i = 0; i < 10; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}