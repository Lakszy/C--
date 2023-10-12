#include <bits/stdc++.h>
using namespace std;

int main(){
    
    set<int> s = {1, 3, 4, 3, 5, 7, 4};


// finds rerturns us the end iterator if the value is not present in the set  
if (s.find(1) != s.end()){
    cout<<"\nFOUND\n";
}else{
    cout<<"\nNOT-FOUND\n";
}

// Lower bound returns the just greator value if not present  
auto ptrl=s.lower_bound(2);
cout<<*ptrl<<endl;


// Upper_bound will give us the next greator element irrespective of the prrensce
auto ptru=s.upper_bound(5);
cout<<*ptru<<endl;


}