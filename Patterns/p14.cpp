#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        char start = 'A' + n - row; //just starting character
        while (col <= row)
        {
            cout << start;
            start = start + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}
