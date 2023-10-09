#include <bits/stdc++.h>
using namespace std;

// !here first we have the  base case if the the idx == size return empty
// *second we have maintain the empty string and added the first string elmen
// ? Now we check if the elem we have added is 'a' or not 
// ? if a then append empty string else append curr and repeat

string removeelem(string m,int idx,int n){
    if (idx == n)
    return "";
    
    string curr="";
    curr+=m[idx];
    return ((m[idx]=='a'? "" : curr) + removeelem(m,idx+1,n));
}

int main(){
    int idx=0;
    string s ="ahbfafyaa";
   cout<< removeelem(s,idx,s.length());
    return 0;
}