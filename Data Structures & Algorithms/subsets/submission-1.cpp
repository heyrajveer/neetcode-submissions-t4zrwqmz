class Solution {
public:
void solve(vector<int>& nums,vector<vector<int>>&ans,vector<int>&temp,int i){
    if(i>=nums.size()){
        ans.push_back(temp);
        return;
    }
    //skip
    solve(nums,ans,temp,i+1);
    int element =nums[i];
    temp.push_back(element);
    //no-skip
     solve(nums,ans,temp,i+1);
     temp.pop_back();


}
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>>ans;
      vector<int>temp;
         solve(nums,ans,temp,0);
         return ans;
    }
};
