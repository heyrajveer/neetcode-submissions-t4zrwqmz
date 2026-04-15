class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
       unordered_map<string,bool> mp;
        for(int i=0;i<strs.size();i++){
            if(mp[strs[i]]==true){
                continue;
            }
            vector<string> output;
            string s=strs[i];
            output.push_back(s);
            sort(s.begin(),s.end());

            for(int j=i+1;j<strs.size();j++){
                string next=strs[j];
                sort(next.begin(),next.end());
                if(next==s){
                    output.push_back(strs[j]);
                    mp[strs[j]]=true;
                }
            }
            ans.push_back(output);


        }
        return ans;


    }
};
