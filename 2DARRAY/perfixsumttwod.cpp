#include <bits/stdc++.h>
using namespace std;
//! method one
int rectangleSum(vector<vector<int>> &mat, int l1, int r1, int l2, int r2){
    int sums = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sums += mat[i][j];
        }
    }
    return sums;
}

// !method 2 using prefix array sum
int summ=0;
int preRectSum(vector<vector<int>> &mat, int l1, int r1, int l2, int r2){
    for (int i = 0; i <mat.size(); i++){
        for (int j = 1; j <mat[0].size(); j++){
            // j cant be 0
            mat[i][j] += mat[i][j - 1];
        }
    }
for (int i = l1; i <=l2; i++){
        if(r1!=0){
            summ+=mat[i][r2]-mat[i][r1-1];
        }
        else{
            summ+=mat[i][r2];
        }
}     
return summ;
}

int main(){
    vector<vector<int>> V = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int l1, l2, r1, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int sum = preRectSum(V, l1, r1, l2, r2);
    cout << sum;

    return 0;
}