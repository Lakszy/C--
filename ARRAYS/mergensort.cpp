#include <bits/stdc++.h>
using namespace std;

int main(){
    int m[] = {1,4,6,7};
    int n[] = {2,4,6,8,9};
    vector<int> ans;
int k=0,l=0;
while(k<=4 && l <=5){
if (m[k]<n[l]){
    ans.push_back(m[k]);
    k++;
}
else{
    ans.push_back(n[l]);
    l++;
}
}
    for (int i = 0; i < 9; i++){
        cout << ans[i] << " ";
    }
    return 0;
}