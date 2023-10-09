#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st, int k ){
    if (st.empty()) {
         st.push(k);
        return;
        };
    int curr = st.top();
    st.pop();
    insertAtBottom(st,k);
    st.push(curr);  
}
int main(){
stack<int>st;
st.push(1);
st.push(2);
st.push(3);
int k =8;
stack<int>res;
insertAtBottom(st,k);

   while (!st.empty()){
        int curr = st.top();
        st.pop();
        cout << curr << endl;
    }
    return 0;
}


//! Another task is to insert elements at kth node
// * Simply one can do that remove that many elements from the stack and insert the element 
// *such that pop while the desired postion for insertion is not reached then push the element and then push poped elements taht we have maintained in the another stack