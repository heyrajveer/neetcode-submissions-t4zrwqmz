class Solution {
public:
void solve(vector<int>& nums,int idx,set<vector<int>>&st,vector<int>v){
if(idx >=nums.size()){
    st.insert(v);
    return ;
}
int e =nums[idx];
v.push_back(e);
solve(nums,idx+1,st,v);
if( idx< nums.size()-1&& nums[idx] == nums[idx+1]) idx++;
v.pop_back();
solve(nums,idx+1,st,v);

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>st;
        vector<int>v;
        sort(nums.begin(),nums.end());
        solve(nums,0,st,v);
         vector<vector<int>>ans;
        for(auto i:st){
        ans.push_back(i);
        }
        return ans;
    }
};
