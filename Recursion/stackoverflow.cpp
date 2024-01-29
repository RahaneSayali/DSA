#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void print(){
    if(cnt==3)  //base condition
    return;
    cout<<cnt<<endl;

    cnt++;   //count incremented
    print();
}
int main(){
    print();
    return 0;
}