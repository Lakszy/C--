#include <bits/stdc++.h>
using namespace std;

int main(){

// it uses some hashed function from which it stores a certain value to the coded value 
unordered_set<int>os={3,21,23,1,11};
for(auto el:os){
    cout<<el<<endl;
}
    return 0;
}

Hashing 
// Loadfactor -> size of unorderedSet / bucket count 
// reHash(x) -> it sets the no. of bucket to x or more