#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0;

        for(int i = 0; i < s.size(); i++) {
            unordered_map<char, int> mp;

            for(int j = i; j < s.size(); j++) {
                if(mp.find(s[j]) != mp.end()) {
                    break;
                }

                mp[s[j]] = 1;
                len = max(len, j - i + 1);
            }
        }
        return len;
    }
};