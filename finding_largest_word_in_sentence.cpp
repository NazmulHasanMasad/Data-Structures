#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int n;

    cin >> n;
    cin.ignore();

    char arr[n + 1];

    cin.getline(arr, n);
    cin.ignore();
    int i = 0;
    int clen = 0, maxlen = 0;
    while (1)
    {

        if (arr[i] == ' ' || arr[i] == '\0')
        {

            if (clen > maxlen)
            {
                maxlen = clen;
            }

            clen = 0;
        }
        else

            clen++;

        if (arr[i] == '\0')
            break;

        i++;
    }

    cout << maxlen << endl;

    return 0;
}
