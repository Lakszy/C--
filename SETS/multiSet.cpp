// it can store duplicate values

// Similarity
// remained ordered
// immutable
// identifed by itself
#include <bits/stdc++.h>
using namespace std;

int main(){
multiset<int>ms;

unordered_multiset<int>ums;

ms.insert(4);
ms.insert(1);
ms.insert(2); ms.insert(2); ms.insert(3);

for(auto val: ms){
    cout<<val<<" ";
}

    return 0;
}

insertion-> O(log N)
Deletion-> O(log N)
find-> O(log N)
// in both other set the count will return us the  0 or 1 

more than 1 count()->O( k + log n)