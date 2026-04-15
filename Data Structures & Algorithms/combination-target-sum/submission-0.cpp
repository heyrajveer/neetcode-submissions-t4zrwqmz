class Solution {
public:
  void solve(vector<int>& nums, int target,vector<vector<int>>&ans,vector<int>temp,int i){
    if(target==0){
        ans.push_back(temp);
        return ;
    }
    if(i>=nums.size()){
        return;
    }

    if(target>=nums[i]){
        temp.push_back(nums[i]);
        solve(nums,target-nums[i],ans,temp,i);
        temp.pop_back();
    }
     solve(nums,target,ans,temp,i+1);

  }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
         solve(nums,target,ans,temp,0);
         return ans;
    }
};
