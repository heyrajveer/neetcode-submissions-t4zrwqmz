class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxLen = 0;

        // Try every character as the dominant character
        for (int i = 0; i < s.size(); i++) {
            int start = 0, j = 0, count = k;

            while (j < s.size()) {
                if (s[j] == s[i]) {
                    j++;
                } else if (count > 0) {
                    count--;  // Replace a character
                    j++;
                } else {
                    if (s[start] != s[i]) {
                        count++;  // Restore replacement count
                    }
                    start++;  // Shrink the window
                }

                maxLen = max(maxLen, j - start);
            }
        }
        
        return maxLen;
    }
};
