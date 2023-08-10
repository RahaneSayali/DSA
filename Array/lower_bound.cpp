#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> A, int val){

   int s=0;
   int e=A.size()-1;
   int ans=-1;

   while (s<=e){
    int mid=(s+e)/2;
    if(A[mid]<=val){
        ans=A[mid];
        s=mid +1;
    }
    else{
        e=mid-1;
    }
   }
   return ans;
}