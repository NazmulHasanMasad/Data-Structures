#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(100);
    v.push_back(200);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    for (auto element : v)
    {
        cout << element << endl;
    }

    for (auto element : v)
    {
        cout << element << endl;
    }

    vector<int> v2(3, 50);
    for (auto element : v2)
    {
        cout << element << endl;
    }

    int sum = accumulate(v2.begin(), v2.end(), 0);
    cout << sum << endl;

    int max = *max_element(v.begin(), v.end());
    cout << max << endl;

    int min = *min_element(v.begin(), v.end());
    cout << min << endl;

    return 0;
}