class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
       int i=0,j=n-1;
       int result=0;
       while(i<j){
         result=max(result,(min(heights[i],heights[j])*(j-i)));
        if(heights[i]<heights[j]){
            i++;
        }
        else{
            j--;
        }
       }
       return result;

        // vector<int> start;
        // vector<int> end;
        // for(int i=0;i<heights.size();i++){
        //      int maxi=max(maxi,heights);
        //      end.push_back(maxi);

        // }
        // int maxi1=0;
        //  for(int i=;n-1;i>=0;i--){
        //      int maxi1=max(maxi1,heights);
        //      start.push_back(maxi1);
        // }
        // int result=0;
        // for(int i=0;i<start.size();i++){
        //      result=max(result,mini(start[i],end[i])*)
        // }
    }
};
