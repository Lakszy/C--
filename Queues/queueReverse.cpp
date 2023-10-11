#include <bits/stdc++.h>
using namespace std;
// to reverse we need stack and qeueue
int main(){
    queue<int> q;
    stack<int>st;
    q.push(10);
    q.push(20);
    q.push(30);
    while (!q.empty()){
    st.push(q.front());
        q.pop();
    }
while (! st.empty()){
    q.push(st.top());
    st.pop();
}


while (! q.empty()){
cout<<q.front()<<" ";
q.pop();
}


    return 0;
}