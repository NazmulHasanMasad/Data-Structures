#include <iostream>
#include <stack>
#include <bits/stdc++.h>

using namespace std;

void insertAtbottom(stack<int> &st, int element)
{
    if (st.empty())
    {
        st.push(element);
        return;
    }
    /* else
     {

         int topelement = st.top();
         st.pop();
         insertAtbottom(st, element);

         st.push(topelement);
     } */
}

void reverse(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    else
    {

        int element = st.top();
        st.pop();
        reverse(st);
        insertAtbottom(st, element);
    }
}

int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverse(st);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}