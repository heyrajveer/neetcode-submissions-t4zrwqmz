class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false; // Early exit condition
        
        unordered_map<char, int> freq;
        
        for (char c : s) freq[c]++;  // Count frequencies
        for (char c : t) {
            if (--freq[c] < 0) return false;  // Reduce count and check for negative values
        }
        
        return true;
    }
};
