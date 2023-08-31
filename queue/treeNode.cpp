#include <bits/stdc++.h>
#include "Tree.cpp"
using namespace std;

TreeNode<int> *takeInputLevelwise()
{
    int rootData;
    cout << "Enter root node: ";
    cin >> rootData;
    TreeNode<int> *rootNode = new TreeNode<int>(rootData);
    queue<TreeNode<int> *> remainingChildren;
    remainingChildren.push(rootNode);

    while (!remainingChildren.empty())
    {
        TreeNode<int> *front = remainingChildren.front();
        remainingChildren.pop();
        cout << "Number of childrens of " << front->data << " : ";
        int numchild;
        cin >> numchild;
        for (int i = 0; i < numchild; i++)
        {
            cout << "Enter the " << i + 1 << " child of " << front->data << " : ";
            int child;
            cin >> child;
            TreeNode<int> *children = new TreeNode<int>(child);
            remainingChildren.push(children);
        }
    }

    return rootNode;
}

void printTree(TreeNode<int> *root)
{
    if (root == NULL)
        return;

    cout << root->data << " : ";

    for (int i = 0; i < root->Children.size(); i++)
    {
        cout << root->Children[i]->data << ", ";
    }
    cout << endl;
    for (int i = 0; i < root->Children.size(); i++)
    {
        printTree(root->Children[i]);
    }
}

int main()
{

    TreeNode<int> *root = takeInputLevelwise();
    printTree(root);
    return 0;
}