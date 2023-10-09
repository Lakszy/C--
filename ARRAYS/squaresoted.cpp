#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={-10,-2,3,4,6};
    int l = 0;
    int  r = v.size()-1;
    vector<int>ans;
    while(l<r){
        if(abs(v[l]) < abs(v[r])){
            ans.push_back(v[r]*v[r]);
            r--;
        }
        else{
            ans.push_back(v[l] * v[l]);
            l++;
        }
    }
        for (int i = 0; i < ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        
    return 0;
    }