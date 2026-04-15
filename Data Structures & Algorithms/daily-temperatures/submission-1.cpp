class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
           if(temperatures[i]<temperatures[j]){
                 v[i]= j-i;
                 break;
           }
         }
           
        }
        return v;
    }
};
