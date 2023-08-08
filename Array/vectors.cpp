#include <iostream>
#include<vector>
using namespace std;
int main(){
   //DEMO VECTOR
   //vector<int>arr = //{1,2,10,12,15};
   //fill constructor
   vector<int>arr(10,7);

   //fill contructor
   vector<int>visited(100,0);

   //pop_back
   arr.pop_back();
   //push_back o(1)
   arr.push_back(16);

   //print all the elements
   for (int i=0; i<arr.size();i++){
    cout<<arr[i]<<endl;
   }
   return 0;
}