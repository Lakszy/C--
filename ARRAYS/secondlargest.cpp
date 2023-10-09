#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[] = {1, 6, 8, 8, 4, 2};
  int n = sizeof(arr) / sizeof(arr[0]);

  int mx = INT_MIN;
  int smx = 0;
  
  for (int i = 0; i < n; i++){
    mx = max(mx, arr[i]);
  }

  for (int i = 0; i < n; i++){
    if (arr[i] > smx && arr[i] != mx){
      smx = arr[i];
    }
  }

cout<<smx;
  return 0;
}