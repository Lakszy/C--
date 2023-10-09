#include <bits/stdc++.h>
using namespace std;

//? pointers can store adresses
int main()
{
    int x = 10;
    int y = 10;


    //! u pointer is storing the address
    // !(which we can store using &)
    int *u = &x;
   

    cout <<"I am pointer to x: "<< u   <<endl;;
    cout <<"I am dereferenced pointer of x: "<< *u <<endl;
    cout<<"I am normal address: " << &y  <<endl;


// ? the bucket has updated 
// ? its value from  10 -> 23

     x=23;
//? but u is pointing to the same bucket so we will get 
// ? the new value that is being updated in that bucket 
    cout <<"I am new updated dereferenced pointer of x: "<< *u <<endl;



// todo is to change the value of x without disturbing it
// ? we can do this by pointer

     *u=50;
      cout <<"I am value to x: "<<x<<endl;;


    int  l,k;
    cin>>l>>k;


    int *ptrx=&l;
    int *ptry=&k;
    cout<<*ptrx+*ptry<<endl;

    return 0;
}