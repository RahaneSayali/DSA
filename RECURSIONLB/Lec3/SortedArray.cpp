#include <iostream>
using namespace std;

bool isSortedArray(int arr[], int size)
{
    // base case
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = isSortedArray(arr + 1, size - 1);
        return remainingPart;
    }
    //
}
int main()
{
    int arr[5] = {2, 4, 9, 8, 9};
    // int arr[5]={2,4,6,8,9};
    int size = 5;

    bool ans = isSortedArray(arr, size);

    if (ans)
    {
        cout << "Array is sorted" << endl;
    }
    else
        cout << "Not Sorted" << endl;

    return 0;
}