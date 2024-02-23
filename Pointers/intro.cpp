#include<iostream>
using namespace std;
int main(){
    int num=5;
    cout<<num<<endl;

    //address of operator-&

    cout<<"Address of num is"<<&num<<endl;


    int *ptr=&num;
    cout<<"address is "<<ptr<<endl;

    cout<<"value is "<<*ptr<<endl;

    return 0;
}

//output is in hexadecimal format