#include <bits/stdc++.h>
using namespace std;

vector<int> allIndices(int *arr, int size, int target, int currentIndex = 0)
{
    vector<int> indices;
    if (currentIndex >= size)
    {
        return indices;
    }

    if (arr[currentIndex] == target)
    {
        indices.push_back(currentIndex);
    }

    vector<int> nextIndices = allIndices(arr, size, target, currentIndex + 1);

    indices.insert(indices.end(), nextIndices.begin(), nextIndices.end());

    return indices;
}

int main()
{
    int array[] = {1, 2, 4, 3, 4, 6, 7, 8, 9, 7};
    int size = sizeof(array) / sizeof array[0];
    int target;
    cin >> target;
    vector<int> indices = allIndices(array, size, target);

    if (indices.empty())
    {
        std::cout << "Target not found in the array." << std::endl;
    }
    else
    {
        std::cout << "Target found at indices: ";
        for (int index : indices)
        {
            std::cout << index << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}