#include <iostream>
#include <climits>
using namespace std;
int sumCalculate(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum += arr[i];
        
    }
    return sum;
}
int main()
{
    int arr[5] = {1, 6, 8, 7, 1};
    int result = sumCalculate(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " " << endl;
    }
    cout << "sum is " << result << endl;
    return 0;
}