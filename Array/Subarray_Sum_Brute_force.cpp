#include<iostream>
using namespace std;
//Brute Force Approch o(N^3) =checking all posibiliy
int largestSubarraysSum(int arr[],int n){
    int largest_sum=0;
    for(int i=0;i<n;i++){

        for(int j=i;j<n;j++){
            //cout<<"("<<i<<" , "<<j<<")"<<endl;
            int  subarraySum =0;

            for (int k=i;k<=j;k++){
                //cout<<arr[k]<<",";
                subarraySum += arr[k];
            }
            //put a check is subarraySum >largest sum
                largest_sum =max(largest_sum,subarraySum);
            }

    }
    return largest_sum;
}

//prefix sum o(N^2)
int largestSubarraysSum1(int arr[],int n){

    int prefix[n]={0};
    prefix[0]=arr[0];
    for (int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];

    }
    //largest sum login
    int largest_sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){

            int  subarraySum = i>0 ? prefix[j]-prefix[i-1] : prefix[j];
                largest_sum =max(largest_sum,subarraySum);
            }

    }
    return largest_sum;
}

int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);

    cout<<largestSubarraysSum(arr,n)<<endl;
    cout<<largestSubarraysSum1(arr,n)<<endl;
    return 0;
}


