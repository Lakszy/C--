// Repeatedly swap two adajcent elements if in woring order comapred to adjacent elments

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &v){
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
    return;
}

// Only in nearly sorted Array
void optimizedBubbleSort(vector<int> &v){
    bool flag = false;
    int n = v.size();
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (v[j] > v[j + 1]){
                flag = true;
                swap(v[j], v[j + 1]);
            }
        }
        if(!flag){
            break; 
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    optimizedBubbleSort(v);
    bubbleSort(v);

    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}