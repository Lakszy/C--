#include <bits/stdc++.h>
using namespace std;


//? The task is to check if the elements frequnecy
// ? in the or not, the query can be very large.

int main(){

vector<int> v ={2,3,3,2,4,5};

const int n = 1e5+10;

vector<int>freq(n,0);

for (int i=0;i<v.size();i++){
freq[v[i]]++;
}

int q;
cin>>q;

while(q--){
    int elem;
    cin>>elem;
    cout<<freq[elem]<<endl;
    }

return 0;
}