class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
       ans.push_back(0);
       for(int i=1;i<=n;i++){
        int cnt =0;
        int j=i;
          while(j){
            j= j&(j-1);
            cnt++;
          }
          ans.push_back(cnt);
       } 
       return ans;
    }
};
