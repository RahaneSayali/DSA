#include<iostream>
using namespace std;
int main(){
    int i=5;
    //create refernce variable 
    int &j=i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<j<<endl;
    cout<<i<<endl;
    
    return 0;
}