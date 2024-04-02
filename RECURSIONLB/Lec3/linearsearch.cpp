#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int k)
{
    // base case
    if (size == 0)
        return false;

    if (arr[0] == k)
    {
        return true;
    }
    else
    {
        bool remainingPart = linearSearch(arr + 1, size - 1, k);
        return remainingPart;
    }
}
int main()
{
    int arr[5] = {3, 4, 5, 6, 1};
    int size = 5; 
    int key = 2;  //5 present
    bool ans = linearSearch(arr, size, key);
    if (ans)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Absent" << endl;
    }
    return 0;
}