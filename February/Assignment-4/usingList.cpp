#include <bits/stdc++.h>
using namespace std;

void print(list<int> myList)
{
    cout << "List after removing duplicates: ";
    for (const auto &element : myList)
    {
        cout << element << " ";
    }
    cout << endl;
}

void removeDuplicates(list<int> &myList)
{
    auto currentNode = myList.begin();
    while (currentNode != myList.end())
    {
        auto nextNode = next(currentNode);
        while (nextNode != myList.end())
        {
            if (*currentNode == *nextNode)
            {
                nextNode = myList.erase(nextNode);
            }
            else
            {
                ++nextNode;
            }
        }
        ++currentNode;
    }
}

void removeElement(list<int> &myList, int elementToRemove)
{
    myList.remove(elementToRemove);
}

int main()
{
    list<int> myList = {11, 23, 11, 23, 24, 25, 380, 450, 350, 450, 11};
    removeDuplicates(myList);
    print(myList);

    removeElement(myList, 11);
    print(myList);
    return 0;
}
