#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{

    stack<int> st1;
    stack<int> st2;

    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(4);

    st2.push(5);
    st2.push(6);
    st2.push(7);
    st2.push(8);

    st1.swap(st2);

    cout << " st1 =";
    while (!st1.empty())
    {

        cout << st1.top() << " ";
        st1.pop();
    }

    cout << " st2 =";
    while (!st2.empty())
    {

        cout << st2.top() << " ";
        st2.pop();
    }

    return 0;
}