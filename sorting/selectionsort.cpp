#include <bits/stdc++.h>
using namespace std;

void selectionSort(int *nums, int size)
{
    for (int i = 0; i < size; i++)
    {
        int minElement = i;
        for (int k = i + 1; k < size; k++)
        {
            if (nums[minElement] > nums[k])
            {
                minElement = k;
            }
        }
        swap(nums[i], nums[minElement]);
    }
}

int main()
{
    int nums[] = {10, 3, 9, 8, 4, 2, 1};
    int size = sizeof(nums) / sizeof nums[0];
    selectionSort(nums, size);
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}