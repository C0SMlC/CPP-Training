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
    int array[] = {1, 2, 3, 1, 2, 3, 1, 2, 3};
    int size = sizeof(array) / sizeof array[0];
    int target = 2;
    vector<int> indices = allIndices(array, size, target);
    for (int i = 0; i < indices.size(); i++)
    {
        cout << indices[i] << " ";
    }

    return 0;
}
