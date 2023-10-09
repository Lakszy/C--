#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3]={15,12,6};
    int *ptr=&arr[0];

//! This shows that the name arr stored the arr[0]
// ! that is the first elment of an array 

     cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<endl;
     cout<<*(arr+0)<<" "<<*(arr+1)<<"\n";



// todo storing the whole array as a pointer
int rray[2]={11,12} ;
int (*c)[2]=&rray ;
     cout<<c<<" "<<rray<<" "<<*c<<" "<<*rray<<endl;


    return 0;

}