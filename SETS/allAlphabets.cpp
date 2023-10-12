#include <bits/stdc++.h>
using namespace std;
// The approach is if we have stored the input string
// in set it means they are unique if size == 26 means 
// all alphabets are present if not then not present






bool checkAllAlphabets(string s){
    if (s.length() < 26){
        return false;
    }
    // Here we want to convert the every alpha to lower
    //! using transform (start,end,tostore,operation)
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    set<char> Alpha;
    for (auto ch : s){
        Alpha.insert(ch);
    }
    return (Alpha.size() == 26);
}

int main(){

    string str;
    cin >> str;
cout<<checkAllAlphabets(str);
    return 0;
}