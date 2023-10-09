#include <bits/stdc++.h>
using namespace std;

// !Such that if we can divide our array
// ?into two sub array with equal sum

bool checksum(vector<int> &v){
    int ts=0;
    for (int i = 0; i < v.size(); i++){
        ts += v[i];
    }
    int ps = 0;
    for (int i = 0; i < v.size(); i++){
        ps += v[i];
        int ss = ts - ps;

        if (ss == ps){
            return true;
            }
    }
  return false;
}
int main(){
    vector<int> v = {3, 1};
    cout << checksum(v);
}