class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
       stack<pair<int,int>>st;
       vector<int>ans(n,0);
       for(int i=n-1;i>=0;i--){
           if(!st.empty()){
             while(!st.empty()){
                if(temperatures[i] >=st.top().first){
                    st.pop();
                }
                else{
                    ans[i]=st.top().second-i;
                    break;
                }
             }
            
             
           }
          
            st.push({temperatures[i],i});
          
       }
       return ans;
    }
};
