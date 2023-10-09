#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int>v = {5,4,1,2,3};
vector<int>ans;
int sum =0;
    for (int i = 0; i < v.size(); i++){
       sum+=v[i];
       ans.push_back(sum);
    }
    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    

    return 0;
}