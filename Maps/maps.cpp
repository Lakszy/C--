#include <bits/stdc++.h>
using namespace std;
// STL container which stroes key value pair
// The elments are stored in Ascending or Descding order
// Maps cannot have duplicate keys
// impelmented through BST
// Retriva complexity is O(logn)
int main(){

    // for descending
    // map<string,int,greater<string>>direct;

    map<string, int> direct;
    direct["lakshay0"] = 98117;
    direct["lakshay1"] = 76154;
    direct["lakshay2"] = 87654;

    // Insertion O(logn)
    direct["lakshay1"]=93545;

      
// erase comlpexity is O(logn)
// on the other hand erase[str,end]-> this has TC of O(n) 
direct.erase("lakshay0");


// SWAP() -> to swap two maps
// CLEAR()           // EMPTY()
// SIZE             // MAX_SIZE()


//! find()-> it returns itr to element if
//! present else it will return endPtr()


// count()->no. of occurence 
// if this return 1 then it means the key is present because are unique
// return 0 it means no value present


    for (auto element : direct){
        cout << "NAME :" << element.first << " "
             << "ID :-" << element.second << endl;
    }
//! to define iterator first define Structure YOu are using iit for
//! then iterator


map<string,int>::reverse_iterator itr;
for (itr = direct.rbegin();itr != direct.rend();itr++){
    cout<<itr->first<<" "<<itr->second<<endl;
}









    return 0;
}