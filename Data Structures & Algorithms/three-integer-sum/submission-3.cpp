class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     set<vector<int>>mp;
        int i=0,n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int j=i+1,k=n-1;
            if(i!=0 && nums[i]==nums[i-1]) continue;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    mp.insert({nums[i],nums[j],nums[k]});
                      j++,k--;
                    while (j < k && nums[j] == nums[j - 1]) j++;
                while (j < k && nums[k] == nums[k + 1]) k--;
                  
                }
                else if(nums[i]+nums[j]+nums[k] <0){
                    j++;
                }
                else{
                    k--;
                }
            }
        
        }
        vector<vector<int>>ans;
        for(auto i:mp){
            ans.push_back(i);
        }
        return ans;
    }
};
