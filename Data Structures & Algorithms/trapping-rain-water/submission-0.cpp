class Solution {
public:
    int trap(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int maxleft=0,maxright=0,ans =0;
        while(i<j){
            if(nums[i]>nums[j]){
               
                       maxright =max(maxright,nums[j]);
                       ans +=maxright-nums[j];
                       j--;
            }
            else{
                    maxleft=max(nums[i],maxleft);
                   
                        ans += maxleft-nums[i];
                          i++;
    
            }
        }
        return ans;
    }
};
