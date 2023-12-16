// break gets you out of current loop

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;

//     cout<<"printing count from 1 to n"<<endl;

//     for(int i=1;i<=n;i++){   /* initialization; condition ;updation*/
//         cout<<i<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
}