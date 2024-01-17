template <typename T>

class Stack
{
    int *data;
    int capacity;
    int top;

public:
    Stack() : capacity(10), top(-1), data(new T[capacity])
    {
        cout << "Stack created with capacity " << capacity << endl;
    }

    void push(T value)
    {
        if (top == capacity - 1)
        {
            this->resize();
        }

        data[++top] = value;
    }

    void print()
    {
        int i = 0;
        while (i <= top)
        {
            cout << data[i++] << " ";
        }
        cout << endl;
    }

    T pop()
    {
        if (top == -1)
            return T();
        return data[top--];
    }

    T peek()
    {
        return data[top];
    }

    bool isEmpty()
    {
        return (top == -1);
    } 

    ~Stack()
    {
        delete data;
    }

private:
    void resize()
    {
        T *newData = new T(capacity * 2);
        for (int i = 0; i < capacity; i++)
        {
            newData[i] = data[i];
        }
        delete data;
        capacity *= 2;
        data = newData;
    }
};