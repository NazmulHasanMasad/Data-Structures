#include <iostream>
#include <string>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> s;
    s["masud"] = 10;
    s["rasel"] = 20;
    s["afjal"] = 30;

    s.at("masud") = 20;
    s.at("rasel") += 10;
    s.at("afjal") -= 20;

    for (auto x : s)
    {
        cout << x.first << " " <<

            x.second << " " << endl;
    }
    cout << s["masud"] << endl;

    auto it = s.begin();

    cout << "first element of the map is : ";

    cout << it->first << endl;

    cout << "another way to printing the elements: " << endl;
    for (auto i = s.begin(); i != s.end(); i++)
    {

        cout << i->first << " " << i->second << "and the bucket number is " << s.bucket(i->first);
        cout << endl;
    }

    return 0;
}