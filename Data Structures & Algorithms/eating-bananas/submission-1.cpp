class Solution {
public:

   int solve(vector<int>& piles, int k){
        float ans =0;
        for(auto i:piles){
            ans +=(i + k - 1) / k;
        }
        return ans ;
   }
    int minEatingSpeed(vector<int>& piles, int h) {
        int high =*max_element(piles.begin(),piles.end());
        int low =1;
        int ans =high;
        while(low<=high){
          int mid =(low+high)/2;
          int H =solve(piles,mid);
          if(H <=h){
            ans =mid ;
            high =mid-1;
          }
          else{
            low=mid+1;
          }
        }
        return ans;
    }
};
