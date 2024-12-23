#include <bits/stdc++.h>

using namespace std;

class sta
{
    queue<int> q;

public:
    void push(int x)
    {
        queue<int> temp;
        temp.push(x);
        while (!q.empty())
        {
            temp.push(q.front());
            q.pop();
        }
        swap(q, temp);
    }

    void pop()
    {
        q.pop();
    }

    int peek()
    {
        return q.front();
    }
    bool empty()
    {
        return q.empty();
    }
};

int main()
{
    sta st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;
    st.pop();

    return 0;
}