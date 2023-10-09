#include <bits/stdc++.h>
using namespace std;
bool checkel(int arr[], int idx, int size, int m)
{
    if (idx == size)
        return false;

    if (arr[idx] == m)
    {
        return true;
    }
    return checkel(arr, idx + 1, size, m);
}

int main()
{

    int arr[] = {1, 2, 3, 45, 6, 78, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int idx = 0;
    int elem = -90;
    bool result = checkel(arr, 0, n, elem);
    if (result)
        cout << "true";

    else
        cout << "false";
}