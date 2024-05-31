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

    char arr[n + 1];
    cin >> arr;

    bool check = 1;

    for (int i = 0; i < n; i++)
    {

        if (!isalnum(arr[i]))
        {
            arr[i]++;
            continue;
        }

        if (!isalnum(arr[n - 1 - i]))
        {
            arr[n - 1 - i]--;
            continue;
        }

        bool check = 1;

        if (tolower(arr[i]) != tolower(arr[n - 1 - i]))
        {
            check = 0;
            break;
        }
    }

    if (check == true)
    {
        cout << "the word is  a palindrome";
    }
    else
    {
        cout << "The word is not palinfrome";
    }

    return 0;
}
