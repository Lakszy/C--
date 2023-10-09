#include <bits/stdc++.h>
using namespace std;

int main(){

//? pointer arithmetic works in that way:
//? if we increases the pointer it referrs 
//? to the next address location(deoends on that type int,float,char)

// int add + 4 by increases 4
// char add +1 increases by 1

int x=10;
int *ptr=&x;
cout<<ptr<<endl<<(ptr+1);
}