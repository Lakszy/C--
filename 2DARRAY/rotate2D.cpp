#include <bits/stdc++.h>
using namespace std;

// Rotaing by 90 degree
int main(){
    vector<vector<int>> V = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };

        // transpose
        for (int i = 0; i < V.size(); i++){
            for (int j = 0; j < i; j++){
                swap(V[i][j],V[j][i]);
            }  
        }
        // reverse
        for (int i = 0; i < V.size(); i++){
            reverse(V[i].begin(),V[i].end());
        }

        for (int i = 0; i < V.size(); i++){
           for (int j = 0; j < V[i].size(); j++){
            cout<<V[i][j]<<" ";
           }
           cout<<endl;
        }
        
        
        
    return 0;
}