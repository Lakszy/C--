#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector< int >> V = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    }; 
//? we have set a variable direction (0,1,2,3) with which we will be assigning the movement
// * left->right (0)  
// * top->bottom (1)
// * right->left (2)
// * bottom->top (3)
    for (int i = 0; i < 3; i++){
      for (int j = 0; j < 3; j++){
        cout<<V[i][j]<<" ";
      }
      cout<<endl;
    }
    

int left=0 , top=0;
int right=V[0].size()-1;
int bottom=V.size()-1;

int direction=0;
while(left<=right && top <=bottom){

     
    //  first movemnt L->R
    if(direction ==0){
        for (int col = left; col <=right; col++){
            cout<<V[top][col]<<" ";
        }      
        top++;
    }

    //  second movemnt T->B
    else if(direction ==1){
        for (int row = top; row <= bottom; row++){
            cout<<V[row][right]<<" ";
        }      
        right--;
    }
    
    //  third movemnt R->L
    else if(direction ==2){
        for (int col= right; col >=left; col--){
            cout<<V[bottom][col]<<" ";
        }      
        bottom--;
    }
    
    //  fourth movemnt B->T
    else{
        for ( int row = bottom; row>=top ; row--){
            cout<<V[row][left]<<" ";
        }
        left++;
    }
// !!  such that direction remains in its limit(0,1,2,3)
    direction=(direction+1)%4;
}

    return 0;
}       