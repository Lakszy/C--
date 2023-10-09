#include <bits/stdc++.h>
using namespace std;
void subsets(int arr[],int n,int idx,int sum,vector<int>&result){
if (idx==n){
result.push_back(sum);
return ;
}
subsets(arr,n,idx+1,sum,result);
subsets(arr,n,idx+1,arr[idx]+sum,result);
}
int main(){   
    int arr[]={2,3};
    vector<int> result;
    subsets(arr,2,0,0,result);

    for (int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}