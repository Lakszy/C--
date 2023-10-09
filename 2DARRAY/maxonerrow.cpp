// todo two  methods
//  ? we can check the first one found and sub index from
//  ?columns to get the idea of totaol no.of ons

// * we can check the leftmost one hence we have
// *started from the first row this means now further
// *we have to keep checking left side only

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> V = {
        {0, 0, 0, 1},
        {0, 0, 0, 1},
        {1, 0, 0, 1}};

    int maxones = INT_MIN , maxOnesRows = -1;
    int columns = V[0].size();

    for (int i = 0; i < V.size(); i++){
        for (int j = 0; j < V[i].size(); j++){
            int numberOfOnes = columns - j;
            if (numberOfOnes > maxones){
                maxOnesRows = numberOfOnes;
                maxOnesRows = i;
            }
        }
    }




cout<<maxOnesRows;
    return 0;
}