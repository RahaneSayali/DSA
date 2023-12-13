#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        // print space

        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        // print 1st tri
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j = j + 1;
        }

        // print 2nd tri
        int start = i - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }
        cout << endl;
        i = i + 1;
    }
}