#include<iostream>
using namespace std;
int linear_search(int arr[],int n, int key){
    for (int i=0;i<n;i++){
        //check if current element matches the key
        if(arr[i] == key){
            return i;
        }
        //out of loop
        return -1;
    }
}
    int main(){
        int arr[]={10,20,30,40,50,9};
        int n=sizeof(arr)/sizeof(int);

        int key;
        cin>>key;

        int index=linear_search(arr,n,key);
        if(index !=-1){
            cout<<key<<"is present at index"<<index<<endl;
        }
        else{
            cout<<key<<"is Not Found"<<endl;  
    }
        return 0;   
}