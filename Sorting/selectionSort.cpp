#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &v){
    int n = v.size();
    for (int i = 0; i < n - 1; i++){
        // assuming at the start
        int min_idx = i;
        // finding the min element 
        for (int j = i + 1; j < n; j++){
            if (v[min_idx]>v[j])
            min_idx = j;
        }

        // placing min elem at begining
        if (min_idx != i ){
            swap(v[i],v[min_idx]);
        }
    }
   return ;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    selectionSort(v);

    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}