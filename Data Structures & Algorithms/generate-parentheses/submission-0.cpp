class Solution {
public:
bool isValid(string &s){
    stack<char>st;
    for(auto &i:s){
     if(i=='('){
        st.push(i);
        }
        else{
            if(st.empty())return false;
            st.pop();
        }
    }
   return   st.empty()?true:false;
}
vector<string> result;
void solve(string &s,int n){
    if(s.size()==2*n){
        if(isValid(s)){
        result.push_back(s);
            
        }
        return;   
    }
    s.push_back('(');
    solve(s,n);
    s.pop_back();

    s.push_back(')');
    solve(s,n);
    s.pop_back();

}
    vector<string> generateParenthesis(int n) {
       string s="";
        solve(s,n);
        return result;
    }
};
