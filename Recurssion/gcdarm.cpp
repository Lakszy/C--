#include <bits/stdc++.h>
using namespace std;
int gcd ( int a , int b){
    if (b > a ) return gcd (b,a);

    if ( b==0 ) return a;

    return gcd(b,a%b);
}

int armst (int n, int d){

if (n==0) return 0;
 return(pow(n%10,d) + armst(n/10,d));
}
int main(){
    cout<<gcd(72,54)<<endl;;
    cout<<armst(153,3);
    return 0;
}