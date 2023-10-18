// ! Repeatedly take elem from unsorted array and insert in sorted Subarray
#include <bits/stdc++.h>
using namespace std;
// In this we assume the first element is the first sorted part
void insertionSort(vector<int> &v,int n){
    for (int i = 1; i < n; i++){
        int curr = v[i];
        int j = i-1;
// finding the correct postion for our current element
        while (v[j] > curr &&  j>=0){
            v[j+1] = v[j]; 
            j--;
        }
        // inserting the Current element 
        v[j+1] = curr;
    }
    return;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    insertionSort(v,n);
    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}