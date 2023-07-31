#include <iostream>
using namespace std;
int main(){
   int marks[100];
   int n;
   cout<<"enter the no. of students";
   cin>>n;
//input
   for (int i=0;i<n;i++)
   {
    cin>>marks[i];
   }
//output   
   for(int i=0;i<n;i++)
   {
    cout<<marks[i]<<" ,";
   }
   cout<<endl;
   return 0;
}