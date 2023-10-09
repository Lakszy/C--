#include <bits/stdc++.h>
using namespace std;

stack<int> copyStack(stack<int> &input){
    stack<int> temp;
    while (!input.empty())
    {
        int ent = input.top();
        input.pop();
        temp.push(ent);
    }
    stack<int> result;
    while (!temp.empty())
    {
        int ent = temp.top();
        temp.pop();
        result.push(ent);
    }
    return result;
}


// This method is using recurrsion 
void f(stack<int> &st,stack<int> &result){
    if(st.empty()){
        return;
    }
    int curr = st.top();
    st.pop();
    f(st,result);
    result.push(curr);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(3);
    st.push(2);
    st.push(4);
    // stack<int> res = copyStack(st);
    stack<int> res;
    f(st,res);
    while (!res.empty()){
        int curr = res.top();
        res.pop();
        cout << curr << endl;
    }
    return 0;
}