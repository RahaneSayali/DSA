// time complexity=o(log N)
#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid]) // go to right part
        {
            start = mid + 1;
        }
        else // key<arr[mid]
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int even[8] = {3, 4, 5, 78, 90, 101, 111, 134};
    int odd[5] = {2, 34, 55, 66, 78};
    int evenIndex = BinarySearch(even, 8, 90);
    cout << "Index of 90 is " << evenIndex << endl;
    int oddIndex = BinarySearch(odd, 5, 34);
    cout << "Index of 34 is " << oddIndex << endl;
    return 0;
}