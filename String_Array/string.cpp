#include<iostream>
using namespace std;
int main(){
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;

    cout<<"Your name is ";
    cout<<name<<endl;
    return 0;
}

//in case of cin = after space,endl excution stops
//hence output sayali 