#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={22,1,21,32,31,10,2};
    int l = 0;
    int  r = v.size()-1;
    while(l<r){
     if (v[l] % 2 == 1 && v[r] % 2 ==0){
        swap(v[l],v[r]);
        l++ , r-- ;
     }
     if (v[l] % 2 == 0){
      l++;
     }
     if (v[r] % 2 == 1){
      r--;
     }
    }
    
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";        
    }
    
    return 0;
}