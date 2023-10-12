#include <bits/stdc++.h>
using namespace std;

int main(){
    // decreasing
    // set<int,greater<int>> s = {1, 3, 4, 3, 5, 7, 4};
    
    // increasing
    set<int> s = {1, 3, 4, 3, 5, 7, 4};

    // * O(logn) // insert func() returns itr to the inserted value
    s.insert(2);
    s.insert(6);

    cout << s.size()<<endl;
    // Holds the memory which is allocated to our set
    cout << s.max_size()<<endl;

// Traversing we use the iterator
set<int>:: iterator itr;
for (itr = s.begin() ; itr != s.end(); itr++){
cout<<*itr<<" ";
  }
  cout<<endl;

  for(auto value: s){
    cout<<value<<" ";
  }
  cout<<endl;

// O(logn)
auto itrs1 = s.begin();
itrs1++;
auto itrs2 = s.begin();
advance(itrs2,3);

  s.erase(itrs1,itrs2);

  for(auto value: s){
    cout<<value<<" ";
  }


return 0;
}