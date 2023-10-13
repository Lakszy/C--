#include <bits/stdc++.h>
using namespace std;
int main(){
// Duplicates are allowed
// Binary Search Tree
// INSERT DELETE SEARCH ->O(logn)<-ERASE 

    multimap<string,int> mpmp;
    mpmp.insert(make_pair("lakshay",98117));
    mpmp.insert(make_pair("lakshay",93545));

    for( auto it: mpmp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;

// similarly thier exist unuorderd_multiMap with O(1) complexity

}
