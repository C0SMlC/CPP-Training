#include <bits/stdc++.h>
using namespace std;

// vector<int> vec = {11, 23, 11, 23, 24, 25, 380, 450, 350, 450, 11};
// 1. remove duplicates
// 2. remove 11

void removeDuplicates(vector<int> &vec)
{
    for (int i = 0; i < vec.size() - 1; i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] == vec[j])
            {
                vec.erase(vec.begin() + j);
            }
        }
    }
}

void removeDuplicateUsingSTL(vector<int> &vec)
{

    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
}

void removeDuplicateOptimal(vector<int> &vec)
{

    int size = vec.size();

    if (size <= 1)
        return;

    sort(vec.begin(), vec.end());

    int j = 1;
    for (int i = 1; i < size; i++)
    {

        if (vec[i] != vec[i - 1])
        {
            vec[j] = vec[i];
            j++;
        }
    }

    vec.erase(vec.begin() + j, vec.end());
}

void print(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

void removeValueUsingSTL(vector<int> &vec, int value)
{
    vec.erase(remove(vec.begin(), vec.end(), value), vec.end());
}

void removeValue(vector<int> &vec, int value)
{

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == value)
        {
            vec.erase(vec.begin() + i);
        }
    }
}

int main()
{
    vector<int> vec1 = {11, 23, 11, 23, 24, 25, 380, 450, 350, 450, 11};
    vector<int> vec2 = {11, 23, 11, 23, 24, 25, 380, 450, 350, 450, 11};
    vector<int> vec3 = {11, 23, 11, 23, 24, 25, 380, 450, 350, 450, 11};

    removeDuplicates(vec1);
    removeDuplicateUsingSTL(vec2);
    removeDuplicateOptimal(vec3);

    // print
    print(vec1);
    print(vec2);
    print(vec3);

    // remove
    removeValue(vec1, 350);
    removeValueUsingSTL(vec2, 380);

    // print
    print(vec1);
    print(vec2);

    return 0;
}