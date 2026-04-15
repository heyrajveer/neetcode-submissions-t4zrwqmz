class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string,vector<string>> mp;
      for( auto & s:strs){
         string sorted_str=s;
         sort(sorted_str.begin(),sorted_str.end());
         mp[sorted_str].push_back(s);
      }  
      vector<vector<string>> ans;
      for(auto & it:mp){
        ans.push_back(it.second);
      }
      return ans;
    }
};
