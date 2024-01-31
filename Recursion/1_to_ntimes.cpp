#include<bits/stdc++.h>
using namespace std;
void func(int i,int n){
    if(i>n) return;  //base condition
    cout<<i<<endl;

    func(i+1,n);  //function call to print i till i increments to n
}

int main(){
    int n=5;
    func(1,n);
    return 0;
    }