class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

          unordered_set<int> st(nums.begin(),nums.end());
        int longest=0;
          for(auto it:st){
              if(st.find(it-1)==st.end()){
                int x=it;
                int cnt=1;
                while(st.find(x+1)!=st.end()){
                    x=x+1;
                    cnt =cnt+1;
                }
                longest=max(longest,cnt);
              }

          }
          return longest;








        // if(nums.empty()) return 0;
        // sort(nums.begin(),nums.end());
        // int i=0;
        // int j=1;
        // int n=nums.size();
        // int maxi=1;
        // int count=1;
        // while(j<n){
        //     if(nums[j-1]+1==nums[j]){
        //         maxi=max(maxi,++count);
        //         j++;
        //     }
        //     else if(nums[j-1]==nums[j]){
        //         j++;
        //     }
        //     else{
        //         count=1;
        //         i=j;
        //         j++;
        //     }
        // }
        // return maxi;
    }
};
