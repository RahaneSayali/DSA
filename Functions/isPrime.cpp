#include <iostream>
using namespace std;
// 1-->Prime no.
// 0 -->not prime no.
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << "num is prime no" << endl;
    }
    else
    {
        cout << "not a prime no" << endl;
    }
    return 0;
}