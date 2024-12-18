#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class queue
{
    node *front;
    node *back;

public:
    queue()
    {
        front = NULL;
        back = NULL;
    }

    void Enqueue(int x)
    {
        node *n = new node(x);

        if (front == NULL)
        {
            back = n;
            front = n;
        }
        back->next = n;
        back = n;
    }

    void Dequeue()
    {
        if (front == NULL)
        {
            cout << "overflow" << endl;
            return;
        }
        node *toDelete = front;
        front = front->next;
        delete toDelete;
    }
    int peek()
    {
        if (front == NULL)
        {
            cout << "no element" << endl;
            return -1;
        }
        return front->data;
    }

    bool empty()
    {
        if (front == NULL)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.Enqueue(5);
    q.Enqueue(8);
    q.Enqueue(9);

    cout << q.peek() << endl;

    q.Dequeue();

    cout << q.peek() << endl;

    return 0;
}
