#include <iostream>
using namespace std;
bool isPresent(int arr[][3], int target, int row, int col)
{
    for (int col = 0; col < 3; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
// to print row wise sum
void printSum(int arr[][3], int row, int col)
{
    cout << "printing Sum ->" << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

int main()
{
    // create 2d array
    int arr[3][3];
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    /*taking input->row wise input
   for(int i=0;i<3;i++){
       for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
 }
 */
    cout << "enter the elements" << endl;
    // taking input->col wise input
    for (int col = 0; col < 3; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cin >> arr[row][col];
        }
    }

    // print
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << "Enter the element to search" << endl;
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "Elment found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    printSum(arr, 3, 3);

    
    return 0;
}