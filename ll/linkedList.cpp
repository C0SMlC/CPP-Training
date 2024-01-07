class linkedList
{

public:
    int data;
    linkedList *next;
    linkedList(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};