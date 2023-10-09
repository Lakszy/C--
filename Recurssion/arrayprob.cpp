#include <bits/stdc++.h>
using namespace std;
void printarr(int arr[],int idx,int n){
if (idx>=n){
    return;
}
cout<<arr[idx];
printarr(arr,idx+1,n);
}


int maxarr(int arr[],int idx,int n){

    if (idx==n-1)
    return arr[idx];

    return max(arr[idx],maxarr(arr,idx+1,n)); 
}


int sum(int arr[],int idx,int n){
    if (idx==n)
    return 0;

  
  return (arr[idx]+sum(arr,idx+1,n));
}
int main(){

    int arr[]={1,2,3,4,5,6,7,8};
    int idx=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    printarr(arr,idx,n);
    cout<<endl<<maxarr(arr,idx,n);
    cout<<endl<<sum(arr,idx,n);
    return 0;
}