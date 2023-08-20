class Stack
{
    int *data;
    int capacity;
    int nextIndex;

public:
    Stack()
    {
        data = new int(4);
        capacity = 4;
        nextIndex = 0;
    }

    void push(int element)
    {
        if (nextIndex == capacity)
        {
            int *newData = new int(2 * capacity);
            capacity = 2 * capacity;
            for (int i = 0; i < nextIndex; i++)
            {
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    bool isEmpty()
    {
        return nextIndex == 0;
    }

    void pop()
    {
        if (nextIndex != 0)
        {
            nextIndex--;
            return;
        }
        cout << "Stack Is Empty" << endl;
    }

    void print()
    {
        for (int i = 0; i < nextIndex; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};