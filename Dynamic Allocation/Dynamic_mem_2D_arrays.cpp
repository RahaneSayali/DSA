#include <iostream>
using namespace std;
int main()

{
    int row;
    cin >> row;

    int col;
    cin >> col;

    // int n;
    // cin >> n;

    // creating 2d array
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // creation done

    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // taking output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    // how to create 2d array dynamically
    // input/output
    // how to delete memory
    return 0;
}