class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
         for(string &a:strs){

            s  =  s+ to_string(a.size()) +'#' + a ;
         }
         return s;
    }

    vector<string> decode(string s) {
        vector<string> v;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int length =stoi(s.substr(i,j-i));
            
            v.push_back(s.substr(j+1,length));
            i = j+length+1;

        }
        return v;
    }
};
