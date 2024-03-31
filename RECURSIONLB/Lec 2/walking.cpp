#include<iostream>
using namespace std;

void reachHome(int src,int destination){

    cout<<"source "<<src<<" destination "<<destination<<endl;
    //base case
    if(src==destination){
        cout<<"Reached"<<endl;
        return;
    }
    src++;
    //recursion call
    reachHome(src,destination);
}
int main(){
    int destination=10;
    int src=1;
    reachHome(src,destination);

    return 0;
}