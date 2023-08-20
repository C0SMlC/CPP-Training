#include <bits/stdc++.h>
using namespace std;

void Merge(int *nums, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    int k = start;
    int temp[end + 1]; // Create a temporary array to store the merged subarray

    while (i <= mid && j <= end)
    {
        if (nums[i] < nums[j])
        {
            temp[k] = nums[i];
            i++;
        }
        else
        {
            temp[k] = nums[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements from the left subarray (if any)
    while (i <= mid)
    {
        temp[k] = nums[i];
        k++;
        i++;
    }

    // Copy the remaining elements from the right subarray (if any)
    while (j <= end)
    {
        temp[k] = nums[j];
        k++;
        j++;
    }

    // Copy the merged subarray from the temporary array back to the original array
    for (int x = start; x <= end; x++)
    {
        nums[x] = temp[x];
    }
}

void MergeSort(int *nums, int start, int end)
{
    if (start < end) // Fix the termination condition
    {
        int mid = (start + end) / 2;

        MergeSort(nums, start, mid);
        MergeSort(nums, mid + 1, end);
        Merge(nums, start, mid, end);
    }
}

int main()
{
    int num = 7; // Change the array size to 7
    int nums[] = {7, 8, 9, 5, 6, 2, 1};
    for (int i = 0; i < num; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    MergeSort(nums, 0, num - 1); // Change the end index to num - 1
    for (int i = 0; i < num; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
