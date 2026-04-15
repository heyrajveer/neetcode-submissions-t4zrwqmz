class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=1;
        int n=nums.size();
        int maxi=1;
        int count=1;
        while(j<n){
            if(nums[j-1]+1==nums[j]){
                maxi=max(maxi,++count);
                j++;
            }
            else if(nums[j-1]==nums[j]){
                j++;
            }
            else{
                count=1;
                i=j;
                j++;
            }
        }
        return maxi;
    }
};
