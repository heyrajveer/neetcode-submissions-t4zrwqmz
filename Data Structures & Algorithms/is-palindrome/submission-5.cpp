class Solution {
public:
    bool check(char ch){
      if((ch>='a' && ch<='z' )||( ch>='0' && ch<='9')){
        return true;
      }
      return false;
    }
    bool isPalindrome(string s) {
      string st ="";
        for(int i=0;i<s.size();i++){
          
      if( check(tolower(s[i]))){
            st +=tolower(s[i]);
          }
        }
        int i=0,j=st.size()-1;
        while(i<j){
          if(st[i]!=st[j]){
            return false;
          }
          i++,j--;
        } 
        return true;  
    }

};
