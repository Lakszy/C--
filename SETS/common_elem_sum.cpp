#include <bits/stdc++.h>>
using namespace std;

int main(){
    // The atsk is to find the common elements in arrays and return thier sum

    vector<int> V1 = {1, 1, 2, 3, 4, 3, 3};
    vector<int> V2 = {1, 6, 7, 5, 2, 3, 6};

    set<int> s1;
    set<int> s2;
    int ans = 0;

    for (auto elem : V1){
        s1.insert(elem);
    }

    for(auto ele: V2){
        if (s1.find(ele) != s1.end()){
            ans+=ele;
        }
    }

    cout<<ans<<endl;

    return 0;
}