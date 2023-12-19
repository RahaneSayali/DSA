#include <iostream>
using namespace std;

// function signature
void printCounting(int n) // void used when function is not returning anything
{
    // function body
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    // function call
    printCounting(n);

    return 0;
}