#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no." << endl;
    cin >> n;
    bool isprime = 1;
    for (int i = 2; i < n; i++)
    {
        // not prime
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 0)
    {
        cout << "Not a Prime NO." << endl;
    }
    else
    {
        cout << "Is Prime No." << endl;
    }
}