#include <bits/stdc++.h>
using namespace std;

int main()
{
    // !explanation
    // ? vector<int>v1={1,2,3};
    // ? vector<int>v2={4,5};
    // ? vector<int>v3={6,7};

    //?(now) vector<vector<int>>V={v1,v2,v3};

    //* which will look like this
    // *V={
    // * {1,2,3},
    // *{4,5},
    // *{6,7}
    // *}

    //  initializing nXm matrix
    int n, m;
    // vector<vector<int>> V(n, vector<int>(m));
    vector<vector<int>> V2(3, vector<int>(4, 0));

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout<<"("<<i<<j<<") "<< V2[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}