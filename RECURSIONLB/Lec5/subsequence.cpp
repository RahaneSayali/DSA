void solve(string str,string output,int index,vector<string>& ans){
    //base case
    if(index>=str.length()){
        if(output.length()>0){
        ans.push_back(output);
        }
        return ;

    }
    //exclude
    solve(str,output,index+1,ans);

    //include
    int element=nums[index];
    output.push_back(element);
    solve(nums,output,index+1,ans);
}

public:
vector<vector<int>>subset(vector<int>&nums){
    vector<vector<int>>ans;
    vector<int>output;
    int index=0;
    solve(nums,output,index,ans);
    return ans;
}