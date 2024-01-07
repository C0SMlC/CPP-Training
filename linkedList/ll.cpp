#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

Node *input()
{
    int data;
    cout << "Enter The Value(-1 to exit) : ";
    cin >> data;

    Node *head = nullptr;
    Node *tail = nullptr;

    while (data != -1)
    {
        Node *newNode = new Node(data);

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }

        tail->next = newNode;
        tail = newNode;

        cout << "Enter The Value(-1 to exit) : ";
        cin >> data;
    }

    return head;
}

void print(Node *head)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void deleteAt(Node *head, int index)
{
    Node *temp = head;
    int count = 0;
    while (temp != nullptr && count < index - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != nullptr && temp->next != nullptr)
    {
        temp->next = temp->next->next;
    }
}

int main()
{
    Node *head = input();
    print(head);
    return 0;
}