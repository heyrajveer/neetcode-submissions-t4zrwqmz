class Solution {
public:
   bool valid(string s){
    int left=0; 
    int right =0;
     for(int i=0;i<s.size();i++){
       if(s[i]=='('){
        left++;
       }
      if(s[i]==')'){
          if(left<=0){
            return false;
        }
        left--;
      }
     }
     if(left==0){
        return true;
     }
     return false;
   }
   void solve(int n,string s,vector<string >&ans){
    if(s.size() >= n ){
        if(valid(s)){
            ans.push_back(s);
        }
        return;
    }
    if(s.size() < n){
      s += '(';
      solve(n,s,ans);
      s.pop_back();
    }
       if(s.size() < n){
      s += ')';
      solve(n,s,ans);
      s.pop_back();
    }
   }
    vector<string> generateParenthesis(int n) {
        string s ="";
        vector<string >ans;
         solve(2*n,s,ans);
         return ans;
    }
};
