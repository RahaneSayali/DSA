#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
  //cout<<"Comparing "<<a<<" and "<<b<<endl;
  return a<b;
}
int main(){
   int arr[]={10,9,8,6,5,4,3,2,11,16,8};
   int n=sizeof(arr)/sizeof(int);
   sort(arr,arr+n,compare);
   //print the output
   for(auto x:arr){
    cout<<x<<" ";
   }
return 0;
}
