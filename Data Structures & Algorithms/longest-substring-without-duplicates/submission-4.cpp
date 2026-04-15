class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int l = 0, res = 0;
        
        for (int r = 0; r < s.size(); r++) {
            if (mp.find(s[r]) != mp.end()) {
                int a=l;
                l = (mp[s[r]] + 1);
                while(a<l){
                    mp.erase(s[a]); 
                    a++;   
                }

            }

            mp[s[r]] = r;
            res = max(res, r - l + 1);
        }
        return res;
    }
};