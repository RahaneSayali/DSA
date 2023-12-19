#include <iostream>
using namespace std;
bool isEven(int a)
{
    if (a & 1)
    {
        return 0; // odd
    }
    return 1; // Even
}
int main()
{
    int num;
    cin >> num;
    if (isEven(num))
    {
        cout << "Num is Even" << endl;
    }
    else
    {
        cout << "Num is Odd" << endl;
    }
    return 0;
}