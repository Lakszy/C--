#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[]={1,19};
    int *ptr=&arr[0];
    cout<<*ptr<<endl;
    *ptr++;//this is post increment 
    cout<<*ptr<<endl;
    cout<<arr[0]<<" "<<arr[1];
    return 0;
}