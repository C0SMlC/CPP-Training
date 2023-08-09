#include <bits/stdc++.h>
using namespace std;

int rainWaterTrapped(vector<int> heights)
{
    int size = heights.size();
    int left[size] = {};
    int right[size] = {};

    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            left[i] = heights[i];
        }
        else
        {
            left[i] = max(left[i - 1], heights[i]);
        }
    }

    for (int i = size - 1; i >= 0; i++)
    {
        if (i == size - 1)
        {
            right[i] = heights[i];
        }
        else
        {
            right[i] = max(right[i + 1], heights[i]);
        }
    }

    cout << "LEFT" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << left[i] << " ";
    }

    cout << "RIGHT" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << right[i] << " ";
    }

    return 0;
}
int main()
{

    vector<int> array = {3, 1, 2, 4, 0, 1, 3, 2};
    rainWaterTrapped(array);
    return 0;
}