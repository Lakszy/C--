#include <bits/stdc++.h>
using namespace std;
int frogjump(int *h, int n , int i ){
    if ( i == n-1) return 0;
    if ( i == n-2) return frogjump(h,n,i+1)+ abs(h[i]-h[i-1]);


return min(frogjump(h,n,i+1) + abs(h[i] - h[i+1]), frogjump(h,n,i+2) + abs(h[i] - h[i+2]));

}
int main (){

int a[] = {10,30,40,20};
int n = 4,i=0;
cout<<frogjump(a,n,i);
    return 0;
}