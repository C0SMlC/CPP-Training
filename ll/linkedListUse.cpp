#include <bits/stdc++.h>
using namespace std;

#include "linkedList.cpp"

void print(linkedList *head)
{
    linkedList *temp = head;
    cout<<"Printing linked List : "<< endl;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

linkedList *input()
{
    int data;
    cout << "Enter the number(-1 to exit)" << endl;
    cin >> data;

    linkedList *head = nullptr;
    linkedList *tail = nullptr;

    while (data != -1)
    {
        linkedList *newNode = new linkedList(data);

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }

        cout << "Enter The Value(-1 to exit) : ";
        cin >> data;
    }

    return head;
}
int main()
{
    // linkedList l1(10);
    // linkedList *head = &l1;

    // linkedList l2(20);
    // linkedList l3(30);
    // linkedList l4(40);
    // linkedList l5(50);

    // l1.next = &l2;
    // l2.next = &l3;
    // l3.next = &l4;
    // l4.next = &l5;

    linkedList *head = input();

    print(head);

    return 0;
}