#include <bits/stdc++.h>
using namespace std;

void swap(int x,int y){
    int temp = x;
    x=y;
   y= temp;  
}

int main(){
//! pass by value and refrence by this we
//? mean that in first we directly pass the value 
//? and in second we actually pass the bucket that is
//? the whole value or that complete address of the value.

int l=10;
int k=20;

swap(l,k);
//! strange the value remains the same

// * This is because we have passed by value which means
// * new address location(memory) is being assgnied

// ? we can over come this just by 
// ? simply adding & before the argumnets  
cout<<l<<" "<<k;

return 0;
}