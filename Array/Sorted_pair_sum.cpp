#include<bits/stdc++.h>
using namespace std;

pair<int,int> closesSum(vector<int> arr, int x){
   int n=arr.size();
   int s=0, e=n-1;
   int diff=INT_MAX;
   int leftIdx,rightIdx;

   while(s=e){
    int cs =arr[s] +arr[e];
    //update the difference
    if(abs(cs-x)<diff){
        leftIdx=s;
        rightIdx=e;
        diff=abs(cs-x);
    }
    if (cs>x){
        e--;
    }
    else{
        s++;
    }
   }
return {arr[leftIdx],arr[rightIdx]};
}
