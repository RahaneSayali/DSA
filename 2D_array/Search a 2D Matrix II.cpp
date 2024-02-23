class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();  //total row
        int col=matrix[0].size(); //total col



        int rowIndex=0;   //start from here i.e first row
        int colIndex=col-1;  //strat from here i.3 last col

        while(rowIndex<row && colIndex>=0){
            int element=matrix[rowIndex][colIndex];

            if(element==target){
                return 1;
            }
            if(element<target){
                rowIndex++;
            }
            else{
                colIndex--;
            }
        }
        return 0;
    }
};


//IMP DRY RUN
