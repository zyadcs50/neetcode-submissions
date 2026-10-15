class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int length = 0;

        while (r < s.length()) {
            bool duplicate = false;

            for (int i = l; i < r; i++) {
                if (s[i] == s[r]) {
                    duplicate = true;
                    break;
                }
            }

            if (duplicate) {
                l++;
            } else {
                length = max(length, r - l + 1);
                r++;
            }
        }

        return length;
    }
};