#include <bits/stdc++.h>
using namespace std;

int woloop(int num)
{

    if (num <= 1)
        return num;

    cout << num << " ";
    return woloop(num - 1);
}

int printk(int nums, int k, int j)
{

    if (j <= k)
    {
        cout << nums * k << " ";
    }
    return (printk(nums, k - 1, j++));
}

int plusminus(int n){
 if (n == 0)   return 0;

 return plusminus(n-1) + ((n % 2 == 0) ? (-n) : (n));
}
int main()
{
    int num = 14, nums = 12, k = 5, j = 0
    cout << woloop(num) << endl;
    cout << printk(nums, k, j);
    cout << plusminus(3);
    return 0;
}