class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
      
        int n=heights.size();
        stack<int>st;
          stack<int>st2;
        vector<int>prev(n,-1);
        vector<int>next(n,n);
        for(int i=0;i<n;i++){
          while(!st.empty()){
            if(heights[st.top()]>=heights[i]){
                st.pop();
            }
            else{
              prev[i]=st.top();
              break;
            }
          }
          st.push(i);
        }

          for(int i=n-1;i>=0;i--){
          while(!st2.empty()){
            if(heights[st2.top()]>=heights[i]){
                st2.pop();
            }
            else{
              next[i]=st2.top();
              break;
            }
          }
          st2.push(i);
        }
int ans =0;
        for(int i=0;i<n;i++){
           int length =next[i]-prev[i] -1;
          ans =max(ans,length*heights[i]);
        }
return ans;
        
    }
};
