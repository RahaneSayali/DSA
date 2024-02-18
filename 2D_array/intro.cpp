#include<iostream>
using namespace std;
int main(){
    //create 2d array
    int arr[3][4];

    /*taking input->row wise input
   for(int i=0;i<3;i++){
       for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
 }
 */

  //taking input->row wise input
    for(int col=0;col<4;col++){
        for(int row=0;row<3;row++){
        cin>>arr[row][col];
    }
    }

//print
for(int row=0;row<3;row++){
   for(int col=0;col<4;col++){
    cout<<arr[row][col]<<" ";
   }
   cout<<endl;
}
return 0;
}