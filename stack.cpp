#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

class Stack
{
    int capacity;
    int *array;
    int top;

public:
    Stack(int c)
    {
        capacity = c;
        array = new int[c];
        top = -1;
    }

    void push(int x)
    {
        if (top == capacity - 1)
        {
            cout << "stack overflow";
            return;
        }
        top++;
        array[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << " no elements to pop";
        }
        top--;
    }

    int Top()
    {

        if (top == -1)
        {
            cout << " no elements in the stack";
        }

        return array[top];
    }

    bool empty()
    {
        return top == -1;
    }
};

int main()
{

    Stack st(10);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;

    return 0;
}
