#include <bits/stdc++.h>
using namespace std;

bool isnum(int num, int *temp)
{
    if (num >= 0 && num <= 9)
    {
        int ld = (*temp) % 10;
        (*temp) /=10;   
        return (num == ld);
    }
    bool result = (isnum(num / 10, temp) && (num % 10) == ((*temp) / 10));
    (*temp) /= 10;
    return result;
}

int main()
{

    int num = 12212921;
    int anotherNum = num;
    int *temp = &anotherNum;

    cout << isnum(num, temp);
}