#include<bits/stdc++.h>
using namespace std;

 vector<int>kRotate(vector<int> arr,int k){
  int n=arr.size();
   k=k%n;

   vector<int> output;
   for(int i=n-k; i<=n-1;i++){
    output.push_back(arr[i]);
   }
   for(int i=0;i<n-k;i++){
    output.push_back(arr[i]);
   }
   return output;
}

