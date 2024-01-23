#include <bits/stdc++.h>
using namespace std;

#include "LinkedList.h"

void print(const Node *head)
{
    for (const Node *temp = head; temp; temp = temp->next)
    {
        cout << temp->data << ' ';
    }
    cout << endl;
}

Node *insertAt(int position, int data, Node *head)
{
    if (position == 0)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        return newNode;
    }

    Node *temp = head;
    while (--position && temp)
    {
        temp = temp->next;
    }

    if (position == 0 && temp)
    {
        Node *newNode = new Node(data);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    else
    {
        cout << "Invalid position for insertion." << endl;
    }

    return head;
}

Node *deleteAt(Node *head, int position)
{
    if (head == nullptr)
    {
        std::cout << "List is empty. Cannot delete." << std::endl;
        return nullptr;
    }

    if (position == 0)
    {
        Node *newHead = head->next;
        delete head;
        return newHead;
    }

    Node *prev = nullptr;
    Node *curr = head;

    for (int i = 0; i < position && curr; ++i)
    {
        prev = curr;
        curr = curr->next;
    }

    if (curr == nullptr)
    {
        std::cout << "Invalid position for deletion." << std::endl;
    }
    else
    {
        prev->next = curr->next;
        delete curr;
    }

    return head;
}

Node *takeInput()
{
    int data;
    cout << "Enter the data: ";
    cin >> data;

    Node *head = nullptr;
    Node *tail = nullptr;

    while (data != -1)
    {
        Node *newNode = new Node(data);

        if (!head)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }

        cout << "Enter the data: ";
        cin >> data;
    }

    return head;
}

int main()
{
    Node *head = takeInput();
    print(head);

    insertAt(2, 100, head);
    print(head);

    deleteAt(head, 2);
    print(head);

    return 0;
}