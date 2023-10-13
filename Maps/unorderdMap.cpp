#include <bits/stdc++.h>
using namespace std;
int main(){
// Keys are unique and not in ordered manner
// Insertion and Deletion and Retrival ->O(1)
// Using Hashing
    unordered_map<int, string> record;

record.insert(make_pair(2,"Raaj"));
record[7]="Bali";
record[3]="Animesh";
record[1]="Lakshay";
record[4]="Arjun";

for( auto pair: record){
    cout<<pair.first<<" "<<pair.second<<endl;
}

// >worstcase = O(n)  AverageCaseO(1)
// ERASE INSERT FIND

    return 0;
}