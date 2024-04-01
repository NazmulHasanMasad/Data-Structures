#include <iostream>

using namespace std;

int sumOfarray(int n)
{
    int array[n];
    for (int j = 0; j < n; j++)
    {
        cin >> array[j];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    cout << "Sum of array : " << sum << endl;
    return 0;
}

int main()
{
    int n;
    cout << "enter the size of an array" << endl;
    cin >> n;

    sumOfarray(n);
    return 0;
}