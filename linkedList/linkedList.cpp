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
        this->next = NULL;
    }
};

Node *Input()
{
    int data;
    cout << "Enter The Value(-1 to exit) : ";
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
        cout << "Enter The Value(-1 to exit) : ";
        cin >> data;
    }

    return head;
};

void print(Node *head)
{
    // Node *temp = head;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *insertAt(Node *head, int index, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    int count = 0;

    if (index == 0)
    {
        newNode->next = head;
        return newNode;
    }

    while (temp != NULL and count < index - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp)
    {
        newNode->next = temp->next;
        temp->next = newNode;
    }

    return head;
}

Node *deleteAt(Node *head, int index)
{
    int count = 0;
    Node *temp = head;
    if (index == 0)
    {
        head = head->next;
        return head;
    }
    while (temp != NULL && count < index - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp)
    {
        Node *tempVar = temp->next->next;
        delete temp->next;
        temp->next = tempVar;
    }

    return head;
}

Node *insertAtRecursive(Node *head, int index, int val)
{
    if (head == NULL)
        return head;

    if (index == 0)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        return newNode;
    }

    Node *returnedHead = insertAtRecursive(head->next, index - 1, val);
    head->next = returnedHead;
    return head;
}

Node *deleteAtRecursive(Node *head, int index)
{
    if (head == NULL)
        return head;
    if (index == 0)
    {
        head = head->next;
        return head;
    }

    Node *returnedNodes = deleteAtRecursive(head->next, index - 1);
    head->next = returnedNodes;
    return head;
}

int midPointLL(Node *head)
{
    if (head == NULL)
        return 0;

    Node *ptr1 = head->next;
    Node *ptr2 = head;

    while (ptr1 != NULL)
    {
        ptr1 = ptr1->next->next;
        ptr2 = ptr2->next;
    }
    return ptr2->data;
}

int calcLength(Node *head)
{
    if (head == NULL)
        return 0;

    return 1 + calcLength(head->next);
}

Node *mergeSorted(Node *LL1, Node *LL2)
{
    Node *head = nullptr;
    Node *tail = nullptr;

    if (LL1 == nullptr)
        return LL2;
    if (LL2 == nullptr)
        return LL1;

    if (LL1->data > LL2->data)
    {
        head = LL2;
        tail = LL2;
        LL2 = LL2->next;
    }
    else
    {
        head = LL1;
        tail = LL1;
        LL1 = LL1->next;
    }
    while (LL1 != nullptr && LL2 != nullptr)
    {
        if (LL1->data > LL2->data)
        {
            tail->next = LL2;
            LL2 = LL2->next;
        }
        else
        {
            tail->next = LL1;
            LL1 = LL1->next;
        }
        tail = tail->next;
    }
    // Append remaining nodes from LL1 or LL2
    if (LL1 != nullptr)
        tail->next = LL1;
    if (LL2 != nullptr)
        tail->next = LL2;

    return head;
}

Node *reverseLL(Node *linkedList)
{
    if (linkedList == NULL || linkedList->next == NULL)
    {
        return linkedList;
    }

    Node *reversedWithoutHead = reverseLL(linkedList->next);

    Node *temp = reversedWithoutHead;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = linkedList;
    linkedList->next = NULL;
    return reversedWithoutHead;
}

Node *Add(Node *head1, Node *head2)
{
    int carry = 0;
    Node *head = NULL;
    Node *ans = NULL;

    while (head1 != NULL || head2 != NULL)
    {
        int sum = carry + head1->data + head2->data;
        int lastDigit = sum % 10;
        carry = sum / 10;
        Node *newNode = new Node(lastDigit);
        cout << "Iteration Value: " << newNode->data << endl;
        if (ans == NULL)
        {
            ans = newNode;
            head = newNode;
        }
        else
        {
            ans->next = newNode;
            ans = ans->next;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    if (carry != 0)
    {
        Node *newNode = new Node(carry);
        ans->next = newNode;
    }
    cout << "In the add : ";
    print(head);
    return head;
}
Node *addTwoNumbers(Node *head1, Node *head2)
{
    // Step 1 reverse LL
    Node *reversed1 = reverseLL(head1);
    Node *reversed2 = reverseLL(head2);

    // Step to get the answer
    Node *ans = Add(reversed1, reversed2);

    // reverse the answer

    return reverseLL(ans);
}

int main()
{
    Node *head1 = Input();
    print(head1);
    Node *head2 = Input();
    print(head2);
    Node *ans = addTwoNumbers(head1, head2);
    print(ans);
    // Node *reversed = reverseLL(head1);
    // print(reversed);

    // Node *head2 = Input();
    // print(head2);

    // Node *emptyptr;

    // Node *head3 = mergeSorted(head1, head2);
    // print(head3);

    return 0;
}