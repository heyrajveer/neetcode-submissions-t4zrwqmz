class Solution {
public:
    bool isPalindrome(string s) {
        string ans1="";
        for(int i=0;i<s.size();i++){
             char c = s[i]; 
           if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))

             ans1 += tolower(c); 
            }
        string ans2="";
         for (int n = s.size() - 1; n >= 0; n--) {  
          char c = s[n]; 
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))

             ans2 += tolower(c); 
            }
       
    if(ans1==ans2){
        return true;
    }
    return false;
        
}
};
