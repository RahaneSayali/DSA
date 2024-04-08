#include<iostream>
using namespace std;

void reverse(string& str,int i,int j){   //& pass by reference
cout<<"call received for "<<str<<endl;

    //base case 
    if(i>j)
    return;

    swap(str[i],str[j]);
    i++;j--;

    //recursive call
    reverse(str,i,j);
}
int main(){
    string name="sayali";
    reverse(name,0,name.length()-1);
    cout<<name<<endl;
    return 0;
}