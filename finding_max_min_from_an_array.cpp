#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "enter n ";
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int maxNum = INT_MIN;

    int minNum = INT_MAX;

    for (int j = 0; j < n; j++)
    {
        maxNum = max(maxNum, array[j]);
        minNum = min(minNum, array[j]);
    }

    cout << maxNum << endl;
    cout << minNum << endl;
    return 0;
}