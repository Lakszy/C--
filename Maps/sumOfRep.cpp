#include <bits/stdc++.h>
using namespace std;
int main(){

// SPACE COMPLEXITY O(N)
    map<int,int> m;

    vector<int>v = {1,1,1,3,3,2,2};
    for(auto it:v){
        m[it]++;
    }
    int sum = 0 ;
    for(auto itr:m){
        if (itr.second>1){
            sum+=itr.first;
        }
    }
    cout<<sum<<endl;

    return 0;
   }