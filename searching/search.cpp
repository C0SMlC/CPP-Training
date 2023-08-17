#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int size, int target)
{
    int left = 0, right = size - 1;

    while (left <= right)
    {

        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        else if (target < arr[mid])
            right = mid - 1;

        else
            left = mid + 1;
    }

    return -1;
}

int main()
{
    int arr[10] = {55, 105, 150, 120, 5, 30, 35, 40, 45, 50};
    cout << search(arr, 10, 35);
    return 0;
}