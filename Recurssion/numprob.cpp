#include <bits/stdc++.h>
using namespace std;

// *basecase-> num == 0 || num == 1
// *assumption ->n*(n-1)
// *selfwork->num * fact(num - 1)

int fact(int num){
    if (num == 0 || num == 1)
        return 1;

    return (num * fact(num - 1));
}


// *basecase-> ber == 0 || ber == 1
// *assumption ->(n-1)+(n-2)
// *selfwork->fin(ber - 1)+fib(ber-2)

int fib(int ber){
    int f = 0, s = 1;
    if (ber == 0 || ber == 1){
        return ber;
    }
    return (fib(ber - 1) + fib(ber - 2));
}

int sum(int m){
   if (m>=0 && m<=9){
    return m;
   }
   return(sum(m/10)+sum(m%10));
}


// ! it reduces th e tc to o(logn) since we 
// ! are not calling th same value twice
int pow(int p, int q){
    if(q==0)
        return 1;
    
    if(q%2==0){
    return (pow(p,q/2)*pow(p,q/2));
    }
    else if (q%2 != 0){
        return p*(pow(p,(q-1)/2) * pow(p,(q-1)/2));
    }
}

int main(){
    cout << fact(5)<<endl;
    cout << fib(7)<<endl;
    cout << sum(1234)<<endl;
    cout << pow(2,4);
    return 0;
}