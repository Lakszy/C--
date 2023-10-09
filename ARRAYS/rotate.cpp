#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int rot;
    cout << "Enter the rotate:";
    cin >> rot;
    // rot % size : because size time rotate is same
    rot = rot % n;
    vector<int> ans;
    for (int i = n - rot; i < n; i++){
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < n - rot; i++){
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }

    return 0;
}