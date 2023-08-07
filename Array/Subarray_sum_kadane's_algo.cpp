#include <iostream>
using namespace std;
int max_subarray_sum(int arr[],int n){
    int cs =0;
    int largest=0;

    for (int i=0;i<n;i++){
        cs=cs + arr[i];
        if (cs<0){
            cs=0;
        }
        largest= max(largest,cs);

    }
    return largest;
}
int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    cout<<max_subarray_sum(arr,n)<<endl;
    return 0;
}