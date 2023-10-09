#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    for (int i = 0; i < 9; i++){
        int elm;
        cin >> elm;
        v.push_back(elm);
    }
    int l = 0, r = v.size() - 1;
    while (l < r){
        
        if (v[l] == 1 && v[r] == 0){
            v[l]=0, v[r]=1;
            l++, r--;
        }
        if (v[l] == 0 ){
            l++;
        }
        if (v[r] == 1 ){
            r--;
        }
    }
    for (int i = 0; i < v.size(); i++){
      cout << v[i] << " ";
    }

    return 0;
}