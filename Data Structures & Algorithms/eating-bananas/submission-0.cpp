class Solution {
public:
   int solve(vector<int>& piles, int h){
    int hour=0;
     for(int i=0;i<piles.size();i++){
        hour +=ceil(double(piles[i])/double(h));
     }
     return hour;
   }
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int low=1,high=(piles[piles.size()-1]);
       
       while(low<=high){
            int mid= (low+high)/2;//jitne kele me kha rha hu
            int totalhmeneliye=solve(piles,mid);
            if( totalhmeneliye<=h){
                high=mid-1;//piles km khao
            }
            else{
                low=mid+1;//piles jada khao
            }
        }
        return low;
    }
};
