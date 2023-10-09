#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={10,12,13,15,17,18};
    int l=4 , r=4;
    int ps=0;
    vector<int>ans;
    for (int i = 0; i < v.size(); i++){
        ps+=v[i];
        ans.push_back(ps);
    }
    cout<<ans[r] - ans[l-1];
    
    return 0;
}