#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> arr){
//all negative elements
bool allNeg =true;
int largest =INT_MIN;
for(int x:arr){
    if(x>0){
        allNeg=false;
    }
    largest=max(largest,x);
}
//special case
if(allNeg){
    return largest;
}
//Kadane's Logic
int cs=0;
int ans=0;
for(int x:arr){
    cs=cs+x;
    if(cs<0){
        cs=0;
    }
    ans=max(ans,cs);
}
return ans;
}
