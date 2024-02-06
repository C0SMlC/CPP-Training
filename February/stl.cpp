#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

void removeDuplicate(list<int> &l)
{
    l.sort();
    l.erase(unique(l.begin(), l.end()), l.end());
}

void printList(const list<int> &l)
{
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}

void removeDuplicateOptimal(list<int> &l)
{
    auto currentNode = l.begin();

    while (currentNode != l.end())
    {
        auto nextNode = next(currentNode);

        while (nextNode != l.end())
        {
            if (*nextNode == *currentNode)
            {
                nextNode = l.erase(nextNode);
            }
            else
            {
                nextNode++;
            }
        }
        currentNode++;
    }
}

void removeElements(list<int> &l, int value)
{

    l.remove(value);
}

int main()
{
    list<int> l = {1, 1, 2, 3, 5, 6, 9, 58, 9, 6, 6, 9};
    removeDuplicateOptimal(l);
    printList(l);
    removeElements(l, 1);
    printList(l);

    return 0;
}
