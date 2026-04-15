class Solution {
public:
    int characterReplacement(string s, int k) {
         int len=0;
        for(int i=0;i<s.size();i++){
           int start=0;
           int j=0;
           int count=k;
           while(j<s.size()){
            if(s[i]==s[j]){
                j++;
            }
            else if(s[i]!=s[j]&& count>0 ){
                count--;
                j++;
            }
            else{
                if(s[start]!=s[i]){
                    count++;
                }
              start++;
            }

            len = max(len, j - start);
           }
                    

        }
        return len;
    }
};
