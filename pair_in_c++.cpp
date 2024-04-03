#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int array[] = {10, 16, 7, 14, 5, 3, 12, 9};
    vector<pair<int, int>> v;

    int n = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(array[i], i));
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {

        array[v[i].second] = i;
    }
    for (int i = 0; i < v.size(); i++)
    {

        cout << array[i] << " ";
    }

    return 0;
}