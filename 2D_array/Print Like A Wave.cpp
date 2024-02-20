#include <bits/stdc++.h>
// #include<vector>
// using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for (int col = 0; col < mCols; col++)
    {
        if (col & 1)
        {
            // odd Index -> Bottom to Top
            for (int row = nRows - 1; row >= 0; row--)
            {
                // cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            // 0 or even index ->top to bottom
            for (int row = 0; row < nRows; row++)
            {
                // cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

/*Time complexity
n*m i.e n represents no. cols and m represents no. rows
O(n)
*/























