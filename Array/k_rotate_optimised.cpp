#include<bits/stdc++.h>
using namespace std;

 vector<int>kRotate(vector<int> arr,int k){
  int n=arr.size();
   k=k%n;

   reverse(arr.begin(),arr.begin()+n-k);
   reverse(arr.begin()+n-k, arr.end());
   reverse(arr.begin(),arr.end());

   return arr;
}