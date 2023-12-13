#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n) // this is almost same
    {
        int col = 1;
        while (col <= row) // just here you have to think
        {
            char ch = ('A' + row - 1); // just here you have to think
            cout << ch;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}